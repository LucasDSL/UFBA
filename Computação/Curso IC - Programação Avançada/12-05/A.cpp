#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, M, B;
  cin >> N >> M >> B;
  vector<int> coins;
  coins.push_back(1);
  vector<int> each_qty_coin(M + 1, M + 1);
  vector<int> each_qty_coinB(M + 1, M + 1);
  each_qty_coin[0] = 0;
  each_qty_coinB[0] = 0;
  for (int i = 0; i < N; i++) {
    int current_coin;
    cin >> current_coin;
    coins.push_back(current_coin);
  }
  // Check total of coins used on M - without considering B
  for (int i = 0; i <= M; i++) {
    for (int j = 0; j <= N; j++) {
      if (coins[j] <= i) {
        int last_coin = i - coins[j];
        int qty = 1 + each_qty_coin[last_coin];
        if (qty <= each_qty_coin[i]) {
          each_qty_coin[i] = qty;
        }
      }
    }
  }
  int qty_coins_M_used_without_B = each_qty_coin[M];
  // Check total of coins used on M - considering B
  coins.push_back(B);
  for (int i = 0; i <= M; i++) {
    for (int j = 0; j <= N+1; j++) {
      if (coins[j] <= i) {
        int last_coin = i - coins[j];
        int qty = 1 + each_qty_coinB[last_coin];
        if (qty <= each_qty_coinB[i]) {
          each_qty_coinB[i] = qty;
        }
      }
    }
  }
  int qty_coins_M_used_with_B = each_qty_coinB[M];
  if (qty_coins_M_used_without_B == qty_coins_M_used_with_B) {
    cout << "indiferente" << endl;
    return EXIT_SUCCESS;
  }
  cout << qty_coins_M_used_without_B - qty_coins_M_used_with_B << endl;
}