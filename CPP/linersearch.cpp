#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int a=sizeof(arr);
    int b=sizeof(arr)/sizeof(arr[0]);
    cout<<a<<endl;
    cout<<b;
    return 0;
}