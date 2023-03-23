#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
// #include <conio.h>

using namespace std;

float PI = 3.1415;
float x, y, r, s;
char calcAgain;

void changeToPol()
{
  r = sqrt(x * x + y * y);
  s = atan2(y, x) * (180/PI);
};

int main()
{
  calcAgain = 's';

  while (calcAgain == 's' || calcAgain == 'S')
  {
    cout << "Informe o valor de x: " << endl;
    // cin << x;
    x = 2;
    cout << "Informe o valor de y: " << endl;
    // cin << y;
    y = 1;

    changeToPol();

    cout << "O valor da reta é: " << endl;
    cout << r << endl;
    cout << "O valor do angulo é: " << endl;
    cout << s << endl;

    cout << "deseja continuar? S/N" << endl;
    // cin << calcAgain;
    calcAgain = 'n';
  };
};
