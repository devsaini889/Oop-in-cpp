#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"Hello World"<<endl;
        };
    public:
};

class base2{
    public:
        void greet(){
            cout<<"Ram Ram"<<endl;
        };

};

class derived: public base1, public base2{
    int a;
    public:
        void greet(){
            base1::greet();
        };
};

int main()
{
 base1 obj1;
 base2 obj2;
 derived d;

 obj1.greet();
 obj2.greet();
 d.greet();
 return 0;
}