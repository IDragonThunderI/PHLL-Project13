#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	struct Student
	{
		char name[30]; // ФИО
		int year; // Год рождения
		int bal[3]; // Оценки, массив
	};

	int n;
	Student st[30]{}; // Описан массив структур

	cout << "Введите количество студентов: ";
	cin >> n;

	// Ввод значений полей структуры
	for (int i = 0; i < n; i++)
	{
		cout << "\nФИО: ";
		cin >> st[i].name;
		cout << "\nГод рождения: ";
		cin >> st[i].year;
		cout << "\nОценки: ";

		for (int j = 0; j < 3; j++)
			cin >> st[i].bal[j];
	}

	// Сортировка элементов массива по полю ФИО
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n - 1; i++)
			if (st[i].name[0] > st[i + 1].name[0])
				swap(st[i], st[i + 1]);

	cout << "\nОтсортированный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n" << st[i].name << endl;
		cout << "\n" << st[i].year << endl << endl;
		for (int j = 0; j < 3; j++)
			cout << st[i].bal[j] << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}
