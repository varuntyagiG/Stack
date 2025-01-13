#include <iostream>
using  namespace std;

// Implementation

class Stack{
  private:
  int top;
  int size;
  int* arr;

  public:
  Stack(int s){
      this->size = s;
      this->top = -1;
      arr = new int[size];
  }

  // function
  void push(int data){
      if(size - top > 1){
          top += 1;
          arr[top] = data;
      }else{
          cout << "Stack OverFlow" << endl;
      }
  }

  void pop(){
      if(top == -1){
          cout << "Stack Underflow" << endl;
          return;
      }

      top--;
  }

  int peak(){
      if(top == -1){
          cout << "Not element Present" << endl;
          return -1;
      }else{
          return arr[top];
      }
  }

  int getSize(){
      return top + 1;
  }

  bool empty(){
      if(top == -1){
          return true;
      }else{
          return false;
      }
  }

};

int  main(){
    Stack st(6);
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    cout << "Size : " << st.getSize() << endl;
    cout << "Peak : " << st.peak() << endl;
    cout << "Empty or not " << st.empty() << endl;


    st.pop();

    return 0;
}
