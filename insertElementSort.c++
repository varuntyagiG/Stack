#include <iostream>
#include <stack>
using namespace std;

void insertElement(stack<int> &s, int &target) {
  if (s.empty()) {
    s.push(target);
    return;
  }

  if (s.top() >= target) {
    s.push(target);
    return;
  }

  int temp = s.top();
  s.pop();

  insertElement(s, target);

  // BackTrack
  s.push(temp);
}

void sortStack(stack<int> &s) {
  // Base Case
  if (s.empty()) {
    return;
  }

  int topElement = s.top();
  s.pop();

  sortStack(s);

  // BT
  insertElement(s, topElement);
}

void print(stack<int> s) {
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
}

int main() {
  stack<int> s;

  s.push(10);
  s.push(6);
  s.push(7);
  s.push(19);
  s.push(89);
  s.push(67);
  s.push(90);

  cout << "Before Sort :  " << endl;
  print(s);

  sortStack(s);

  cout << "After Sort :  " << endl;
  print(s);


  return 0;
}
