#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==0 || n==1)return 0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}//time complexity o(n2) space o(1)
bool atprime(int n){
    if(n==0 || n==1){
        return 0;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}//o(n2) but little bit better than o(n2) but almost n2
int main()
{
    //prime number
    //naive to optimised approach
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    //little bit optimised approach
    for(int  i=0;i<sqrt(n);i++){
        if(atprime(i)){
            cout<<i<<endl;
        }
    }

    //more optimised approach
    //sieve of eranthoasis
    vector<bool>prime(n,true);
    int count=0;
    for(int i=0;i<n;i++){
        if(prime[i]){
            int j=i*2;
            cout<<i<<endl;
            while(j<n){
                prime[j]=false;
                j+=i;

            }



        }

        
    }//time complexity o(nlogn)


    //most optimised is segemented sieve of erasthanosis
    



    //gcd and lcm
    //euclid theorm
    //gcd(a-b,b)a>b
    //gcd(a,b-a)b>a
    //lcm(a,b)*gcd(a,b)=a*b;
    //lcm(a,b)=a*b/gcd(a*b)



    int a,b;
    cin>>a>>b;
    int result=0;
    int A=a;
    int B=b;
    if(a==0)result=b;
    if(b==0)result=a;
    while(a!=0 && b!=0){
        if(a>b){
            a=a-b;

        }
        else{
            b=b-a;
        }

    }
    if(result!=0){
        result= (a==0) ?b:a;
    }
    int lcm=(A*B)/result;
    cout<<"gcd is of the number"<<a<<"and"<<b<<":"<<result<<endl;
    cout<<"lcm of the this two number is:"<<lcm<<endl;


    //pow fast exponenation and slow exponentitation
    //fast exponentation

    long long int number;
    long long int power;
    cin>>number>>power;
    long long int ans=1;
    while(power!=0){
        if(power&1){
            //odd
            ans=ans*number;

        }
        number=number*number;
        power=power>>1;

    }//O(logb)


    //slow exponentation
    long long int slow=1;
    for(int i=0;i<power;i++){
        slow*=number;

    }//o(n)


    //CP SCOPE
    //ADVANCED TOPICS
    //PIGEON HOLE
    //CATALAN NUMBER(BST)
    //INCLUSION-EXCLUSION PRINCIPAL
    //CHINESE REMAINDER THEORM
    //LUCAS THEORM
    //FERMAT THEORM
    //PROBABLITY CONCEPTS
















    return 0;
}