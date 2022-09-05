#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
bool comp(int elem1,int elem2){//always think of two element in comparator
    if(elem1<=elem2){
        return true;
    }
    return false;

}
bool comp1(pair<int,int>elem1,pair<int,int>elem2){
    if(elem1.first<elem2.first){
        return true;
    }
    else if(elem1.first==elem2.first){
        if(elem1.second>elem2.second){
            return true;
        }
    }
    return false;
} 
//arr
//pair<int,int>arr[]={{1,4},{5,2},{5,9}};
// sort(arr,arr+n,comp);
//after sorting pair<int,int> arr[]={{1,4},{5,9},{5,2}};
//sort the element in such a way that that the first element in pair is smaller
//appear first ,and if first is equal than sort according
//to second and keep the larger first


int main(){
    // vector<vector<int>> ans;
    // vector<int> ans1;
    // vector<int> ans2;

    // ans1.push_back(10);
    // ans1.push_back(20);
    // ans1.push_back(30);

    // ans2.push_back(200);
    // ans2.push_back(300);
    // ans2.push_back(400);

    // ans.push_back(ans1);
    // ans.push_back(ans2);

    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // //define 10*20 2d vector
    // vector<vector<int>>vec(10,vector<int>(20,0));

    // for(auto it:vec)
    // {
    //     for(auto i:it){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector<int>arr[4];


    // // 10*20*30 vector 3d vector;
    // // vector<vector<vector<int>>>vec(10,vector<vector<int>>(20,vector<int>(30,0)));


    // // 2nd class of stl

    // // find unique elements in array?

    // set<int>st;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int elem;
    //     cin>>elem;
    //     st.insert(elem);//o(logN) where n is size of the array

    // }
    // for(auto it=st.begin();it!=st.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // //length that you delete logN
    // st.erase(st.begin());//it will delete the element 1 in the array

    // for(auto it=st.begin();it!=st.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // auto it=st.find(2);
    // cout<<*it<<endl;

    // st.emplace(8);//similar to insert but little bit faster

    // cout<<st.size()<<endl;


    // //unordered set
    // unordered_set<int> st; //stores the element in unordered manner
    // st.emplace(2);
    // st.emplace(3);
    // st.emplace(1);

    // //average time complexity is o(1)
    // //tle->switch to set
    // //but the worst case is the linear size or the size of the array o(set size)

    //multiset 
    // multiset<int>ms;
    // ms.emplace(1);
    // ms.emplace(1);
    // ms.emplace(2);
    // ms.emplace(3);
    // ms.emplace(3);
    // ms.emplace(2);

    // // ms.erase(2);

    // for(auto i:ms){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // auto pos=ms.find(4);
    // cout<<*pos<<endl;


    // for(auto it=pos;it!=ms.end();it++){
    //     cout<<*it<<" ";
    // }

    // ms.count(2); //count the number of the occurence of 2

    // ms.erase(ms.find(2),ms.find(2)+1);

    // for(auto it=ms.begin();it!=ms.end();it++){
    //     cout<<*it<<" ";
    // }

    // map statement
    //unique and sorted lexicographically
    //time complexity is log N
    //map only stored unique keys

    // map<string,int> mp;
    // mp["raj"]=13;
    // mp["hello"]=182;
    // mp["aryan"]=200;
    // mp["array"]=23;

    // mp.insert(pair<string,int>("jerk",90));

    // mp.emplace("hero",190);

    // mp.erase("hero");

    // mp.erase(mp.begin(),mp.end());

    // auto it=mp.find("aryan");
    // cout<<it->second<<endl;




    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout<<it->second<<" "<<it->first<<endl;
    // }
    // if(mp.empty()){
    //     cout<<"yes"<<endl;
    // }
    
    
    // cout<<mp.count("aryan")<<endl;//always return 1 as it stores 1 instance of every element

    // unordered_map<string,int>mp;
    //unordered_map<pair<int,int>,int>mp; not possible this can store single key value
    //unordered map stores the element in unique and unsorted way
    //time complexity O(1) in almost all the cases 
    //time complexity O(N) in worst case

    // multimap<string,int>mp;
    // multiset stores sorted and non unique elements

    //pair class
    // pair<int,int>p={1,2};
    // cout<<p.first<<" "<<p.second<<endl;//it will print 1 and 2
    // pair<pair<int,int>,int>pp={{1,3},4};
    // cout<<pp.first.first<<" "<<pp.first.second<<" "<<pp.second<<endl;//this will print 1 and 3 and 4
    // pair<pair<int,int>,pair<int,int>>ppp={{12,45},{22,48}};
    // cout<<ppp.first.first<<" "<<ppp.first.second<<" "<<ppp.second.first<<" "<<ppp.second.second<<endl;


    // vector<int,int>v;
    // set<int,int>st;
    // map<pair<int,int>,int>mp;


    //stack class
    //LIFO operation
    // stack<int> st;
    //function
    //pop
    //top
    //push
    //isempty()
    //size
    
    // st.push(2);
    // st.push(4);
    // st.push(3);
    // st.push(2);
    // st.push(1);
    // st.pop();
    // cout<<st.top()<<endl;//print the number 2 because you deleted 1
    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();

    // }

    // while(!st.empty()){
    //     st.pop();
    // }//delete the entire stack

    // cout<<st.size()<<endl;//print the size of the stack

    //queue
    //FIFO operation
    //function
    //push
    //front
    //pop
    //empty
    //size

    // queue<int>q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(11);
    // q.pop();
    // cout<<q.front()<<endl;//print the number 2

    //priority queue
    //stores the element in sorted order but in O(logN) time complexity
    // priority_queue<int> pq;
    //push
    //top
    //pop
    //empty
    //arrange itself in descending order
    // pq.push(1);
    // pq.push(20);
    // pq.push(2);
    // pq.push(3);
    // pq.push(10);

    // cout<<pq.top()<<endl;

    priority_queue<pair<int,int>> pq;
    pq.push(make_pair(1,3));
    pq.push(make_pair(3,5));
    pq.push(make_pair(3,1));


    //how to make a minimum priority queue from maximum queue
    //make it negative
    // priority_queue<int>pqq;
    // pqq.push(-1);
    // pqq.push(-2);
    // pqq.push(-3);
    // pqq.push(-5);

    // cout<<-1*pqq.top()<<endl;//this will print 1

    // priority_queue<int,vector<int>,greater<int>>pl;//minimum priority queue
    // pl.push(1);
    // pl.push(20);
    // pl.push(2);
    // pl.push(3);
    // pl.push(10);
    // cout<<pl.top()<<endl;//print 1

    // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pr;
    

    //deque
    // deque<int>dq;
    //push_back,push_front
    //pop_back,pop_front
    //size
    //empty
    //erase
    //clear
    //begin,end,rbegin,rend


    //list
    // list<int>ls;
    //push front,push back
    //pop back,pop front
    //size
    //erase
    //remove O(1)
    //clear
    // ls.push_front(2);
    // ls.push_front(2);
    // ls.push_front(5);
    // ls.push_front(3);
    // ls.remove(2);//time complexity O(1)



    //return the maximum number of occerence
    // int n;
    // cin>>n;
    // map<int,int> mp;
    // int m=0;
    // int x;
    // for(int i=0;i<n;i++){
    //     cin>>x;
    //     mp[x]++;
    //     if(mp[x]>mp[m]){
    //         m=x;

    //     }
    // }
    // cout<<m<<endl;


    //day 3

    //bitset
    //int - 16 bytes 
    //char- 8 bytes
    //bitset - 1 bytes

    bitset<10> bt;//stores 1 and 0
    // maximum 10^8

    // cin>>bt;//1111111111

    //all
    cout<<bt.all()<<endl;//return true or false
    //count
    cout<<bt.count()<<endl;//return the count of 1 number in the set
    //any
    cout<<bt.any()<<endl;//any 1 is set then print true
    //flip
    cout<<bt.flip(3)<<endl;//bt flip function will make 1 to 0 and 0 to 1
    //none
    cout<<bt.none()<<endl;//bt if there is no 1 in bt then return true otherwise false
    //set
    bt.set();//it makes the entire set to 1

    bt.set(2);//set the 2nd position to 1

    bt.set(2,0);//set the 2nd position to 0

    //size
    cout<<bt.size();//return the size of the element
    //reset
    bt.reset();//set all index to 0 

    bt.reset(2);//set 2nd index to 0
    //test
    cout<<bt.test(1);//test check the if the index 1 is 1 or not

    //if the question comes on anything related to 1 and 0 then we use bitset


    //1 algorithm

    //sort
    //array,vector

    // int n;
    // cin>>n;

    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // sort(arr,arr+n);
    // sort time complexity O(n logN)

    // vector<int>ans(5,0);
    // for(int i=0;i<ans.size();i++){
    //     cin>>ans[i];

    // }
    // sort(ans.begin()+1,ans.begin()+4);//[)

    // for(auto it :ans){
    //     cout<<it<<" ";
        
    // }

    //if i want to reverse the array or vector
    // reverse(arr,arr+n);

    // reverse(ans.begin(),ans.end());

    //if i want to find the maximum elements in an array or vector

    // int ele=*max_element(arr,arr+n);

    // int elem=*max_element(ans.begin(),ans.end());

    // if you want to return the maximum  element index

    // int *index=max_element(arr,arr+n);

    // cout<<*index<<endl;

    //if  you want to find the min elem  in the array or vector

    // int m=*min_element(arr,arr+n);

    // int *mi=min_element(arr,arr+n);

    //if i have to calculate the sum of the array and vector
    //simplest way is to loop and sum
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=arr[i];

    // }
    // cout<<sum<<endl;

    //syntax for accumulate is (initial index,final index,initial sum)


    // int acc=accumulate(arr,arr+n,0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }


    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;


    }
    auto ep=mp.find(1);
    cout<<ep->second<<endl;

    //or  you can use count
    //count(start iterator,end iterator,x)
    int elem =count(arr,arr+n,1);

    //for first occurence of any number
    int x=2;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<i<<endl;
            break;

        }
    }

    // auto it=find(arr,arr+n,2);
    //return the iterator point to the first instance of the it or else it return pointing to the end() if its not there
    //in order to get the index you have to minus the it-arr.begin();
    // 
    int index=it-arr;//find the index of the first index

    vector<int>vec={1,2,3,2,1,2,5,4};




    auto it=find(vec.begin(),vec.end(),2);
    // int index=it-vec.begin();

    //binary search
    //this only works in sorted array
    //binary search(start iterator,end iterator,x);
    //return true and false
    //works in O(logn) time complexity


    vector<int>ans(n+1,2);

    bool res=binary_search(arr,arr+n,4);
    bool res=binary_search(ans.begin(),ans.end(),2);

    //lower bound function
    //return an iterator pointing to the first
    //element which is not less n
    //arr=[1,2,10,5,8,89,8,9,9,9,5,5,8]
    //x=10;// answer 2
    //works only in sorted array
    //time complexity logN 
    auto it=lower_bound(ans.begin(),ans.end(),x);//the element itself
    int index=it-ans.begin();//index return 

    //upper bound fuction
    //return an iterator pointing to the first
    //element which is just greater than x
    //arr=[1,1,1,1,2,5,8,9,5,7,6,3,3,2]
    //x=8;answer 9 
    //works only in sorted array
    //time complexity logn
    auto it=upper_bound(ans.begin(),ans.end(),x);//the element itself
    int index=it-ans.begin();//index return 
 
    //q1) find the first index of the where the element of x
    //you can use find function but it will take logn time
    //the array is sorted

    vector<int>ans={1,2,4,2,4,9,9,9,1,3,7,6,5};
    if(binary_search(ans.begin(),ans.end(),x)==true){
        cout<<lower_bound(ans.begin(),ans.end(),2)-ans.begin()<<endl;

    }
    else{
        cout<<"element not found"<<endl;
    }

    //one more version of it
    int index=lower_bound(ans.begin(),ans.end(),x)-ans.begin();
    if(index!=n && ans[index]==x ){
        cout<<"found index"<<index<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }


    //q2) find the last occurence of an element present in the array
    //the time taken is O(logn) 

    int index=(upper_bound(ans.begin(),ans.end(),x)-ans.begin())-1;
    if(index>=0 && arr[index]==x){
        cout<<"found the last index of the element"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    //q3) find the count of the element if x is given
    //time complexity O(n)
    unordered_map<int,int>mp;
    for(int i=0;i<ans.size();i++){
        mp[ans[i]]++;
    }
    for(int i=0;i<ans.size();i++){
        if(mp.find(x)!=mp.end()){
            auto m=mp.find(x);
            cout<<m->second<<endl;
        }
    }

    //another approach
    //time complexity O(2logn)
    int first_count=((upper_bound(ans.begin(),ans.end(),x)-ans.begin())-(lower_bound(ans.begin(),ans.end(),x)-ans.begin()));

    //q4) next permutation
    //string st="abc"
    //all permutation are as follows:
    //abc
    //acb
    //bac
    //bca
    //cab
    //cba
    //time complexity O(n!)
    bool res=next_permutation(ans.begin(),ans.end());//O(n)
    //return true or false

    //you want to print all permutation using next permutation 

    string st="bca";
    sort(st.begin(),st.end());
    do{
        cout<<st<<endl;

    }while(next_permutation(st.begin(),st.end()));


    //prev permutation function
    bool res = prev_permutation(st.begin(), st.end()); 


    //COMPARATOR
    //O(logn)
    sort(arr,arr+n,comp);//descending order

    // or

    sort(arr,arr+n,greater<int>)//this will return the descending order
























    




      















    







    



    



}