#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int topElement) {
  if (s.size() == 0) {
    s.push(topElement);
    return;
  }

  int temp = s.top();
  s.pop();

  insertAtBottom(s, topElement);

  // BackTrack
  s.push(temp);
}

void reverseStack(stack<int> &s) {
  // Base Case
  if (s.size() == 0) {
    return;
  }

  int topElement = s.top();
  s.pop();

  reverseStack(s);

  insertAtBottom(s, topElement);
}

int main() {
  stack<int> s;

  for (int i = 10; i <= 50; i += 10) {
    s.push(i);
  }

  reverseStack(s);


  while(!s.empty()){
      cout << s.top() << " ";
      s.pop();
  }

  cout << endl;

  return 0;
}
