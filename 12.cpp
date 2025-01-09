// Constructors in derived class 
#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"The Base1 class constructor is called............... "<<endl;
        }
        void printdataBase1(void){
            cout<<"Your data1 is: "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"The Base2 class constructor is called............... "<<endl;
        }
        void printdataBase2(void){
            cout<<"Your data2 is: "<<data2<<endl;
        }
};

class Derived:public Base1 , public Base2{
    int Derived1 , Derived2;
    public:
        Derived(int a , int b , int c , int d): Base1(a) , Base2(b){
            Derived1=  c;
            Derived2 = d;

        }
        void printdataDerived(void){
            cout<<"Your Derived1 is: "<<Derived1<<endl;
            cout<<"Your Derived2  is: "<<Derived2<<endl;
        }
};


int main()
{
    Derived d(1,2,3,4);
    d.printdataBase1();
    d.printdataBase2();
    d.printdataDerived();

    return 0;
}