#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number:";
    cin>>n;

    char ch;
    cout<< "Enter the first character:";
    cin>>ch;


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    cout<<"Last Alphabet is:"<<ch<<endl;
    return 0;
}