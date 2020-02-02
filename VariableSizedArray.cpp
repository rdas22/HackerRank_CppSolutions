/*
Author: Rahul Das
Date: 2nd Feb 2020
GitHub: rdas22
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n,q,i,j,k; // Given variables in the problem statement
    int m,p,val; // aditional variables to solve the problem
    cin>>n>>q;
    vector<int> v[n];
    for(m=0;m<n;++m)
    {
        cin>>k;
        for(p=0;p<k;++p)
        {
            cin>>val;
            v[m].push_back(val);
        }
     }
   for(p=0;p<q;++p)
   {
       cin>>i>>j;
       cout<<v[i][j]<<"\n";
   }
    return 0;
}