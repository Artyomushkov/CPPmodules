#include "Caster.h"

Caster::Caster(void) {}

Caster::~Caster(void) {}

Caster::Caster(const std::string &input) :
input(input), type(0), cvalue(0), ivalue(0), fvalue(0), dvalue(0), cerr(0),
ierr(0), ferr(0) {

	this->parseArgument();
}

Caster::Caster(const Caster& src) :
input(src.input), type(src.type), cvalue(src.cvalue), ivalue(src.ivalue),
fvalue(src.fvalue), dvalue(src.dvalue), cerr(src.cerr), ierr(src.ierr),
ferr (src.ferr) {}

Caster& Caster::operator=(const Caster& src) {

	this->input = src.input;
	this->type = src.type;
	this->cvalue = src.cvalue;
	this->ivalue = src.ivalue;
	this->fvalue = src.fvalue;
	this->dvalue = src.dvalue;
	this->cerr = src.cerr;
	this->ierr = src.ierr;
	this->ferr = src.ferr;

	return *this;
}

int Caster::getType() const {

	return this->type;
}

char Caster::getChar() const {

	return this->cvalue;
}

int Caster::getInt() const {

	return this->ivalue;
}

float Caster::getFloat() const {

	return this->fvalue;
}

double Caster::getDouble() const {

	return this->dvalue;
}

int Caster::getCharError() const {

	return this->cerr;
}

int Caster::getIntError() const {

	return this->ierr;
}

int Caster::getFloatError() const {

	return this->ferr;
}

std::string Caster::getInput() const {

	return this->input;
}

static int defineTypeOfArgument(const std::string& str) {

	int points = 0;

	if (str == ".")
		return (0);
	if (str == "inf" || str == "-inf" || str == "+inf" || str == "nan" ||
		str == "inff" || str == "-inff" || str == "+inff"|| str == "nanf")
		return (5);
	for (int i = 0; str[i]; ++i)
	{
		if (std::isdigit(str[i]) == 0)
		{
			if (str[i] == '.')
			{
				points++;
				if (points > 1)
					return (4);
			}
			else if (str[i] == 'f' && str[i + 1] == 0)
				return (2);
			else if (str.length() > 1)
				return (4);
			else
				return (0);
		}
	}
	if (points == 0)
		return (1);
	return (3);
}

void Caster::fromChar() {

	this->cvalue = this->input[0];
	this->ivalue = static_cast<int>(this->cvalue);
	this->fvalue = static_cast<float>(this->cvalue);
	this->dvalue = static_cast<double>(this->cvalue);
}

void Caster::fromInt() {

	errno = 0;
	char *end;

	long l = strtol(this->input.c_str(), &end, 0);
	if (errno != 0) {
		this->type = 3;
		Caster::fromDouble();
		return;
	}
	if (l > std::numeric_limits<int>::max() ||
		l < std::numeric_limits<int>::min()) {
		this->type = 3;
		Caster::fromDouble();
		return;
	}
	this->ivalue = static_cast<int>(l);
	if (this->ivalue > std::numeric_limits<char>::max() ||
		this->ivalue < std::numeric_limits<char>::min())
		this->cerr = 1;
	else if (this->ivalue < 32 || this->ivalue > 126)
		this->cerr = 2;
	else
		this->cvalue = static_cast<char>(this->ivalue);
	this->fvalue = static_cast<float>(this->ivalue);
	this->dvalue = static_cast<double>(this->ivalue);
}

void Caster::fromFloat() {

	errno = 0;
	char *end;

	double d = strtod(this->input.c_str(), &end);
	if (errno != 0) {
		this->type = 4;
		return;
	}
	if (d > std::numeric_limits<float>::max() ||
		d < std::numeric_limits<float>::min()) {
		this->type = 4;
		return;
	}
	this->fvalue = static_cast<float>(d);
	if (this->fvalue > std::numeric_limits<char>::max() ||
		this->fvalue < std::numeric_limits<char>::min())
		this->cerr = 1;
	else if (this->fvalue < 32 || this->fvalue > 126)
		this->cerr = 2;
	else
		this->cvalue = static_cast<char>(this->fvalue);
	if (this->fvalue > std::numeric_limits<int>::max() ||
		this->fvalue < std::numeric_limits<int>::min())
		this->ierr = 1;
	else
		this->ivalue = static_cast<int>(this->fvalue);
	this->ivalue = static_cast<int>(this->fvalue);
	this->dvalue = static_cast<double>(this->fvalue);
}

