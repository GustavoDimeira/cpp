#include <iostream>
#include <vector>
// #include <conio.h>

using namespace std;

// 4-Crie um programa em C/C++  que receba um vetor de números reais com 10 elementos. Escreva uma função
// recursiva que inverta ordem dos elementos presentes no vetor.

int counter = 1;
int list[10];
int helper_list[10];

void get_positions() {
  if (counter <= 10) {
    printf("Insira um numero para a posição %d", counter);
    printf(" do array.\n");

    list[counter] = counter;

    counter += 1;
    get_positions();
  } else {
    counter = 0;
  };
};

void reverse() {
  if (counter <= 4) {
    int pos_1 = list[counter];
    int pos_2 = list[9 - counter];

    list[counter] = pos_2;
    list[9 - counter] = pos_1;

    counter += 1;
    reverse();
  } else {
    counter = 0;
  };
};

void print_positions() {
  if (counter < 10) {
    printf("%d\n", list[counter]);

    counter += 1;
    print_positions();
  };
};

int main() {
  get_positions();
  reverse();
  print_positions();
};

// fprintf(stdout, "Test output to stdout\n");
