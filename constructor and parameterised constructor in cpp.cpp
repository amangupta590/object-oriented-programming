#include <bits/stdc++.h>
using namespace std;
class car{
    private:
        int price;
    public:     
        int model_no;
        char name[20];

        //constructor:::::its called automatically when the object is created;
        car(){
            //override the default constructor
            cout<<"making a car...."<<endl;
        }
        //constructor with some parameter -parametrised constructor

        car(int p,int mn, char* n){
            price =p;
            model_no=mn;
            strcpy(name,n);
        }
        
        car(car &X){
            cout<<"making the copy perfect"<<endl;
            strcpy(name,X.name);
            price=X.price;
            model_no=X.model_no;
        }
        
        void start(){
            cout<<"grrrr...starting the car"<<name<<endl;
        }
        void setprice(int p){
            if(p>1000){
                price=p;
            }
            else
                price =1000;
        }
        int getprice(){
            return price;
        }
        void print(){
            cout<<name<<endl;
            cout<<model_no<<endl;
            cout<<price<<endl;
            cout<<endl;
        }
};
int main() {
    car c;
    // initilisation
    // c.price=500;
    c.setprice(100033);
    c.model_no=1001;
    c.name[0]='B';
    c.name[1]='M';
    c.name[2]='W';
    c.name[3]='\0';
    c.start();
    cout<<c.name<<endl;
    cout<<c.getprice()<<endl;

    car D;
    D.setprice(2000);
    cout<<D.getprice()<<endl;
    cout<<endl;

    car E(100,2001,"ferrari");
    E.print();
    
    //copy constructor is a create a copy of a given of the same typedef
    car F(E); //also car F=E;
    F.setprice(2000);
    F.name[0]='G';
    F.print();
    E.print();
    
    car G(F);
    G.print();
    F.print();

}
