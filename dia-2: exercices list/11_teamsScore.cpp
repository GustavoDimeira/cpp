#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <conio.h>

using namespace std;

int points_team_1, points_team_2;
int goals_team_1, goals_team_2;
int new_ponts_team_1, new_ponts_team_2;

void updatePoints() {
  if (goals_team_1 > goals_team_2) {
    new_ponts_team_1 += 3;
  } else if (goals_team_2 > goals_team_1) {
    new_ponts_team_2 += 3;
  } else {
    new_ponts_team_1 += 1;
    new_ponts_team_2 += 1;
  }
}

int main() {
  cout << "Informe a pontuação atual do time 1" << endl;
  cin >> points_team_1;
  cout << "Informe a pontuação atual do time 2" << endl;
  cin >> points_team_2;
  
  cout << "Informe a quantia de gols do time 1" << endl;
  cin >> goals_team_1;
  cout << "Informe a quantia de gols do time 2" << endl;
  cin >> goals_team_2;

  updatePoints();

  cout << "A pontução do time 1 é";
  cout << new_ponts_team_1 << endl;

  cout << "A pontução do time 2 é";
  cout << new_ponts_team_2 << endl;
}