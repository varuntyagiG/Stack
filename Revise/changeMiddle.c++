#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> st) {
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}

void changeMiddle(stack<int> &st, int s) {
  if (st.size() == (s / 2 + 1)) {
    st.pop();
    st.push(-1);
    return;
  }

  int topElement = st.top();
  st.pop();

  changeMiddle(st, s);

  st.push(topElement);
}
int main() {
  stack<int> st;

  for (int i = 10; i <= 50; i += 10) {
    st.push(i);
  }

  int s = st.size();
  cout << "Before : " << endl;
  print(st);

  changeMiddle(st, s);

  cout << "After : " << endl;
  print(st);
  return 0;
}
