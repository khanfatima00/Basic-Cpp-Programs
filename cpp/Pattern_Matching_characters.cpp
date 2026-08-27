#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    for(i=1;i<=n;i++)//outer loop
    {    char ch='A';
         cout<<ch;
        for (int j=1;j<=n;j++)//inner loop
    {   ch=ch+1;
        cout<<ch;
    }
    cout<<endl;
    }
    return 0;
}