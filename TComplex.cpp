#include "TComplex.h"

TComplex::TComplex()
{
	re = 0;
	im = 0;
}

TComplex::TComplex(double re_, double im_)
{
	re = re_;
	im = im_;
}

TComplex::TComplex(double re_)
{
	re = re_;
	im = 0;
}

TComplex::TComplex(const TComplex& other)
{
	re = other.re;
	im = other.im;
}

void TComplex::setRe(double re_)
{
	re = re_;
}

void TComplex::setIm(double im_)
{
	im = im_;
}

double TComplex::getRe()
{
	return re;
}

double TComplex::getIm()
{
	return im;
}

TComplex TComplex::operator+(const TComplex& other)
{
	TComplex result;
	result.re = re + other.re;
	result.im = im + other.im;
	return result;
}

TComplex TComplex::operator-(const TComplex& other)
{
	TComplex result;
	result.re = re - other.re;
	result.im = im - other.im;
	return result;
}

TComplex TComplex::operator*(const TComplex& other)
{
	TComplex result;
	result.re = re * other.re - im * other.im;
	result.im = re * other.im + im * other.re;
	return result;
}

TComplex TComplex::operator/(const TComplex& other)
{
	TComplex result;
	double denom = other.re * other.re + other.im * other.im;
	result.re = (re * other.re + im * other.im) / denom;
	result.im = (im * other.re - re * other.im) / denom;
	return result;
}

TComplex& TComplex::operator=(const TComplex& other)
{
	if (this == &other)
	return *this;
	re = other.re;
	im = other.im;
	return *this;
}

bool TComplex::operator==(const TComplex& other)
{
	return (re == other.re) && (im == other.im);
}

bool TComplex::operator!=(const TComplex& other)
{
	return (re != other.re) || (im != other.im);
}

std::ostream& operator<<(std::ostream& out, const TComplex& c)
{
	if (c.im >= 0)
		out << c.re << '+' << c.im << 'i';
	else
		out << c.re << c.im << 'i';
	return out;
}

std::istream& operator>>(std::istream& in, TComplex& c)
{
	in >> c.re >> c.im;
	return in;
}