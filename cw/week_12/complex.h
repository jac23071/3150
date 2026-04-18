#pragma once
#include <iostream>

class Complex{
	double real_;
	double imag_;

	Complex add(const Complex& c2) const;
	void print(std::ostream& os) const;
public:
	Complex(): real_(0), imag_(0) {}
	Complex(double a, double b): real_(a), imag_(b) {}
	Complex(const Complex& c):
		real_(c.real_),
		imag_(c.imag_){}
	Complex& operator=(const Complex& c){
		real_ = c.real_;
		imag_ = c.imag_;
		return *this;
	}
	friend Complex operator+(const Complex& a, const Complex& b){
		std::cout << "Possible with friend: " << a.real_ << std::endl;
		return a.add(b);
	}

	friend Complex operator+(const Complex& a, int b){
		return Complex(a.real_ + b, a.imag_);
	}

	friend Complex operator+(int b, const Complex& a){
		return Complex(a.real_ + b, a.imag_);
	}

	friend std::ostream& operator<<(
	std::ostream& os, const Complex& c){
		c.print(os);
		return os;
	}	
};
