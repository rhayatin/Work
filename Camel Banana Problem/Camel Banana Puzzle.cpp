#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;	
class _BANANA
{	public:
	int _Total_Banana=3000,_Distance__to_travel=1000;
	int _Banana_per_km;
	int x[1000];
	void _Banana_req(void);
	void _display(void);
	_BANANA()
	{
	x[0]=3000;
	}
}_travel;

int i;
void _BANANA::_Banana_req()
{
for(i=0;i<999;i++)
{
	_Banana_per_km=ceil((x[i]+0.0)/1000);
	x[i+1]=x[i]-((_Banana_per_km*2)-1);
}
}
void _BANANA::_display(void)
{
cout<<"\nMaximum Banana can transport is"<<x[999]<<"\n";
}
int main()
{
_travel._Banana_req();
_travel._display();
}	
	

