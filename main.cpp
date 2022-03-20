#include <bits/stdc++.h>

using namespace std;

void Hanoi(int num, string fromTower, string toTower, string auxTower) {
  if (num == 1) {
    cout << "Move disk 1 from tower " << fromTower << " to tower " << toTower << endl;
    return;
  }

  Hanoi(num - 1, fromTower, auxTower, toTower);
  cout << "Move disk " << num << " from tower " << fromTower << " to tower " << toTower << endl;
  Hanoi(num - 1, auxTower, toTower, fromTower);

}

int main() {
  int num;

  cin >> num;
  printf("The Sequence Moves: \n");
  Hanoi(num, "I", "II", "III");

  return 0;
}