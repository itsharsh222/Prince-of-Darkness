#include<iostream>
#include<vector>
using namespace std;

int distinctElements(int arr[]){
    
   
}

int main(){
    vector<int> arr={0,1,3,4,0,9};
     int newarr[6];
     int a=0;
    
    //Inserting non 0 elements

     for(int i=0;i<6;i++){
        if(arr[i]!=0){
            newarr[a]=arr[i];
            a++;
        }
    }

    //Inserting 0s
    for(int k=a;k<6;k++){
        newarr[k]=0;
    }

    //Iterating the output
    for(int l=0;l<6;l++){
        cout<<newarr[l]<<" ";
    }
    return 0;
}