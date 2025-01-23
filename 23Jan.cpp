#include <iostream>
using namespace std;

class Stack {
private:
  int *arr;
  int size;
  int top;

  public:
  Stack(int size){
      this->size = size;
      arr = new int[size];
      top = -1;
  }

  void push(int data){
      if(top >= size){
          cout << "Stack OverFlow " << endl;
          return;
      }

      top += 1;
      arr[top] = data;
  }

  void pop(){
      if(top == -1){
          cout << "Stack UnerFlowed " << endl;
          return;
      }

      top -= 1;
  }

  int gettop(){
      if(top == -1){
          return -1;
      }
      return arr[top];
  }

  int Size(){
      return top + 1;
  }

  bool isempty(){
      if(top == -1){
          return true;
      }else{
          return false;
      }
  }
};

int main() {
  // stack<int> st;
  // for(int i = 10;  i <= 100; i += 10){
  //     st.push(i);
  // }

  // cout << "Top Element : " << st.top() << endl;

  // st.pop();
  // cout << "Top Element : " << st.top() << endl;
  // cout << "Size : " << st.size() << endl;
  // cout << "Print Stack : " << endl;
  // while(!st.empty()){
  //     cout << st.top() << " ";
  //     st.pop();
  // }
  // cout << endl;

  Stack st(4);

  for(int i = 10; i <= 40; i = i + 10){
      st.push(i);
  }

  cout << st.Size() << endl;
  st.pop();
  st.pop();
  st.pop();
  st.pop();

  if(st.gettop() == -1){
      cout << "Stack UnderFlowed,No Have Any element in Stack" << endl;
  }else{
      cout << st.gettop() << endl;
  }
  cout << st.Size() << endl;
  cout << st.isempty() << endl;
  return 0;
}
