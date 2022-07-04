// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
    
}
void reverse(char name[]){
    int start=0;
    int end=length(name)-1;
    while(start<=end){
        swap(name[start],name [end]);
        start++;
        end--;
    }
}
int main() {
    char name[100];
    cout<<"enter the name:";
    cin.getline(name,100);
    reverse(name);
    cout<<"reverse order of the name:"<<name<<endl;

   
}