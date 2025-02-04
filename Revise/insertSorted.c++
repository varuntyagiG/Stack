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
    if(st.top() >= insert){
        st.push(insert);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertSorted(st,insert);

    // BT
    st.push(topElement);
}

int main() {
  stack<int> st;

  st.push(50);
  st.push(40);
  st.push(30);
  st.push(10);
  st.push(0);

  print(st);

  int insert = 20;

  insertSorted(st, insert);

  print(st);

  return 0;
}
