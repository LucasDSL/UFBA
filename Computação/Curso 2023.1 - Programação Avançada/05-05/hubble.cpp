#include <iostream>
#include <stack>
using namespace std;
int main() {
  int N;
  cin >> N;
  int c_gadget, sum = 0;
  stack<int> gadgets;
  while (N > 0) {
    N -= 1;
    cin >> c_gadget;
    if (c_gadget < 0 && !gadgets.empty()) {
      int top = gadgets.top();
      gadgets.pop();
      sum -= top;
      continue;
    } else if (c_gadget < 0 && gadgets.empty()) {
      continue;
    }
    gadgets.push(c_gadget);
    sum += c_gadget;
  }
  cout << sum << endl;
}