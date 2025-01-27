#include <iostream>
#include <stack>
using namespace std;

void insertElement(stack<int> &s, int &target) {
    if(s.top() >= target){
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();

    insertElement(s, target);

    // BackTrack
    s.push(temp);
}

void print(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
  stack<int> s;

  for (int i = 50; i >= 10; i = i - 10) {
    s.push(i);
  }

  int target = 35;

  cout << "Before Insert : " << endl;
  print(s);

  insertElement(s, target);


  cout << "After Insert : " << endl;
  print(s);
  return 0;
}
