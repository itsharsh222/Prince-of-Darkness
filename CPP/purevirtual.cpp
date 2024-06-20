#include<iostream>
using namespace std;
typedef int attack;

typedef class A{
    private:
    attack eren=10;
    public:
    virtual void king()=0;
    attack gojo(){
        return eren;
    }
}Titan;

class Uchiha : public Titan{
    public:
    void king() override {
        attack sukuna;
        cout<<"I am the king of the world"<<endl;
        sukuna=gojo();
        cout<<sukuna<<endl;
    }
};

class Mikasa : public Titan{
    void king() override {
        cout<<"Mikasa"<<endl;
    }
};

int main(){
    Uchiha Itachi;
    Mikasa Ackerman;
    Titan *ptr = &Itachi;
    Titan *nptr = &Ackerman;
    //We can not create an object of a class containing pure virtual function 
    //Titan Founding;
    ptr->king();
    nptr->king();
}
