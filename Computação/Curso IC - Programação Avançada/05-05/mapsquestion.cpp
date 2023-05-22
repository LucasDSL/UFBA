#include <iostream>
#include <map> 
#include <string>

using namespace std;
int main() {
  int N; 
  cin >> N;
  string current_item;
  int item_qty;
  map<string, int> inventory;
  for(int i = 0; i < N; i++) {
    cin >> current_item >> item_qty;
    if(inventory[current_item]) {
      inventory[current_item] += item_qty;
      continue;
    }
    inventory[current_item] = item_qty;
  }

  for(map<string, int>::iterator it = inventory.begin(); it != inventory.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}