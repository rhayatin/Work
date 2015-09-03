#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
using namespace std;
int i,j,_random,_random1;

	class _Friend
	{
	public:
	int _fmembers;
	int _member[5];
	int _f[5],_checku[5],_checkd[5];
	void _clear(int);
	void _fmemberadd(int);
	void _addfriend(int);
	void _display(int);
	}_family[50];

	void _Friend::_clear(int i)
	{	
		for(j=0;j<5;j++)
		{
			_family[i]._member[j]=0;
			_family[i]._checku[j]=0;
			_family[i]._checkd[j]=0;
		}
	}
		
	void _Friend::_fmemberadd(int i)
	{	
		_random = rand()%4+2;
		_family[i]._fmembers=_random;
		
	}
	int z;
	void _Friend::_addfriend(int i)
	{	
		for(z=0;z<10;z++)	
		for(j=0;j<_family[i]._fmembers;j++)
		{
			_random=(rand()%_family[i]._fmembers) ;
			_random1=(rand()%_family[i+1]._fmembers);
			if( _family[i]._checkd[_random]==0 && _family[i+1]._checku[_random1]==0)
			{
				_family[i]._member[_random]=_random1+1;
				_family[i]._checkd[_random]=1;
				_family[i+1]._checku[_random1]=1;
			}
		}
		
	}
	void _Friend::_display(int i)
	{
		for(j=0;j<_family[i]._fmembers;j++)
			{	
			if(_family[i]._member[j]!=0)
			cout<<"\n"<<i+1<<" ->"<<j+1<<"-->"<<_family[i]._member[j];
			}
	}

int main()
{
for(i=0;i<50;i++)
	_family[i]._fmemberadd(i);
while(1)
{
for(i=0;i<49;i++)
	_family[i]._addfriend(i);
for(i=0;i<50;i++)
	_family[i]._display(i);
for(i=0;i<10;i++)
	_family[i]._clear(i);
sleep(1);
}

return 0;
}

					 
