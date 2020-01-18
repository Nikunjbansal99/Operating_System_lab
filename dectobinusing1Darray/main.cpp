#include <iostream>
using namespace std;
int main()
{  int n=0,c;
   do
   {
       cout<<"\nEnter number:";
       cin>>n;
       int a[50],d,i=0;
       while(n>0)
       {
          d=n%2;
          a[i]=d;
          n=n/2;
          i++;
       }
       for(int j=i-1;j>=0;j--)
       cout<<a[j];
       cout<<"\nEnter 0 to do it again: ";
       cin>>c;
   }while(c==0);
}
