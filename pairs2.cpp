#include<bits/stdc++.h>
using namespace std;
int main()
{
    //nested pair
    pair<int,pair<int,int>>p={1,{2,3}};
    cout<<p.second.second<<endl;
    //pairs in array
    pair<int,int>a[4]={{1,2},{3,4},{5,6},{7,8}};
    cout<<a[2].second;
    return 0;
}