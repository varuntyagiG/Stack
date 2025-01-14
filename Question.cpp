#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){
    string str = "Varun";
    stack<char> st;

    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }

    string ans = "";

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    cout << "Original String : " << str << endl;
    cout << "Reverse String : " << ans << endl;
    return 0;
}
