#include<iostream>
using namespace std;

void print(int arr, int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int arr1[5]={5,4,3,2,1};
    //Enhanced for-loop
    /*for(int item : arr){
        cout<<item<<" ";
    }*/
   print(arr[5], 5);
   print(arr1[5], 5);
    return 0;
}