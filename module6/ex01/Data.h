#ifndef MODULE6_DATA_H
#define MODULE6_DATA_H

#include <iostream>
#include <cstdint>

class Data {

private:
	int	value;

public:
	Data(void);
	~Data(void);
	Data(const int value);
	Data(const Data& src);
	Data&	operator=(const Data& src);
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
