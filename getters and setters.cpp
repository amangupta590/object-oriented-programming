#include <bits/stdc++.h>
using namespace std;
class car{
    private:
        int price;
    public:     //access modifier
        // int price;
        int model_no;
        char name[20];
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
}
