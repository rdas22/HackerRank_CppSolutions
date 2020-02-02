#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    int la,lb;
    char temp;
    cin>>a>>b;
    la = a.size();
    lb = b.size();
    cout<<la<<" "<<lb<<"\n";
    string c = a+b;
    cout<<c<<"\n";
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b;
    return 0;
}

