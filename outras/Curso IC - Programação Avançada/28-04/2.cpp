#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int number_friends;
  cin >> number_friends;
  pair<string, int> current_friend;
  vector<pair<string, int>> friends;
  int already_declared = 0;
  for (int i = 0; i < number_friends; i++) {
    cin >> current_friend.first >> current_friend.second;
    friends.push_back(current_friend);
  }
  int supported_weight;
  cin >> supported_weight;

  for (int i = 0; i < number_friends; i++) {
    if (friends[i].second > supported_weight && already_declared == 0) {
      cout << "Vamos virar almoço de aranhas gigantes!" << endl;
      cout << friends[i].first << endl;
      already_declared = 1;
      continue;
    }

    if (friends[i].second > supported_weight) {
      cout << friends[i].first << endl;
    }
  }

  if (already_declared == 1) {
    return 0;
  }
  cout << "Vamos todos encontrar a montanha!" << endl;
}