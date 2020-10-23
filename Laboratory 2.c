// Laboratory 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "iostream"
using namespace std;
int main()
{
	cout << "Task 1" << endl;
	int x, y, z;
	cin >> x >> y >> z;
	cout << "Part 1" << endl;
	if ((x + y) % 2 == 0) { cout << " condition is true " << endl; }
	else { cout << " condition is false " << endl; }
	cout << "Part 2" << endl;
	if (((x < 20) && (y >= 20)) || ((x >= 20) && (y < 20))) { cout << " condition is true " << endl; }
	else { cout << " condition is false " << endl; }
	cout << "Part 3" << endl;
	if ((x * y == 0)) { cout << " condition is true " << endl; }
	else { cout << " condition is false " << endl; }
	cout << "Part 4" << endl;
	if ((x < 0) && (y < 0) && (z < 0)) { cout << " condition is true " << endl; }
	else { cout << " condition is false " << endl; }
	cout << "Part 5" << endl;
	if (((x % 5 == 0) && ((y * z) % 5 != 0)) || ((y % 5 == 0) && ((x * z) % 5 != 0)) || ((z % 5 == 0) && ((y * x) % 5 != 0))) { cout << " condition is true " << endl; }
	else { cout << " condition is false " << endl; }
	cout << "Part 6" << endl;
	if ((x > 100) || (y > 100) || (z > 100)) { cout << " condition is true " << endl; }
	else { cout << " condition is false " << endl; }

	cout << "Task 2" << endl;
	pair<int, int> position1;
	pair<int, int> position2;
	cin >> position1.first >> position1.second;
	cin >> position1.first >> position1.second >> position2.first >> position2.second;
	cout << "Part 1" << endl;
	if ((position1.first == position2.first) || (position1.second == position2.second)) { cout << "Угрожает" << endl; }
	else { cout << "Ne ugrozhaet" << endl; }
	cout << "Part 2" << endl;
	if ((position1.first - position2.first) == (position1.second - position2.second)) { cout << "Угрожает" << endl; }
	else { cout << "Ne ugrozhaet" << endl; }
	cout << "Part 3" << endl;
	if ((abs(position2.first - position1.first) >= 1) && (abs(position2.second - position1.second) >= 1)) { cout << "Дойдёт" << endl; }
	else { cout << "Ne ugrozhaet" << endl; }
	cout << "Part 4" << endl;
	if (((position1.first == position2.first) || (position1.second == position2.second)) || ((position1.first - position2.first) == (position1.second - position2.second))) { cout << "Угрожает" << endl; }
	else { cout << "Ne ugrozhaet" << endl; }
	cout << "Part 5" << endl;
	if ((position2.first - position1.first) == 1) { cout << "Normal step" << endl; }
	else if (((position2.first - position1.first) == 1) && ((position2.second - position1.second) == 1)) { cout << "Attack"; }
	else { cout << "Doesn't step"; }

	cout << "Task 3" << endl;
	int i = 1;
	int N;
	cin >> N;
	cout << "Part 1" << endl;
	do
	{
		cout << i << "*" << 7 << "=" << i * 7 << endl;
		i++;
	} while (i <= 9);
	cout << "Part 2" << endl;
	i = 1;
	do
	{
		cout << i << "*" << N << "=" << i * N << endl;
		i++;
	} while (i <= 9);

	cout << "Task 4" << endl;
	cout << "Part 1" << endl;
	int p = 1;
	int f = 8;
	while (f <= 15)
	{
		p = p * f;
		f++;
	}
	cout << p << endl;
	cout << "Part 2" << endl;
	p = 1;
	int a;
	cin >> a;
	while (a <= 20)
	{
		p = p * a;
		a++;
	};
	cout << p << endl;
	cout << "Part 3" << endl;
	p = 1;
	int b;
	cin >> b;
	while (b > 1)
	{
		p = p * b;
		b--;
	};
	cout << p << endl;
	cout << "Part 4" << endl;
	p = 1;
	int m, n;
	cin >> m >> n;
	while (m <= n)
	{
		p = p * m;
		m++;
	};
	cout << p << endl;
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
