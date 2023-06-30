#include<iostream> 
using namespace std; 

int main() {
    int N, T, C;
    cin >> N >> T >> C;
    int time_item[N];
    int volume_item[N];
    int value_item[N];
    for(int i = 0 ; i < N ; i++) {
        cin >> time_item[i] >> volume_item[i] >> value_item[i];
    }
    int dp[N+1][T+1][C+1];  
    int max_value = 0;
    for(int item = 0 ; item <= N ; item++) {
        for(int time = 0 ; time <= T ; time++) {
            for(int capacity = 0 ; capacity <= C ; capacity++) {
                if(item == 0 || time == 0 || capacity == 0) {
                    dp[item][time][capacity] = 0;
                    continue;
                } 
            
                int index_item = item-1;
                if(time_item[index_item] > time 
                || volume_item[index_item] > capacity) {
                    dp[item][time][capacity] = dp[item-1][time][capacity];
                    continue;
                }
                
                dp[item][time][capacity] = max(
                    dp[item-1][time][capacity],
                    dp[item-1][time-time_item[index_item]][capacity-volume_item[index_item]] + value_item[index_item]
                );

                if(dp[item][time][capacity] >= max_value) {
                    max_value = dp[item][time][capacity];
                }
            }
        }
    }
    cout << max_value << endl;

}