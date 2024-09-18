#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 2 * fabs(x - 5);

    // спосіб 1: розгалуження в скороченій формі

    if (x < -1)
        B = (sin(x) * sin(x)) / (1 + fabs(cos(x)));

    if (-1 <= x && x <= 1)
        B = (cos(x) * cos(x)) * (1 / (fabs(x + 2)));

    if (x > 1)
        B = log(abs(x + 2));

    y = A - B;
    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі

    if (x < -1)
        B = (sin(x) * sin(x)) / (1 + fabs(cos(x)));
    else
        if (x > 1)
            B = log(fabs(x + 2));
        else
            B = (cos(x) * cos(x)) * (1 / (fabs(x + 2)));

    y = A - B;

    cout << "2) y = " << y << endl;
    cin.get();
    return 0;