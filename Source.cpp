#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int sum;

	cout << "���� ����� ����`���� ������ ���� \n" "13+19=?\n" "³������: \n";
	cin >> sum;
	
		if (sum == 32)
		{
			cout << "���������! ��� �������!\n";
		}

		else
		{
			cout << "������ ! ���� �������!\n";
		}
	


}