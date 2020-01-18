#include<iostream>

using namespace std;

class operation
{
    int a,b,add, subt, mult;
    float div;
public:
    void get();
    void sum();
    void diff();
    void mul();
    void divi();

};
inline void operation :: get()
{
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

}
inline void operation :: sum()
{
    add = a+b;
    cout<<"add:"<<add;

}
int main()
{
    operation S;
    S.get();
    S.sum();
    return 0;
}
