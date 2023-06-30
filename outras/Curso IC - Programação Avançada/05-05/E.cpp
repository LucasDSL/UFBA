#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  int N, M;
  cin >> N;
  map<string, string> dictionary;
  string foreign, word;
  for (int i = 0; i < N; i++) {
    cin >> foreign >> word;
    dictionary[foreign] = word;
  }
  cin >> M;
  vector<string> result;
  for (int i = 0; i < M; i++) {
    cin >> word;
    if (dictionary[word] != "") {
      result.push_back(dictionary[word]);
      continue;
    }
    result.push_back(word);
  }

  for (int i = 0; i < M; i++) {
    if (i == M - 1) {
      cout << result[i] << endl;
      continue;
    }
    cout << result[i] << " ";
  }
}