#include<iostream>
using namespace std;

void swap(int a , int b){
    int temp ;   //In this swap function the number is not swapped it is call by value 
    temp = a;
    a = b;
    b=temp;
}
void swaprefrence(int* a , int* b){
    int temp ;     //In this swaprefrence function the number is swapped as the address is passed in the function
                    //It is call by pointer
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapReferenceVar(int &a, int &b){ 
    int temp = a;          //This is call by refrence
    a = b;              
    b = temp;             
}
int main(){
    int x=5 , y=6;
    cout<<"the value of x is"<<x<<"the value of y is "<<y<<endl;
    swapReferenceVar(x,y);
    cout<<"the value of x is"<<x<<"the value of y is "<<y<<endl;

    }