#include <iostream>
using namespace std;
int main()
{
   int n=0,c;
   do
   {
       cout<<"\nEnter number:";
       cin>>n;
       int r=0,d,i=1;
       while(n>0)
       {
          d=n%2;
          r=r+d*i;
          n=n/2;
          i*=10;
       }
       cout<<r;
       cout<<"\n\nEnter 0 to do it again: ";
       cin>>c;
   }while(c==0);
}
