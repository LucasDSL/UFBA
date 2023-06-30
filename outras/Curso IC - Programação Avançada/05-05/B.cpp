#include <iostream> 
#include <queue> 
using namespace std; 
int main() {
    int N;
    cin >> N;
    int matrix[N][N];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    pair<int, int> p; 
    cin >> p.first >> p.second; 
    queue<pair<int,int>> q;
    q.push(p);
    int area = 0;
    while(!q.empty()) {
        p = q.front();
        if(matrix[p.first][p.second] == 1) {
            area++;
        }
        matrix[p.first][p.second] = 2; 
        q.pop();
        // Checking top 
        if(p.first - 1 >= 0 && matrix[p.first - 1][p.second] == 1) {
            q.push(make_pair(p.first - 1, p.second));
        }
        // Checking bottom
        if(p.first + 1 < N && matrix[p.first + 1][p.second] == 1) {
            q.push(make_pair(p.first + 1, p.second));
        }
        // Checking left 
        if(p.second - 1 >= 0 && matrix[p.first][p.second - 1] == 1) {
            q.push(make_pair(p.first, p.second - 1));
        }
        // Checking right 
        if(p.second + 1 < N && matrix[p.first][p.second + 1] == 1) {
            q.push(make_pair(p.first, p.second + 1));
        }
    }

    cout << area << endl;
}