#ifndef PROJECT_CLASSES
#define PROJECT_CLASSES
#include<iostream>
#include<cstdlib>
using namespace std;

class Complex {
private:
	double im, re;
public:
	void Set_complex(double temp_re, double temp_im);
	Complex Plus(Complex a);
	Complex Compos(Complex a);
	Complex Separ(Complex a);
	void Print_complex();
};

/////////////////////////////////////////////

class Vector {
private:
	double x, y, z;
	double mod;
public:
	void Set_vector(double a, double b, double c);
	double Foo_module(Vector a);
	Vector Vect_compos(Vector a);
	void Print_vector();
};

/////////////////////////////////////////////

class Circle {
private:
	double x_cent, y_cent, x_var, y_var, radius;
public:
	void Set_circle_cent(double temp_x_cent, double temp_y_cent, double x_var, double y_var);
	int Radius();
	void Print_radius();

};
#endif