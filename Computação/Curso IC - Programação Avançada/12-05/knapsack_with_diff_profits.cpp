#include<iostream> 
using namespace std; 

int main() {
    int N = 4; 
    int M = 8;
    int weight[N] = {2, 3, 4, 5};
    int profits[N] = {1, 2, 5, 6};

    int possibility_capacity[N+1][M+1];
    int max_profit = 0;
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= M; j++){
            if(i == 0){
                possibility_capacity[i][j] = 0;
                cout << possibility_capacity[i][j] << " ";
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
            cout << possibility_capacity[i][j] << " ";
        }
        cout << endl;
    }

    // expect   0 0 0 0 0 0 0 0 0  https://www.youtube.com/watch?v=nLmhmB6NzcM first method
    //          0 0 1 1 1 1 1 1 1 
    //          0 0 1 2 2 3 3 3 3 
    //          0 0 1 2 5 5 6 7 7 
    //          0 0 1 2 5 6 6 7 8
}