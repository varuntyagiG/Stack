#include <iostream>
#include <stack>
using namespace std;


void print(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

void insertAtBottom(stack<int> &st,int target){
    if(st.empty()){
        st.push(target);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBottom(st, target);

    // BT
    st.push(temp);
}

void reverseStack(stack<int> &st) {
    if(st.empty()){
        return;
    }

    int topElement = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, topElement);
}

int main() {
  stack<int> st;

  for (int i = 1; i <= 10; i++) {
    st.push(i);
  }

  cout << "Before Reverse : " << endl;
  print(st);

  reverseStack(st);

  cout << "After Reverse : " << endl;
  print(st);
  return 0;
}
