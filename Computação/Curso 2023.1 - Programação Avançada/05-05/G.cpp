#include <iostream>
#include <map>
using namespace std;
int main() {
  int N;
  cin >> N;

  int count_unique = 0;
  string current_word ;
  map<string, int> words_count;
  
  while(cin >> current_word) {
    if(!words_count[current_word]) {
        words_count[current_word] = 1;
        count_unique += 1;
        continue;
    }
    // If current_word with count 1 got here
    // words is not unique anymore
    // Any other current_word with count != 1 means it wasn't unique already 
    if(words_count[current_word] == 1) {
        count_unique -= 1;
    }
    words_count[current_word] += 1;
  }

  cout << count_unique << endl;
  if(count_unique == 0) {
    return 0;
  }
  for(map<string, int>::iterator it = words_count.begin(); it != words_count.end(); it++) {
    if(it->second == 1) {
      cout << it->first << endl;
    }
  }
  return 0;
}