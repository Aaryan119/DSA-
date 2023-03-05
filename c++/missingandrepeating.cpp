#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missingelement(vector<int>&ans){
    int result=-1;
    for(int i=0;i<ans.size();i++){
        if(ans[i]>=0){
            result=i+1;
            break;
        }
    }
    cout<<"missing element is:"<<result<<endl;

}
void repeatingelement(vector<int>&ans){
    int result=-1;
    for(int i=0;i<ans.size();i++){
        int index=abs(ans[i]);
        if(ans[index-1]<0){
            result=index;


        }
        else{
            ans[index-1]*=-1;
        }
    }
    //another way
    // while(ans[0]!=ans[ans[0]]){
    //     swap(ans[0],ans[ans[0]]);
    // }
    // cout<<nums[0]<<endl;
    cout<<"repeating element is:"<<result<<endl;

}
int main()
{
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    repeatingelement(ans);
    missingelement(ans);


    

}
