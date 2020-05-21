#ifndef _TCOMPLEX_H_
#define _TCOMPLEX_H_
#include <iostream>
class TComplex{
	double re, im;
public:
	TComplex();
	TComplex(double re_, double im_);
	TComplex(double re_);
	TComplex(const TComplex& other);
	void setRe(double re_);
	void setIm(double im_);
	double getRe();
	double getIm();
	TComplex operator+(const TComplex& other);
	TComplex operator-(const TComplex& other);
	TComplex operator*(const TComplex& other);
	TComplex operator/(const TComplex& other);
	TComplex& operator=(const TComplex& other);
	bool operator==(const TComplex& other);
	bool operator!=(const TComplex& other);
	friend std::ostream& operator<<(std::ostream& out, const TComplex& c);
	friend std::istream& operator>>(std::istream& in, TComplex& c);
};
#endif