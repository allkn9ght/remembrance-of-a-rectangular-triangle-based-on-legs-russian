#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

float katet1;
float katet2;
float gipotenuza;
float perimetr;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Программа вычисляет перимитр прямоугольного треугольника на основе катетов\n";

    cout << "Введите длину первого катета: ";
    cin >> katet1;
    cout << "Введите длину второго катета: ";
    cin >> katet2;

    gipotenuza = sqrt(katet1 * katet1 + katet2 * katet2);
    perimetr = katet1 + katet2 + gipotenuza;

    cout << "Перимитр прямоугольного треугольника: " << perimetr << "\n";

    cout << "Для выхода нажмите <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;

}
