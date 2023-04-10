#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <conio.h>

using namespace std;

float PI = M_PI;
float x, y, r, s;
char calcAgain;

void changeToPol()
{
    r = sqrt(x * x + y * y);
    s = atan2(x, y) * (180 / PI);
};

int main()
{
    calcAgain = 's';

    while (calcAgain == 's' || calcAgain == 'S')
    {
        cout << "Informe o valor de x: " << endl;
        cin >> x;
        cout << "Informe o valor de y: " << endl;
        cin >> y;

        changeToPol();

        cout << "O valor da reta e: " << endl;
        cout << r << endl;
        cout << "O valor do angulo e: " << endl;
        cout << s << endl;

        cout << "deseja continuar? S/N" << endl;
        cin >> calcAgain;
    };
};