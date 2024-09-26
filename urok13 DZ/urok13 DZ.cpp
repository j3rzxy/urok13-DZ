#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() 
{
    int c1 = 0, c3 = 0;
    if (c1 > c3) {
        cout << "true" << endl;
    }

    int a1 = 3, b1 = 0, s1 = 0;
    if (a1 == 3) {
        cout << "Введите значение для b1: " << endl;
        cin >> b1;
        cout << "Введите значение для c1: " << endl;
        cin >> c1;
        cout << "Значение s1: " << s1 << endl;
    }

    int q1 = 0, w1 = 0, e1 = 0, r1 = 0;
    if (q1 != 5) {
        cout << "Введите значение для w1: " << endl;
        cin >> w1;
        cout << "Введите значение для e1: " << endl;
        cin >> e1;
        r1 = w1 + e1;
        cout << "Результат r1: " << r1 << endl;
    }

    int c2 = 0;
    if (a1 > b1 && c2 < c1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    int c5 = 0;
    if (c5 > c3 || c5 < c3) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    int a2 = 60;
    b1 = 25;
    c1 = a1 & b1;
    c2 = a1 | b1;
    int c3 = a1 - b1;
    int c4 = a1 + b1;
    c5 = a1 != b1;

    int i = 0, b = 5, i1 = 0, i2 = 0;
    while (i < 10 && ++b < 10) {
        i++;
        i1 = i1 + i;
        i2 = i2 + i;
        cout << i1 << endl;
        cout << i2 << endl;
        b++;
    }

    return 0;
}