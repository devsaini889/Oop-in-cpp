#include<iostream>
using namespace std;

// inline int product(int a , int b)
// {
//     return a*b;
// }
 float interest(int money , float factor = 1.5){   //defalut argument
    return money*factor;
 }
int main()
{ 
    int a , b;
    int money = 10000;
    // cout<<"Enter the value of the number: ";
    // cin>>a>>b;
    // cout<<"The product of the number is:"<<product(a,b)<<endl;

    cout<<"The deposited money is "<<money<<"The money after interest is "<<interest(money)<<endl ;
    cout<<"The deposited money is "<<money<<"The money after interest for vip  is "<<interest(money,2)<<endl ;


 return 0;
}