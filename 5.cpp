#include<iostream>
using namespace std;
class number 
{
    int a;
    public:
        number(){
            a=0;
        };
public:
    number(int x){
        a=x;
    }
    number(number &obj){
        cout<<"copy Constructer called____"<<endl;
        a= obj.a;
    }
    void display(){
        cout<<"This is the requred number"<<a<<endl;
    }
};


int main()
{
    number b(50);
    b.display();

    number z1(b);
    z1.display();
 return 0;
}