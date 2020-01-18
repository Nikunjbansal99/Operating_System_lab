#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    char text[200];
    fstream file;
    file.open("test.txt", ios::out | ios::in);
    cout << "WRITE TEXT:" << endl;
    cin.getline(text, sizeof(text));
    file << text << endl;
    file.close();

    ifstream fin("test.txt");
    int count=0;
    char ch[20], c[20];

    cout<<"Enter a word to count:";
    gets(c);
    while(fin)
    {
        fin>>ch;
        if(strcmp(ch,c)==0)
            count++;

    }
    cout<<"Occurrence="<<count<<"n";
    fin.close();


    return 0;
}
