#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,arr[1000],i;
    scanf("%d", &n);
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(i=n-1;i>=0;--i)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
