// new and delete keyword in pointers


#include<iostream>
using namespace std;

int main()
{
    int a = 56;
    int* ptr = &a;
    cout<<"The value of ptr is :"<<*(ptr)<<endl;

    // introducing new key --> used for dynamically initialise the value
    int* ptr1 = new int(90);
    cout<<"The new ptr value is: "<<*(ptr1)<<endl;

    // Dynamically allocated array 

    int* arr1 = new int[4];
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    arr1[3] = 40;
    cout<<"The value of arr[0] is: "<<arr1[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr1[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr1[2]<<endl;
    cout<<"The value of arr[3] is: "<<arr1[3]<<endl;

    // We can directly increase the address value by using the below syntax the answer will be same 

    int* arr = new int[4];
    *(arr) = 10;
    *(arr +1) = 20;
    *(arr+2) = 30;
    *(arr+3) = 40;
    cout<<"The value of arr[0] is: "<<arr[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr[2]<<endl;
    cout<<"The value of arr[3] is: "<<arr[3]<<endl;

    // Delete operator

    int* arr2 = new int[4];
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    arr2[3] = 40;

    // This can free the memory used by the array 

    delete [] arr2;
    
    cout<<"The value of arr[0] is: "<<arr2[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr2[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr2[2]<<endl;
    cout<<"The value of arr[3] is: "<<arr2[3]<<endl;

 return 0;
}