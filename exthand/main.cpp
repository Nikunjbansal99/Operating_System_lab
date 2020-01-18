#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter numerator";
    cin>>a;
    cout<<"Enter denominator";
    cin>>b;
   try
   {
       if(b==0)

           throw 2;

       c = a/b;
       cout<<"Divisor is"<<c;
   }
   catch(int e)
   {
       cout<<"DIVIDED BY ZERO"<<"\n ERROR CODE"<<e;
   }
}
