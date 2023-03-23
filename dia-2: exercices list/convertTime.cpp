#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <conio.h>

using namespace std;

int totalSeconds, hours, minuts, seconds;

void converteHora(int totalSeconds)
{
    hours = totalSeconds / 3600;
    minuts = (totalSeconds - (hours * 3600)) / 60;
    seconds = (totalSeconds - hours * 3600 - minuts * 60);
}

int main()
{
    cout << "Informe a quantia de segundos a ser convertida: " << endl;
    cin >> totalSeconds;

    converteHora(totalSeconds);

    cout << hours << ":" << minuts << ":" << seconds << endl;
}