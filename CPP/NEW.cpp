#include<iostream>
using namespace std;
int fact(int a){
    int tot=1;
    for(int i=1; i<a+1;i++){
        tot *= i;
    }
    return tot;
}

int combination(int n, int sec){
    int nfac = fact(n);
    int r = fact(sec);
    int nr = fact(n-sec);
    int ans = nfac/(r*(nr));
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;
    int res=combination(n,r);
    cout<<"The Combination is:"<<res;
}