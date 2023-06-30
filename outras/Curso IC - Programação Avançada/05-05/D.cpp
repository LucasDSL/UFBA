#include <iostream>
#include <string> 
#include <stack>

using namespace std;

bool isTagFinished(string current_tag, string first_tag) {
  string correct_final_tag = first_tag.insert(1, 1, '/');
  if(correct_final_tag == current_tag) {
    return true;
  }
  return false;
}

int main() {
  int N;
  cin >> N;
  string current_tag;
  stack<string> tags;
  int closed_tags = 0;
  for(int i = 0; i < N; i++) {
    cin >> current_tag;
    if (current_tag != "<html>" && current_tag != "</html>"
      && current_tag != "<body>" && current_tag != "</body>"
      && current_tag != "<head>" && current_tag != "</head>"
       && current_tag != "<title>" && current_tag != "</title>"
      && current_tag != "<h1>" && current_tag != "</h1>") {
      continue;
      }
    if(tags.empty() || current_tag[1] != '/') {
      tags.push(current_tag);
      continue; 
    }
    if(current_tag[1] == '/' && isTagFinished(current_tag, tags.top())) {
      tags.pop();
      closed_tags += 1;
      continue;
    }
  }
  if(tags.size() != 0) {
    cout << "Em construcao" << endl;
    return 0;
  }
  cout << closed_tags << endl;
}