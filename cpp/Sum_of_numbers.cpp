#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int sum=0;
    int i=1;
     cout<<"the numbers divisible by 3 are: "<<endl;
    do{
        if( i%3==0 ){

         cout<<i<<" ";
       
         sum=sum+i;
    }
        i++;
    }   
   
    while(i<=n);
    cout<<endl;  
    cout<<"sum of numbers divisible by 3 between 1 and "<<n<<" is: "<<sum;
    
    return 0;
}