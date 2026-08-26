#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    for(i=1;i<=n;i++)//outer loop
    {    
        for (int j=1;j<=n;j++)//inner loop
    { 
        cout<<j;
    }
    cout<<endl;
    }
    return 0;
}