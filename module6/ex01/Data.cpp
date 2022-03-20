#include "Data.h"

Data::Data() : value(0) {}

Data::~Data() {}

Data::Data(const int value) : value(value) {}

Data::Data(const Data &src) : value(src.value) {}

Data& Data::operator=(const Data& src) {

	this->value = src.value;
	return *this;
}

uintptr_t	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw) {

	return reinterpret_cast<Data*>(raw);
}

