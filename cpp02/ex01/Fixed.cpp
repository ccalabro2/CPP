#include "Fixed.hpp"

Fixed::Fixed(){
	number = 0;
	std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
	std::cout << "int constructor called" << std::endl;
	number = value << fractionalBits;
}

Fixed::Fixed(const float value){
	std::cout << "float constructor called" << std::endl;
	number = static_cast<int>(roundf(value *(1 << fractionalBits)));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
	if (this != &other) {
		number = other.number;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return(*this);
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	number = other.number;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return(number);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	number = raw;
}

int Fixed::toInt(void) const{
	return(number >> fractionalBits);
}

float Fixed::toFloat(void) const{
	return(number / 256.0f);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return (os);
}
