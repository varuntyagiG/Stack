#include <iostream>
using namespace std;

int factorial(int num){
    if(num == 1){
        return 1;
    }

    return num * factorial(num-1);
}

void printArray(int* arr,int index,int size){
    if(index >= size){
        return;
    }

    printArray(arr,index + 1,size);
    cout << arr[index] << " ";
}


int main(){
    int arr[5] = {2,4,6,8,10};
    int size = 5;
    int index = 0;

    printArray(arr,index,size);
    cout << endl;
    return 0;
}
