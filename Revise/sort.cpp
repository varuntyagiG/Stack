#include <algorithm>
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

void insertSorted(stack<int> &st, int insert) {

  if (st.empty()) {
    st.push(insert);
    return;
  }

  if (st.top() >= insert) {
    st.push(insert);
    return;
  }

  int topElement = st.top();
  st.pop();

  insertSorted(st, insert);

  // BT
  st.push(topElement);
}

void sort(stack<int> &st) {
  if (st.empty()) {
    return;
  }

  int topElement = st.top();
  st.pop();

  sort(st);

  insertSorted(st, topElement);
}

int main() {
  stack<int> st;

  st.push(30);
  st.push(40);
  st.push(10);
  st.push(50);
  st.push(6);

  print(st);

  sort(st);

  print(st);

  return 0;
}
