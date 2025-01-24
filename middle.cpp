#include <iostream>
#include <stack>
using namespace std;

void findMiddle(stack<int> &st, int &totalSize) {
  if ((totalSize / 2) + 1 == st.size()) {
    cout << "Middle Element is : " << st.top() << " ";
    return;
  }

  int temp = st.top();
  st.pop();

  findMiddle(st, totalSize);

  st.push(temp);
}

int main() {
  stack<int> st;

  for (int i = 10; i <= 100; i = i + 10) {
    st.push(i);
  }

  int totalSize = st.size();

  findMiddle(st, totalSize);
  cout << endl;
  return 0;
}
