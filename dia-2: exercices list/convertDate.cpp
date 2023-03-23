#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

vector<string> months = {
    "Janeiro",
    "Fevereiro",
    "Março",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro",
};
string data;
string day, month, year;
int day_number, month_number, year_number;

int getDay(char ten, char unit)
{
  day += ten;
  day += unit;
  return stoi(day);
}

int getMonth(char ten, char unit)
{
  month += ten;
  month += unit;
  month_number = stoi(month) - 1;
  return stoi(month);
}

int getYear(char thousand, char hundred, char ten, char unit)
{
  year += thousand;
  year += hundred;
  year += ten;
  year += unit;
  return stoi(year);
}

int main()
{
  cout << "Iforme um formato valido de data: " << endl;
  cin >> data;

  day_number = getDay(data[0], data[1]);
  month_number = getMonth(data[3], data[4]) - 1;
  year_number = getYear(data[6], data[7], data[8], data[9]);

  if (data[2] == '/' && data[5] == '/' && !data[10])
  {
    if (day_number <= 31 && month_number <= 12)
    {
      cout << day << " de " << months[month_number] << " de " << year;
    }
  }
  else
  {
    cout << "Formato de data invalido";
  }
}