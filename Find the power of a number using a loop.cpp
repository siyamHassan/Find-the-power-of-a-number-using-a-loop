// Find the power of a number using a loop.
#include <iostream>
using namespace std;
#include <string>
int main()
{
   int base,exponent;
   cout<<"Enter base number:";
   cin>>base;
   cout<<"Enter exponent number:";
   cin>>exponent;
   int counter = 1;
   for(int i = 1;i<=exponent;i++){
       counter*=base;
   }
   cout<<counter;
   
   
   return 0;
}