#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	cout<<"X  |  Y  |  Z  |  XY+Z";

	for(x=0;x<=1;++x)
		for(y=0;y<=1;++y)
			for(z=0;z<=1;++z)
			{
				if(x*y+z==2)
					cout<<"\n\n"<<x<<"  |  "<<y<<"  |  "<<z<<"  |   1";
				else
					cout<<"\n\n"<<x<<"  |  "<<y<<"  |  "<<z<<"  |   "<<x*y+z;
			}

	return 0;
}
