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


int main(){
    stack<int> st;


    for(int i = 1; i <= 10; i++){
        st.push(i);
    }

    cout << "Before : " << endl;
    print(st);

    int target = 0;
    insertAtBottom(st,target);

    cout << "After : " << endl;
    print(st);
}
