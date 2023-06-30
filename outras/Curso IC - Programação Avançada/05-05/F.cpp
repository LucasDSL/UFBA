#include <iostream>
#include <map>
using namespace std;
int main() {
  int N;
  cin >> N;
  map<string, int> systems;
  for(int i = 0; i < N; i++) {
    string system, planet; 
    int population; 
    cin >> system >> planet >> population; 
    if(!systems[system]) {
      systems[system] = population;
      continue;
    }
    if(population > systems[system]) {
      systems[system] = population;
    }
  }
  
  // Find system with larger population 
  string larger_system;
  int larger_population = 0;
  for(map<string, int>::iterator it = systems.begin(); it != systems.end(); it++) {
    if(it->second >= larger_population) {
      larger_system = it->first;
      larger_population = it->second;
    }
  }
  cout << larger_system << " " << systems[larger_system] << endl;

  for(map<string, int>::iterator it = systems.begin(); it != systems.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
}
