#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

// 4-Crie um programa em C/C++  que receba um vetor de números reais com 10 elementos. Escreva uma 
// função recursiva que inverta ordem dos elementos presentes no vetor.

int counter = 0;
int list[10];

void recursive_function(int max, void (*func)()) {
  if (counter <= max) {
    func();
    counter += 1;
    recursive_function(max, func);
  } else {
    counter = 0;
  };
};

void get_positions() {
  cout << "Insira um numero para a " << counter + 1 << "° posição do array:" << endl;
  cin >> list[counter];
};

void reverse() {
  int pos_1 = list[counter];
  int pos_2 = list[9 - counter];

  list[counter] = pos_2;
  list[9 - counter] = pos_1;
};

void print_positions() {
  cout << list[counter] << ((counter < 9) ? ", " : ".");
};

int main() {
  recursive_function(9, get_positions);
  recursive_function(4, reverse);
  recursive_function(9, print_positions);
};
