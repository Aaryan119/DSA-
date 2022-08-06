#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

bool ispossible(vector<int>&stalls,int mid,int k){
    int count=1;
    int c=stalls[0];
    for(int i=0;i<stalls.size();i++){
       if(stalls[i]-c>=mid){
           count++;
           if(count==k){
               return true;
               
           }
           c=stalls[i];
       }
       
       
        
    }
    return false;
}

int aggressiveCows(vector<int> stalls, int k,int n)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    long long int s=0;
    long long int  e=stalls[n-1];
    long long int  ans=-1;
    while(s<=e){
        long long int mid=s+(e-s)/2;
        if(ispossible(stalls,mid,k)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
	    int n,m;
	    cin>>n>>m;
	    int elem;
	    vector<int>stalls;
	    for(int i=0;i<n;i++){
		    cin>>elem;
		    stalls.push_back(elem);
	    }
    
	    int pos=aggressiveCows(stalls,m,n);
	
	    cout<<pos<<endl;
    }
}