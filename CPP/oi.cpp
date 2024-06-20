#include <iostream>
using namespace std;

int main() {
  int arr[] = {0,1,1,0,0};
  int n = sizeof(arr) / sizeof(arr[0]);
  int count1 = 0;
  int count2 =0;

  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      count1++;
    }
  }

for (int j = 0; j < n; j++) {
    if (arr[j] == 1) {
      count2++;
    }
  }
  
  for(int k=0;k<count1;k++){
    arr[k]=0;
  }
  for(int l=count1;l<n;l++){
    arr[l]=1;
  }

  for(int h=0;h<n;h++){
    cout<<arr[h]<<endl;
  }

  return 0;
}