void Caster::fromDouble() {

	errno = 0;
	char *end;

	double d = strtod(this->input.c_str(), &end);
	if (errno != 0) {
		this->type = 4;
		return;
	}
	this->dvalue = d;
	if (this->dvalue > std::numeric_limits<char>::max() ||
		this->dvalue < std::numeric_limits<char>::min())
		this->cerr = 1;
	else if (this->dvalue < 32 || this->dvalue > 126)
		this->cerr = 2;
	else
		this->cvalue = static_cast<char>(this->dvalue);

	if (this->dvalue > std::numeric_limits<int>::max() ||
		this->dvalue < std::numeric_limits<int>::min())
		this->ierr = 1;
	else
		this->ivalue = static_cast<int>(this->dvalue);

	if (this->dvalue > std::numeric_limits<float>::max() ||
		this->dvalue < std::numeric_limits<float>::min())
		this->ferr = 1;
	else
		this->fvalue = static_cast<float>(this->dvalue);
}

void Caster::fromSpecialSymbols(void) {

	this->cerr = 1;
	this->ierr = 1;
	if (this->input == "+inf" || this->input == "inf" ||
	this->input == "inff" || this->input == "+inff") {
		this->fvalue = std::numeric_limits<float>::infinity();
		this->dvalue = std::numeric_limits<double>::infinity();
		return ;
	}
	if (this->input == "-inf" || this->input == "-inff") {
		this->fvalue = -std::numeric_limits<float>::infinity();
		this->dvalue = -std::numeric_limits<double>::infinity();
		return ;
	}
	if (this->input == "nan" || this->input == "nanf") {
		this->fvalue = -std::numeric_limits<float>::quiet_NaN();
		this->dvalue = -std::numeric_limits<double>::quiet_NaN();
		return ;
	}
}

void Caster::parseArgument(void) {

	this->type = defineTypeOfArgument(this->input);
	if (this->type == 0)
		this->fromChar();
	else if (this->type == 1)
		this->fromInt();
	else if (this->type == 2)
		this->fromFloat();
	else if (this->type == 3)
		this->fromDouble();
	else if (this->type == 5)
		this->fromSpecialSymbols();
}

std::ostream& operator<<(std::ostream& stream, const Caster& caster) {

	if (caster.getType() == 4)
	{
		stream << "char: impossible" << std::endl
			   << "int: impossible" << std::endl
			   << "float: impossible" << std::endl
			   << "double: impossible";
		return stream;
	}
	if (caster.getCharError() == 1)
		stream << "char: impossible" << std::endl;
	else if (caster.getCharError() == 2)
		stream << "char: Non displayable" << std::endl;
	else
		stream << "char: '" << caster.getChar() << "'" << std::endl;
	if (caster.getIntError() == 1)
		stream << "int: impossible" << std::endl;
	else
		stream << "int: " << caster.getInt() << std::endl;
	if (caster.getFloatError() == 1)
		stream << "float: impossible" << std::endl;
	else
	{
		stream << "float: " << caster.getFloat();
		if (caster.getType() != 5 && caster.getInput().find('.') ==
		std::string::npos && caster.getInput().length() < 7)
			stream << ".0f" << std::endl;
		else
			stream << "f" << std::endl;
	}
	stream << "double: " << caster.getDouble();
	if (caster.getType() != 5 && caster.getInput().find('.') ==
		std::string::npos && caster.getInput().length() < 7)
		stream << ".0";
	return stream;
}
