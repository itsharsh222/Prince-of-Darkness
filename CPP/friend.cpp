#include<iostream>
using namespace std;

template<class T>
class Calc{
    private:
    T a;
    T b;
    public:
    Calc(T A, T B){
        a=A;
        b=B;
    }
    public:
    void sum(){
        T sum=a+b;
        cout<< sum<<endl;
    }
    
    };





int main(){
   int a,b;
   Calc <int>A(10,5);
    A.sum();
    Calc <float>B(4,2.5);
    B.sum();
    return 0;
}