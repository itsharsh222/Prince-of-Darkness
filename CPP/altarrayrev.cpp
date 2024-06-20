#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int temp;
    for(int i=0;i<=2;i+2){
         int j=1;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j+=2;
            
    }
    for(int k=0;k<6;k++){
            cout<<arr[k]<<" ";
        }
}

//swap alternate elements of array
//pair sum
//triplet sum
//sort 0's and 1's
//find duplicate elements
//find unique elements
//find intersection elements
//number of occurence of unique elements