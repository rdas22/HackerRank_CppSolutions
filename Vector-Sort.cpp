#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,val;
    vector<int> v;
    cin>>n;
    //Inserting the values in the vector v
    for(i=0;i<n;++i)
    {
        cin>>val;
        v.push_back(val);
    }
    
    sort(v.begin(),v.end()); // For sorting the vector v
    
    //Displaying the sorted values of vector v
    for(i=0;i<n;++i)
        cout<<v[i]<<" ";
    
    return 0;
}
