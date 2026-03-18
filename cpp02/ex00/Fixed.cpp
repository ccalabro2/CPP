#include "Fixed.hpp"

Fixed::Fixed(){
    number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
    if (this != &other) {
        this->number = other.number;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return(*this);
}

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    this->number = other.number;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->number);
}

void Fixed::setRawBits(int const raw){
    this->number = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
