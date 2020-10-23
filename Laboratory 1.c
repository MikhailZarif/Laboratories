

#include <iostream>
#include <iomanip>
#include "math.h"
#include "string"
using namespace std;
int main()
{
	cout << "Task 1" << endl;
	cout << "1 13 49" << endl;
	cout << "Task 2" << endl;
	char A;
	cout << "Enter symbol" << endl;
	cin >> A;
	cout << "1" << A << "13" << A << "49" << endl;
	cout << "Task 3" << endl;
	char m, B, C;
	cout << "Enter symbol" << endl;
	cin >> m >> B >> C;
	cout << m << " " << B << " " << C << endl;

	cout << "Task 1" << endl;
	double a, x, y;
	cout << "Enter parameter 'a'" << endl;
	cin >> a;
	x = 12 * a * a + 7 * a - 12;
	y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
	cout << "x = " << x<<" " <<"y = "<< y << endl;
	cout << "Task 1" << endl;
	double V, M;
	cout << "Enter volume, then mass" << endl;
	cin >> V >> M;
	cout <<"Plotnost = "<< M / V << endl;
	cout << "Task 2" << endl;
	double K, H;
	cout << "Enter 'a', then 'b' " << endl;
	cin >> K >> H;
	x = -H / K;
	cout << "x = " << x << endl;
	cout << "Task 3" << endl;
	double x1, y1, x2, y2;
	cout << "Enter coordinates 1" << endl;
	cin >> x1 >> y1;
	cout << "Enter coordinates 2" << endl;
	cin >> x2 >> y2;
	cout << "Distance = " << (sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)))<<endl;
	cout << "Task 4" << endl;
	double AD, BC, h, p, AB;
	cout << "Enter AD, BC, then h " << endl;
	cin >> AD >> BC >> h;
	AB = sqrt(((BC - AD) * (BC - AD))/4 + h * h);
	p = 2 * AB + BC + AD;
	cout << "Perimeter = " << p<< endl;
	cout << "Task 5" << endl;
	double R, r, s, pi;
	cout << "Enter bigger radius, then the smaller one" << endl;
	cin >> R >> r;
	pi = 3.1415;
	s = pi * R * R - pi * r * r;
	cout << "Area = " << s << endl;
	cout << "Task 6" << endl;
	cout << "Enter cube's side" << endl;
	cin >> a;
	V = a * a * a;
	s = 6 * a * a;
	cout << "Volume = " << V << endl<<"Area = " << s << endl;
	cout << "Task 7" << endl;
	cout << "Enter square's side" << endl;
	cin >> a;
	p = 4 * a;
	cout << "Perimeter = " << p<<endl;
	cout << "Task 8" << endl;
	cout << "Enter radius" << endl;
	cin >> R;
	int D = 2 * R;
	cout << "Diameter = " << D<< endl;
	cout << "Task 9" << endl;
	string name;
	cout << "Enter Your name" << endl;
	cin >> name;
	cout << "Hello, " << name << "! My name is C++" << endl;
	cout << "Task 10" << endl;
	cout << "Enter a 7-letter word" << endl;
	cin >> name;
	int i;
	for (i = 0; i < 3; i++) {
		if (name[i] = name[6 - i]) 
		{
			i = 4;
			cout << "This is a polyndrom!" << endl;
		}
		else cout << "Sorry, this is not a polyndrom!" << endl;
	}
	cout << "End of laboratory 1, thank you!" << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
