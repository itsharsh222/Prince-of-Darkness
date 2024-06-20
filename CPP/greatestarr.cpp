#include <iostream>
using namespace std;

void highest(int arr[]){
 int max = arr[0];
  for (int i = 1; i < 5; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << max << endl;
}

void min(int arr[]){
    int min = arr[0];
  for (int i = 1; i < 5; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  cout << min << endl;
}

int main() {
     int arr[5] = {3,9,7,1,8};
    highest(arr);
    min(arr);
    return 0;
}