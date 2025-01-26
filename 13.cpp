// List initialization

#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
        // Test(int i , int j): a(i), b(j)
        // Test(int i , int j): a(i), b(j+i)
        // Test(int i , int j): a(i), b(j*i)
        // Test(int i , int j): a(i), b(i*i)
        // Test(int i , int j): a(i), b(j*j)
        Test(int i , int j): a(i), b(a+j)
        {
            cout<<"Constructor called:....  "<<endl;
            cout<<"The value of a:  "<<a<<endl;
            cout<<"The value of b:  "<<b<<endl;
        }
};

int main()
{
    Test t(1,2);
    return 0;
}