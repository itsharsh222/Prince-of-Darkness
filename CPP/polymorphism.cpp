#include<iostream>
using namespace std;

typedef int eren;

typedef class base{
    public:
    virtual void name(){
        cout<<"Itachi Uchiha"<<endl;
    }
}harsh;

class der : public harsh{
    public:
    void name() override{
        cout<<"I am the king of the world"<<endl;
    }
};

int main(){
    eren a=9;
    der d;
    harsh *ptr=&d;
    ptr->name();
    cout<<a;
}