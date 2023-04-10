#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

// 5- Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

int n1, result, counter = (0, 0, 1);

void get_factorial() {
  if (counter <= n1) {
    result += counter;
    counter += 1;

    get_factorial();
  } else {
    counter = 0;
  }
};

int main() {
  cout << "Insira um numero para que seu fatorial seja calculado:" << endl;
  cin >> n1;

  get_factorial();

  cout << "O fatorial de " << n1 << " é " << result << "\n";
};
