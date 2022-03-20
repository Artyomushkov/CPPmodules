template <typename T>
Array<T>::Array() : data(NULL), len(0) {}

template <typename T>
Array<T>::~Array() {

	delete[] this->data;
}

template <typename T>
Array<T>::Array(const unsigned int len) : data(NULL), len(len) {

	this->data = new T[len]();
}

template <typename T>
Array<T>::Array(const Array& src) : data(NULL), len(src.len) {

	this->data = new T[src.len];
	for (int i = 0; i < src.len; ++i)
		this->data[i] = src.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {

	if (this == &src)
		return *this;
	if (this->data)
		delete [] this->data;
	this->data = new T[src.len];
	for (int i = 0; i < src.len; ++i)
		this->data[i] = src.data[i];
	this->len = src.len;
	return *this;
}

template <typename T>
const char* Array<T>::outOfRange::what() const throw() {
	return ("Out of range error"); }


template <typename T>
T	Array<T>::operator[](int index) const {
	if (index < 0 || index >= this->size)
		throw outOfRange();
	return data[index];
}

template <typename T>
T&	Array<T>::operator[](int index) {
	if (index < 0 || index >= this->len)
		throw outOfRange();
	return data[index];
}

template <typename T>
int Array<T>::size() const {

	return this->len;
}
