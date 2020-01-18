#include <iostream>

using namespace std;

class test{
    int a,b;
        public:
            test(int x,int y){a=x;b=y;}
void print(){
    cout<<"\n"<<a<<" & "<<b<<endl;
    }
};
int main(){
    test t1(5,6);
    test t2(t1);
    t1.print();
    t2.print();
        };
