#include <iostream>
using namespace std;
class queue{
int queue[10],n,f,r;
void insert(){
int val;
if (r== n-1)
    cout<<"queue overflow\n";
else
{
    if(f==-1)
        f++;
    cout<<"Insert the element in queue:"<<endl;
    cin>>val;
    r++;
    queue[r]=val;
    }
}
void delete(){
    if(f== -1||f>r)
    {
        cout

    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
