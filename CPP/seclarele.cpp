#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,9,2,9,8};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
        int arr2[5];
        for(int j=0;j<5;j++){
            arr2[j]=max-arr[j];
        }
        int min=max;
        int index=0;
        for(int k=0;k<5;k++){
        if(arr2[k]<min && arr2[k]!=0){
            min=arr2[k];
        }
        }
        //index of min value
        for(int l=0;l<5;l++){
            if(arr2[l]==min){
                index=l;
                break;
            }

        }
    cout<<arr[index];
}