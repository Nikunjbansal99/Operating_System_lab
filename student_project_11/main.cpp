#include <iostream>

using namespace std;

class student
{
private:
    int r;
    string n;
    float a,b,c,d;
public:
    int roll_num();
    void name();
    float mathmarks();
    float phymarks();
    float chemymarks();
    float total_marks();
    char grade();

};
int student::roll_num()
{
    cout<<"ENTER ROLL NUMBER:";
    cin>>r;
}
void student::name()
{
    cout<<"ENTER NAME";
    getline(cin, n);

}

int main()
{
    cout << << endl;
    return 0;
}
