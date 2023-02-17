#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p;
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    //used to make pair of variables
    p=make_pair(a,b);
    cout<<p.first;
    return 0;
}