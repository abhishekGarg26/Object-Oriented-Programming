#include<bits/stdc++.h>
// #pragma pack(1) -> (for structral packing in which padding bytes are omitted)
using namespace std;

class A{
    static int i;
    int a;
    char b; 
};
class B{
    char b;
    int a;
};
class C{
    char b;
    char c;
    int a;
};
class D{
    char a;
    char b;
    char c;
    char d;
    int i;
};
class E{
    char a;
    int i;
    char b;
    int j; 
};
class Base{
    protected:
        static int i;
        int a;
        char b;
};

class Derived : public Base
{
    private:
     char d;
     int c;
};

int main(){
    cout<<"Size of class A: "<<sizeof(A)<<endl;
    cout<<"Size of class B: "<<sizeof(B)<<endl;
    cout<<"Size of class C: "<<sizeof(C)<<endl;
    cout<<"Size of class D: "<<sizeof(D)<<endl;
    cout<<"Size of class E: "<<sizeof(E)<<endl;
    Base b;
    Derived d;
    cout<<"Size of class Base: "<<sizeof(Base)<<endl;
    cout<<"Size of class Base object: "<<sizeof(b)<<endl;
    cout<<"Size of class Derived: "<<sizeof(Derived)<<endl;
    cout<<"Size of class Derived object: "<<sizeof(d)<<endl;

}