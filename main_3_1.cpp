#include"Header_3_1.h"

int main() {
	setlocale(LC_ALL, "RUS");
	int real_1, imag_1, real_2, imag_2;
	cout << "������� ������ ����������� �����: " << endl;
	cout<<"re = "; 
	cin >> real_1;
	cout << "im = "; 
	cin >> imag_1;
	Complex first_complex, second_complex;
	first_complex.Set_complex(real_1, imag_1);
	cout << "������� ������ ����������� �����: " << endl;
	cout << "re = ";
	cin >> real_2;
	cout << "im = ";
	cin >> imag_2;
	second_complex.Set_complex(real_2, imag_2);

	Complex Summ = first_complex.Plus(second_complex);
	cout << "����� = "; Summ.Print_complex();

	Complex Compos = first_complex.Compos(second_complex);
	cout << "������������ = "; Compos.Print_complex();

	Complex Separation = first_complex.Separ(second_complex);
	cout << "������� = "; Separation.Print_complex();
	cout << endl << endl;

	///////////////////////////////////////////////////////////////////////////

	int ax, ay, az;

	cout << "������� ���������� ������� �������: " << endl;
	cout << "x = " ; cin >> ax; cout << "y = "; cin >> ay; cout << "z = "; cin >> az;
	Vector a;
	a.Set_vector(ax, ay, az);
	double Mod_a = a.Foo_module(a);

	int bx, by, bz;
	cout << "������� ���������� ������� �������: " << endl;
	cout << "x = "; cin >> bx; cout << "y = "; cin >> by; cout << "z = "; cin >> bz;
	Vector b;
	b.Set_vector(bx, by, bz);
	double Mod_b = b.Foo_module(a);

	float corn;
	cout << "������� ���� ����� ���������: ";
	cin >> corn;
	float Scaliarn = Mod_a * Mod_b * cos(corn);
	cout << "��������� ������������ = "<< Scaliarn << endl;

	Vector Vector_composition;
	Vector_composition = a.Vect_compos(b);
	cout << "��������� ������������ = ";  
	Vector_composition.Print_vector();
	cout << endl << endl;

	/////////////////////////////////////////////////////////////////////////////

	cout << "������� ���������� ������ ����� = "<<endl;
	int x_centre, y_centre;
	cout << "x = "; cin >> x_centre;
	cout << "y = "; cin >> y_centre;
	cout << "������� ���������� ������������ �����, ����� ������� ������ ��������� ����: "<<endl;
	int x_various, y_various;
	cout<< "x = "; cin >> x_various;
	cout <<"y = "; cin >> y_various;
	Circle Object;
	Object.Set_circle_cent(x_centre, y_centre, x_various, y_various);
	int radius = Object.Radius();
	Object.Print_radius();

	double S = 3.14 * pow(radius, 2);
	cout << "������� ����� = "<< S << endl;
	double Len = 2 * 3.14 * radius;
	cout << "����� ����� = " << Len << endl;
	return 0;
}