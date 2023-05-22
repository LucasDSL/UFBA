#include <iostream>
#include <queue>
#include <stack>
using namespace std;

bool point(string n, string m) {
  if (n[0] != m[0] && n[1] != m[1] && n[2] != m[2])
    return true;
  return false;
}

int main() {
  int N, M;
  cin >> N >> M;
  string line;
  stack<string> tower;
  int points = 0;
  for (int i = 0; i < N; i++) {
    cin >> line;
    if (tower.empty()) {
      tower.push(line);
      continue;
    }
    if (point(line, tower.top())) {
      points += 10;
      tower.pop();
      continue;
    }
    tower.push(line);
    if (tower.size() >= M) {
      cout << "game over" << endl;
      return 0;
    }
  }

  cout << points << endl;
}