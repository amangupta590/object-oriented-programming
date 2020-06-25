#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class car{
    public:     //access modifier
        int price;
        int model_no;
        char name[20];
        void start(){
            cout<<"grrrr...starting the car"<<name<<endl;
        }
};
int main() {
    car c;
    // initilisation
    c.price=500;
    c.model_no=1001;
    c.name[0]='B';
    c.name[1]='M';
    c.name[2]='W';
    c.start();
    return 0;
}
