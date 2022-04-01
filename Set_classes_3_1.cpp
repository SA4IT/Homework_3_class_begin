#include "Header_3_1.h"
void Complex::Set_complex(double temp_re, double temp_im) {
	re = temp_re;
	im = temp_im;
}

Complex Complex::Plus(Complex a) {
	Complex c;
	c.re = a.re + this->re;
	c.im = a.im + this->im;
	return c;
}

Complex Complex::Compos(Complex a) {
	Complex c;
	c.re = (a.re * this->re) - (a.im * this->im);
	c.im = (a.im * this->re) + (a.re * this->im);
	return c;
}
Complex Complex::Separ(Complex a) {
	Complex c;
	c.re = (a.re * this->re + a.im * this->im) / (pow(this->re, 2) + pow(this->im, 2));
	c.im = (a.im * this->re - a.re * this->im) / (pow(this->re, 2) + pow(this->im, 2));
	return c;
}

void Complex::Print_complex() {
	if (this->im >= 0) {
		cout << this->re <<"+" << abs(this->im)<< "i" << endl;
	}
	else {
		cout << this->re <<"-"<<abs(this->im) << "i" << endl;
	}
}
/////////////////////////////////////////////////////////
void Vector:: Set_vector(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

double Vector:: Foo_module(Vector a) {
	mod = sqrt(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2));
	return mod;
}

Vector Vector::Vect_compos(Vector a) {
	Vector c;
	c.x = (a.y * this->z) - (this->y * a.z);
	c.y = -((a.x * this->z) - (this->x * a.z));
	c.z = (a.x * this->y) - (this->x * a.y);
	return c;
}

void Vector:: Print_vector() {
	cout << "(" << this->x << ", " << this->y << ", " << this->z << ")" << endl;
}

//////////////////////////////////////////////////////////

void Circle::Set_circle_cent(double temp_x_cent, double temp_y_cent, double temp_x_var, double temp_y_var) {
	x_cent = temp_x_cent;
	y_cent = temp_y_cent;
	x_var = temp_x_var;
	y_var = temp_y_var;
}

int Circle::Radius() {
	int abccise;
	if (this->x_var >= this->x_cent) {
		abccise = x_var - x_cent;
	}
	if (this->x_var <= this->x_cent) {
		abccise = x_cent - x_var;
	}
	int ordinate;
	if (this->y_var >= this->y_cent) {
		ordinate = y_var- y_cent;
	}
	if (this->y_var <= this->y_cent) {
		ordinate = y_cent - y_var;
	}
	radius = sqrt(pow(abccise, 2) + pow(ordinate, 2));
	return radius;
}

void Circle:: Print_radius() {
	cout << "Радиус круга = " << radius << endl;
}







