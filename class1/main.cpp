#include <iostream>

using namespace std;


void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int& a, int& b)
{
   int temp = a;
   a = b;
   b = a;
}


int main()
{
    int a=10,b=11;
    cout<<"initial numbers are"<<a<<" "<<b;
    swap(&a,&b);
    swap(a,b);
    cout<<"swapped numbers are"<<a<<" "<<b;
    return 0;
}

