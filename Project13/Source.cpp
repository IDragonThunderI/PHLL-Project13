#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");

	struct Student
	{
		char name[30]; // ���
		int year; // ��� ��������
		int bal[3]; // ������, ������
	};

	int n;
	Student st[30]{}; // ������ ������ ��������

	cout << "������� ���������� ���������: ";
	cin >> n;

	// ���� �������� ����� ���������
	for (int i = 0; i < n; i++)
	{
		cout << "\n���: ";
		cin >> st[i].name;
		cout << "\n��� ��������: ";
		cin >> st[i].year;
		cout << "\n������: ";

		for (int j = 0; j < 3; j++)
			cin >> st[i].bal[j];
	}

	// ���������� ��������� ������� �� ���� ���
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n - 1; i++)
			if (st[i].name[0] > st[i + 1].name[0])
				swap(st[i], st[i + 1]);

	cout << "\n��������������� ������:" << endl;
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
