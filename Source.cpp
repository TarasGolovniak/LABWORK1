#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int sum;

	cout << "Будь ласка розв`яжіть рівняня нище \n" "13+19=?\n" "Відповідь: \n";
	cin >> sum;
	
		if (sum == 32)
		{
			cout << "Правильно! Так тримати!\n";
		}

		else
		{
			cout << "Невірно ! Будь уважніше!\n";
		}
	


}