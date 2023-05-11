#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int arr1[]){
    cout<<"size of the array inside the function"<<sizeof(arr1)<<endl;
}
void update(int* p){
    *p=*p+10;
}
void update1(int** p){
    p=p+1;
}
void update2(int** &ptr){
    **ptr=**ptr+2;//it will change the value inside it in the actual pointer not the copy
}
int main()
{
    //pointer

    int a=5;
    int b=5;
    cout<<&a<<endl; //different address with same value but different variable 
    cout<<&b<<endl;
    char ch=97;

    //pointer is that data type that store address for him

    int* p=&a;
    //int is data type
    // * is pointer that pointing to integer datatype , deference operator
    // p is a variable name
    // & is a address of operator
    // a is the name of the variable that has been used for taking its address


    char* name=&ch;
    //char* is a pointer to char data
    cout<<"address of the char ch:"<<&ch<<endl;

    cout<<"address of the ptr named name stored in char data:" <<name<<endl; //printing the address of ch char data type


    cout<<"value ptr is pointing to is:"<<*name<<endl;//dereference is actually printing its value

    cout<<"pointer address is:"<<&name<<endl;



    int x1=5; int* p1=&x1;
    char ch1='a';char* ptr=&ch1;
    double db=1.03; double* dtr=&db;

    cout<<sizeof(p1)<<" "<<sizeof(ptr)<<" "<<sizeof(dtr)<<endl; //size of ptr is dependent on architecture of bit system

    // use is to use it in dynamic memory allocation 
    //memory managment
    //pointer arthemetic
    //pass argument by reference
    // return multiple values from a function
    //implement data structure linked list,trees
    //and do system level design 
    //save memory space and reduce copying large amount of data



    // int* ptr;//bad practice never leave this empty


    // int* ptr=0;//created null pointer good practice
    // or
    // int* ptr=nullptr;


    int car=5;
    int* col=&car;

    //copy a pointer to another pointer

    int* pcopy=col;

    cout<<++(*pcopy)<<" "<<*col<<endl;


    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // cout<<&arr<<endl;// give the base address of the array all the three
    // or
    // cout<<&arr[0]<<endl;
    // or
    // cout<<arr<<endl;
    for(int i=0;i<n;i++){
        cout<<&arr[i]<<endl;
    }

    int* ptr7=arr;

    for(int i=0;i<n;i++){
        cout<<*(ptr7+i)<<endl;
    }
    cout<<*(ptr7+6)<<endl;

    //difference between ptr and array 
    // array has a address of its size
    //basically total space taken by array
    cout<<sizeof(arr)<<endl;

    //whereas ptr has the size of 32 bit or 64bit architecture 
    //it usually depends upon the architecture
    cout<<sizeof(ptr7)<<endl;




    cout<<sizeof(*ptr7)<<endl;


    char ch4[]={'b','a','b','b','a','r','\0'};
    char* cptr=ch4; //char pointer prints entire string in this ch4 because ch4 prints the whole string
    cout<<cptr<<endl;//cout is different behaviour with char data type and int data type
    cout<<*cptr<<endl;//it will print the first letter of the char array that is 'b'

    char ch9[9]="sherbano";

    char* c1ptr=&ch9[0];

    cout<<ch9<<endl;
    cout<<&ch9<<endl;
    cout<<*(ch9+3)<<endl;
    cout<<c1ptr<<endl;
    cout<<&c1ptr<<endl;
    cout<<*c1ptr<<endl;
    cout<<*(c1ptr+2)<<endl;
    cout<<(c1ptr+3)<<endl;
    cout<<c1ptr+4<<endl;
    


    //pointer with function 
    int arr1[10]={1,2,3,4};//the name of the array is actually a constant pointer to the first element of the array so u cant update it using arr=arr+1 
    cout<<"size of array in main the function:"<<sizeof(arr1)<<endl;
    solve(arr1);//this is pass as a pointer thats why it will print 4 in the function


    //update the array using pointer
    int arr10=0;
    int *ptr3=&arr10;
    update(ptr3);
    cout<<arr10<<endl;



    //update the function
    int number=392; 
    int* single=&number;
    int** doubleptr=&single; 
    cout<<&doubleptr<<endl;//address of the doubleptr
    cout<<*doubleptr<<endl;//address of the number
    cout<<doubleptr<<endl;//address of the single ptr
    cout<<**doubleptr<<endl;//value at number

    update1(doubleptr);//function that would be not updated without reference variable
    update2(doubleptr);//function that would change impact the real number because of reference variable
    cout<<"after update:";
    cout<<doubleptr<<endl;
    cout<<&number<<endl;
    cout<<number<<endl;

    






    
    return 0;
}
