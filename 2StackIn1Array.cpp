#include <iostream>
using  namespace std;

class Stack{
    private:
    int top1,top2,size;
    int* arr;


    public:
    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }


    // push1
    void push1(int data){
        if(top1 - top2 == 1){
            cout << "Stack OverFlow" << endl;
            return;
        }

        top1 += 1;
        arr[top1] = data;
    }

    // push2
    void push2(int data){
        if(top1 - top2 == 1){
            cout << "Stack OverFlow" << endl;
            return;
        }

        top2 -= 1;
        arr[top2] = data;
    }

    //pop1
    void pop1(){
        if(top1 == -1){
            cout << "Stack UnderFlow" << endl;
            return;
        }

        arr[top1] = 0;
        top1 -= 1;
    }

    // pop2
    void pop2(){
        if(top2 == size){
            cout << "Stack UnderFlow" << endl;
            return;
        }

        arr[top2] = 0;
        top2 += 1;
    }

    void print(){
        cout << "Top 1 = " << top1 << endl;
        cout << "Top 2 = " << top2 << endl;
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << endl;
    }

};

int main(){
    Stack S1(10);

    S1.push1(10);
    S1.print();
    S1.push1(20);
    S1.print();
    S1.push1(30);
    S1.print();
    S1.push1(40);
    S1.print();



    S1.push2(100);
    S1.print();
    S1.push2(90);
    S1.print();
    S1.push2(80);
    S1.print();
    S1.push2(70);
    S1.print();

    S1.pop1();
    S1.print();

    S1.pop2();
    S1.print();
    return 0;
}
