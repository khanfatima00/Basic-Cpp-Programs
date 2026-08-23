#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"Enter the number:";
   cin>>n;
   int i;
   bool isPrime;
   do{
    for(i=2;i<=n-1;i++){
      isPrime=true;
        if(n%i==0){
           isPrime =false;
        break;
        }
    }
    if(isPrime ==true){
        cout<<n<<" is a prime number"; 
        break;
    }else{
        cout<<n<<" is not a prime number";
    } break;
   }
   while(i>=n); 
  
    return 0;
}