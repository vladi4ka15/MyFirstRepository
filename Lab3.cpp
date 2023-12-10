

#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;

    cout << "Введіть число A: ";
    cin >> a;

    cout << "Введіть число B: ";
    cin >> b;
    cout << boolalpha << "Результат: " << ((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0));
}
