#include <iostream>
#include "TComplex.h"
using namespace std;

int main(){
	TComplex a, b(4, 3), c(b), d, f;
	cout << "a=" << a << "  b=" << b << "  c=" << c << endl;
	c.setRe(2);
	c.setIm(1);
	d = c + b;
	cout << d << " operator + (d = c + b)" << endl;
	d = d - a;
	cout << d << " operator - (d = d - a)" << endl;
	d = c * b;
	cout << d << " operator * (d = c * b)" << endl;
	d = c / b;
	cout << d << " operator / (d = c / b)" << endl;
	d = b;
	cout << d << " operator = (d = b)" << endl;
	cout << (d == b) << " operator == (d == b)" << endl;
	cout << (a == b) << " operator == (a == b)" << endl;
	cin >> f;
	cout << f << " operator cin>> " << endl;
	return 0;
}