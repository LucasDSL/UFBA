#include<iostream> 
using namespace std; 

int main() {
    int P, M, N; 

    cin >> P >> M >> N;
    int weight[N];
    int profits[N];
    M -= P;
    for(int i = 0; i < N; i++){
        cin >> weight[i];
        profits[i] = 1;
    }

    int possibility_capacity[N+1][M+1];
    int max_profit = 0;
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= M; j++){
            if(i == 0){
                possibility_capacity[i][j] = 0;
                continue;
            }
            int index_for_weight = i-1;
            if(weight[index_for_weight] <= j){
                possibility_capacity[i][j] = 
                max(
                profits[index_for_weight] + possibility_capacity[i-1][j-weight[index_for_weight]], 
                possibility_capacity[i-1][j]);
            } else {
                possibility_capacity[i][j] = possibility_capacity[i-1][j];
            }


            if(possibility_capacity[i][j] > max_profit){
                max_profit = possibility_capacity[i][j];
            }
        }
    } 
    cout << max_profit << endl;
}