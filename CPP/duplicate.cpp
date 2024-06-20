#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vector1={1,2,3,4};
    vector<int>::iterator itr;
    //itr = vector1.end()-1;
    itr = vector1.begin();
    cout<<*itr<<endl;
    return 0;
}