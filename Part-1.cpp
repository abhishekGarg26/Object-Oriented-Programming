#include <bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{
    // properties
    // char name[100];
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h,char name){
        if(name=='A'){
            health=h;
        }
    }
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    // creation of Object
    Hero ramesh;

    cout<<"Ramesh Health is : "<<ramesh.getHealth()<<endl;
    // ramesh.health=70;

    // use setter
    // ramesh.setHealth(70);
    cout<<"Size of Ramesh is "<<sizeof(ramesh)<<endl;
    ramesh.level='A';
    cout<<"Health is : "<<ramesh.getHealth()<<endl;
    cout<<"Level is : "<<ramesh.level<<endl;
    // cout<<"size : "<<sizeof(h1)<<endl;

    return 0;
}
