#include <iostream>
using namespace std;

class Stack{
  private:
  int* arr;
  int size;
  int top1;
  int top2;

  public:
  Stack(int size){
      this->size = size;
      arr = new int[size];
      top1 = -1;
      top2 = size;
  }

  void push1(int data){
      if(top2 - top1 == 1){
          cout << "Stack OverFlowed " << endl;
          return;
      }

      top1 += 1;
      arr[top1] = data;
  }

  void push2(int data){
      if(top2 - top1 == 1){
          cout << "Stack OverFlowed " << endl;
          return;
      }

      top2 -= 1;
      arr[top2] = data;
  }

  void pop1(){
      if(top1 == -1){
          cout << "Stack UnderFlowed" << endl;
          return;
      }

      arr[top1] = 0;
      top1 -= 1;
  }

  void pop2(){
      if(top2 >= size){
          cout << "Stack UnderFlowed" << endl;
          return;
      }

      arr[top2] = 0;
      top2 += 1;
  }

  void print(){
      for(int i = 0; i < 10; i++){
          cout << arr[i] << "  ";
      }
      cout << endl;
  }
};

int main(){
    Stack st(10);

    for(int i = 1; i <= 6; i++){
        st.push1(i);
    }

    st.pop1();
    st.pop1();

    for(int i = 10; i >= 8; i--){
        st.push2(i);
    }

    st.pop2();
    st.pop2();

    st.print();

    return 0;
}
