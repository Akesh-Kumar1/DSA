#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);//slower
    v.emplace_back(2);//faster
    cout<<v[1]<<endl;
    //vector and pairs
    vector<pair<int,int>>ve;
    ve.push_back({1,2});
    cout<<ve[0].first<<endl;
    
    //creating a vector of n size consisting of same values
    vector<int>vec(5,100);
    cout<<vec[1]<<endl;
    cout<<vec[4]<<endl;
    vec.push_back(1);//we have created a vector vec of fixed size 5 but we can increase its size
    cout<<vec[5]<<endl;
    //coping 1 vectors data into another
    vector<int>vecr(vec);
    cout<<vecr[2]<<endl;
    cout<<vecr.back()<<endl;//access last element
    //iterator of vector
    vector<int>::iterator it=vecr.begin();//iterator points to the memory
    for(auto it=vecr.begin();it!=vecr.end();it++)//auto automatically defines the datatype
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:vecr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    //erasing elements
    vecr.erase(vecr.begin()+1,vecr.begin()+4);//to delete a single entity just give its address to delete more then 1 just give the address of the starting element and the element upto which you wanna delete
     for(auto it:vecr)
    {
        cout<<it<<" ";
    }
//inserting a value
cout<<endl;
vecr.insert(vecr.begin()+2,300);
 for(auto it:vecr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    vecr.insert(vecr.begin()+2,2,300);//insert takes address,no of times ,values of data
    for(auto it:vecr)
    {
        cout<<it<<" ";
    }
    //swapping two vectors
    vecr.swap(v);
    cout<<endl;
    for(auto it:vecr)
    {
        cout<<it<<" ";
    }
    //clear
    vecr.clear();
    //empty
    cout<<vecr.empty();

}