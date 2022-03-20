#ifndef MODULE6_CASTER_H
#define MODULE6_CASTER_H

# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>
# include <cctype>
# include <cmath>
# include <limits>

class Caster {

private:
	std::string			input;
	int					type;
	char 				cvalue;
	int 				ivalue;
	float 				fvalue;
	double 				dvalue;
	int					cerr;
	int 				ierr;
	int 				ferr;

	Caster(void);

public:
	Caster(const std::string& input);
	~Caster(void);
	Caster(const Caster& src);
	Caster& operator=(const Caster& src);

	int 	getType(void) const;
	char	getChar(void) const;
	int 	getInt(void) const;
	float 	getFloat(void) const;
	double 	getDouble(void) const;
	int 	getCharError(void) const;
	int		getIntError(void) const;
	int 	getFloatError(void) const;
	std::string getInput(void) const;

private:
	void fromChar(void);
	void fromInt(void);
	void fromFloat(void);
	void fromDouble(void);
	void fromSpecialSymbols(void);
	void parseArgument(void);
};

std::ostream& operator<<(std::ostream& o, const Caster& caster);

#endif
