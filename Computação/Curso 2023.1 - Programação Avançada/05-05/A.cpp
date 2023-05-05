#include <iostream>
#include <queue>
using namespace std;
int main() {
  int N, M, Q = 1;
  cin >> N >> M;
  queue<int> processes;
  int current_process_time;
  for (int i = 0; i < N; i++) {
    cin >> current_process_time;
    processes.push(current_process_time);
  }

  for (int i = 0; i < M; i++) {
    if (processes.empty()) {
      cout << "pronto" << endl;
      return 0;
    }
    int front_time = processes.front() - Q;
    if (front_time <= 0) {
      processes.pop();
    } else {
      processes.push(front_time);
      processes.pop();
    }
  }

  if (processes.empty()) {
    cout << "pronto" << endl;
    return 0;
  }

  int q_size = processes.size();
  cout << q_size << endl;
  for (int i = 0; i < q_size; i++) {
    int process_time = processes.front();
    if (i == q_size - 1) {
      cout << process_time << endl;
      break;
    }
    cout << process_time << " ";
    processes.pop();
  }
}