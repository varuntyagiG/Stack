#include <iostream>
#include <stack>
using namespace std;

void findMiddle(stack<int> &st, int &Totalsize) {
  if ((Totalsize / 2) + 1 == st.size()) {
    cout << st.top() << " ";
    return;
  }

  int temp = st.top();
  st.pop();
  findMiddle(st, Totalsize);

  st.push(temp);
}

int main() {
  stack<int> st;

  for (int i = 10; i < 100; i = i + 10) {
    st.push(i);
  }

  int Totalsize = st.size();

  findMiddle(st, Totalsize);
  cout << endl;
  return 0;
}
