#include <iostream>
#include <queue> 
using namespace std;
int main() {
  int N, L;
  cin >> N;
  int current_card;
  queue<int> deck_n, deck_l;
  for(int i = 0; i < N; i++) {
    cin >> current_card; 
    deck_n.push(current_card);
  }
  cin >> L;
  for(int i = 0; i < L; i++) {
    cin >> current_card; 
    deck_l.push(current_card);
  }

  int losses = 0;
  for(int i = 0; i < L; i++) {
    int n_damage, l_damage;
    if(deck_l.empty()) {
      break;
    }
    n_damage = deck_n.front();
    l_damage = deck_l.front();
    if(l_damage > n_damage) {
      losses += 1;
      deck_n.pop();
      deck_l.pop();
      continue;
    }
    deck_l.pop();
    deck_n.push(deck_n.front());
    deck_n.pop();
  }
  cout << losses;
}