#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //sorting techniques
    vector<int>ans;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        ans.push_back(data);
    }

    selection sort
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(ans[j]<ans[min_idx]){
                min_idx=j;

            }

        }
         if(i!=min_idx){
            swap(ans[i],ans[min_idx]);
        }
    }

//     bubble sort
    also known as sinking sort
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(ans[j]>ans[j+1]){
                swap(ans[j],ans[j+1]);
                flag=true;
            }

        }
        if(flag!=true){
            break;
        }

    }

    //insertion sort

    for(int i=1;i<n;i++){
        int val=ans[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(ans[j]>val){
                ans[j+1]=ans[j];
            }
            else{
                break;
            }

        }
        ans[j+1]=val;
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    

     
}
