#include<iostream>
using namespace std;
class point{
	int x,y;
	public:
		point(int x1, int y1)
		{
			x=x1;
			y=y1;
		}
		point(point &P)
		{
			x=P.x+P.y;
			y=P.x-P.y;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};
int main()
{
    point p1=(100,50);
	point p2=p1;
	cout<<p2.getx();
	cout<<"\n"<<p2.gety();
}

