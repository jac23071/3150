#include "complex.h"

void Complex::print(std::ostream& os) const{
	os << "(" << real_ << "+" << imag_ << "i)";

}

Complex Complex::add(const Complex& c2) const{
	const double r = real_ + c2.real_;
	const double i = imag_ + c2.imag_;
	return Complex(r, i);

}


