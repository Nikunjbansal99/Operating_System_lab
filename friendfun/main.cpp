 #include <iostream>

using namespace std;
class B;
class A
{
    int a;

    public:
        A()
        {
            a=0;
        }
        friend void B::set(A &a1);
}t1;
class B
{
    int b;

    public:
        B()
        {
            b=1;
        }
        void set(A &a1);
}t2;
void B::set(A &a1)
        {
            cout<<a1.a<<"\n"<<b;
        }
main()
{
    t2.set(t1);
return 0;
}

