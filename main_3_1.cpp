#include"Header_3_1.h"

int main() {
	setlocale(LC_ALL, "RUS");
	int real_1, imag_1, real_2, imag_2;
	cout << "Введите первое комплексное число: " << endl;
	cout<<"re = "; 
	cin >> real_1;
	cout << "im = "; 
	cin >> imag_1;
	Complex first_complex, second_complex;
	first_complex.Set_complex(real_1, imag_1);
	cout << "Введите второе комплексное число: " << endl;
	cout << "re = ";
	cin >> real_2;
	cout << "im = ";
	cin >> imag_2;
	second_complex.Set_complex(real_2, imag_2);

	Complex Summ = first_complex.Plus(second_complex);
	cout << "Сумма = "; Summ.Print_complex();

	Complex Compos = first_complex.Compos(second_complex);
	cout << "Произведение = "; Compos.Print_complex();

	Complex Separation = first_complex.Separ(second_complex);
	cout << "Частное = "; Separation.Print_complex();
	cout << endl << endl;

	///////////////////////////////////////////////////////////////////////////

	int ax, ay, az;

	cout << "Введите координаты первого вектора: " << endl;
	cout << "x = " ; cin >> ax; cout << "y = "; cin >> ay; cout << "z = "; cin >> az;
	Vector a;
	a.Set_vector(ax, ay, az);
	double Mod_a = a.Foo_module(a);

	int bx, by, bz;
	cout << "Введите координаты второго вектора: " << endl;
	cout << "x = "; cin >> bx; cout << "y = "; cin >> by; cout << "z = "; cin >> bz;
	Vector b;
	b.Set_vector(bx, by, bz);
	double Mod_b = b.Foo_module(a);

	float corn;
	cout << "Введите угол между векторами: ";
	cin >> corn;
	float Scaliarn = Mod_a * Mod_b * cos(corn);
	cout << "Скалярное произведение = "<< Scaliarn << endl;

	Vector Vector_composition;
	Vector_composition = a.Vect_compos(b);
	cout << "Векторное произведение = ";  
	Vector_composition.Print_vector();
	cout << endl << endl;

	/////////////////////////////////////////////////////////////////////////////

	cout << "Введите координаты центра круга = "<<endl;
	int x_centre, y_centre;
	cout << "x = "; cin >> x_centre;
	cout << "y = "; cin >> y_centre;
	cout << "Введиет координаты произвольной точки, через которую должен проходить круг: "<<endl;
	int x_various, y_various;
	cout<< "x = "; cin >> x_various;
	cout <<"y = "; cin >> y_various;
	Circle Object;
	Object.Set_circle_cent(x_centre, y_centre, x_various, y_various);
	int radius = Object.Radius();
	Object.Print_radius();

	double S = 3.14 * pow(radius, 2);
	cout << "Площадь круга = "<< S << endl;
	double Len = 2 * 3.14 * radius;
	cout << "Длина круга = " << Len << endl;
	return 0;
}