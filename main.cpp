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
    cout << "��������� ��������� �������� �������������� ������������ �� ������ �������\n";

    cout << "������� ����� ������� ������: ";
    cin >> katet1;
    cout << "������� ����� ������� ������: ";
    cin >> katet2;

    gipotenuza = sqrt(katet1 * katet1 + katet2 * katet2);
    perimetr = katet1 + katet2 + gipotenuza;

    cout << "�������� �������������� ������������: " << perimetr << "\n";

    cout << "��� ������ ������� <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;

}
