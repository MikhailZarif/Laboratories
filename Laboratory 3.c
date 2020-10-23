// Laboratory 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "string"
#include <string.h>
using namespace std;
int main()
{
	cout << "task 5" << endl;
	string name;
	cin >> name;
	int n;
	n = size(name);
	if (n % 2 == 0)  cout << "even number of letters" << endl;
	else cout << "odd number of letters" << endl;
	cout << "task 6" << endl;
	string name1, name2;
	cout << "enter first surname" << endl;
	cin >> name1;
	cout << "enter second surname" << endl;
	cin >> name2;
	if (size(name1) > size(name2)) cout << "true" << endl;
	cout << "task 7" << endl;
	string name3, max, min;
	cout << "enter first name" << endl;
	cin >> name1;
	cout << "enter second name" << endl;
	cin >> name2;
	cout << "enter third name" << endl;
	cin >> name3;
	if ((size(name1) > size(name2)) && (size(name1) > size(name3))) max = name1;
	if ((size(name2) > size(name1)) && (size(name2) > size(name3))) max = name2;
	if ((size(name3) > size(name2)) && (size(name3) > size(name1))) max = name3;
	if ((size(name1) < size(name2)) && (size(name1) < size(name3))) min = name1;
	if ((size(name2) < size(name1)) && (size(name2) < size(name3))) min = name2;
	if ((size(name3) < size(name2)) && (size(name3) < size(name1))) min = name3;
	cout << "the longest is " << max << endl;
	cout << "the shortest is " << min << endl;
	cout << "task 8" << endl;
	cout << "enter word";
	cin >> name;
	int n, m;
	cout << "enter n, then m (n < m < length of the word)" << endl;
	cin >> n >> m;
	while (n <= m)
	{
		cout << name[n];
		n++;
	}
	cout << "task 9" << endl;
	cout << "enter word" << endl;
	cin >> name;
	int i;
	i = size(name);
	for (n = 0; n < i; n++) cout << "*";
	cout << name;
	for (n = 0; n < i; n++) cout << "*";
	cout << endl;
	cout << "task 10" << endl;
	string sentence;
	cout << "enter sentence" << endl;
	getline(cin, sentence);
	int count = 0, n, i;
	double percent;
	char a = 97;
	n = size(sentence);
	for (i = 0; i < n; i++)
	{
		if (sentence[i] == a) count++;
	}
	percent = count / n;
	cout << "percentage of 'a' is " << percent;
	string sentence, name;
	int n, i;
	cout << "Task 11" << endl;
	sentence = "Can you can a can as a canner can can a can ?";
	cout << "Enter new word" << endl;
	cin >> name;
	n = size(sentence);
	for (i = 0; i < (n - 2); i++)
	{
		if (((sentence[i] == 'c')||(sentence[i]=='C')) && (sentence[i + 1] == 'a') && (sentence[i + 2] == 'n'))
		{
			sentence.erase(i, 2);
			cout << name;
		}
		else cout << sentence[i];
	}
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
