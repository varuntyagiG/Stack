#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int &temp1) {
  if (st.size() == 0) {
    st.push(temp1);
    return;
  }

  int temp = st.top();
  st.pop();
  insertAtBottom(st, temp1);

  // Backtrack
  st.push(temp);
}

int main() {
  stack<int> st;

  for (int i = 10; i <= 60; i += 10) {
    st.push(i);
  }

  int temp1 = st.top();
  st.pop();

  insertAtBottom(st, temp1);

  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
  return 0;
}
