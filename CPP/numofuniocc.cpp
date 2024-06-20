#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,2,3,4,5,1,3,5};
    int key=5;
    int sum=0;
    for(int i=0;i<8;i++){
            if(arr[i]==key){
            sum++;
        }
        cout<<sum;
    }
}