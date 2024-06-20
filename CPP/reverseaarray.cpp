#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int temp;
    int size= 7;
    int mid=size/2;
    int j=size-1;
    for(int i=0;i<mid;i++){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
    }
    for(int k=0;k<7;k++){
            cout<<arr[k]<<" ";
        }
}