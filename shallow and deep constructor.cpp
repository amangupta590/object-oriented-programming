#include <bits/stdc++.h>
using namespace std;
class car{
    private:
        int price;
    public:     
        int model_no;
        char *name;

        //constructor:::::its called automatically when the object is created;
        car(){
            //override the default constructor
            cout<<"making a car...."<<endl;
        }
        //constructor with some parameter -parametrised constructor

        car(int p,int mn, char* n){
            price =p;
            model_no=mn;
            int l=strlen(n);
            name=new char[l+1];
            strcpy(name,n);
        }
        
        car(car &X){
            cout<<"making the copy perfect"<<endl;
            //strcpy(name,X.name);
            price=X.price;
            model_no=X.model_no;
            int l=strlen(name);
            name1=new char[l+1];
            strcpy(name,name1);   //deep copy
        }
        
        void start(){
            cout<<"grrrr...starting the car"<<name<<endl;
        }
        void setname(char *n){
            if(name==NULL){
                name=new char[strlen(n)+1];
                strcpy(name,n);
            }
            else{
                //delete a old name a create a new name
            }
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
    c.setname("audi");
    c.model_no=1001;
    c.print();
    
    car D(100,200,"BMW");
    D.print();
    
    car E(D);
    E.name[0]='G';  //shaloow copy
    D.print();
    E.print();
    
    //c.start();
    
}
