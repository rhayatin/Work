#include<stdio.h>
int main()
{
int 	total=0,cn50=0,cn20=0,cn10=0,cn5=0,cn2=0,cn_count=0;
int 	total_value=300;  //3 rupees
	printf( " 50	   20       10       5      2");
	int n50,n20,n10,n5,n2;
	for(n50=0; n50<=total_value /50; n50++)
	{
		int total50=total_value-n50*50;
		if(n50>0)
		cn50=1;
		for( n20=0; n20<=total50 /20; n20++)
		{
			int total20=total50-n20*20;
			if(n20>0)
			cn20=1;
			for( n10=0; n10<=total20 /10; n10++)
			{
				int total10=total20-n10*10;
				if(n10>0)
				cn10=1;
				for( n5=0; n5<=total10 /5; n5++)
				{
					int total5=total10-n5*5;
					if(n5>0)
					cn5=1;
					for( n2=0; n2<=total5 /2; n2++)
					{
						int total2=total5-n2*2;
						if(n2>0)
						cn2=1;
						if(total2==0)
						printf("%d      %d       %d        %d        %d\n",n50,n20,n10,n5,n2);
						total++;
						if((cn50+cn20+cn10+cn5+cn2)<3)
						cn_count++;
					}
				}
			}
		}
	}
	printf("\ntotal combination %d",total);
	printf("\ntotal combination with less then 3 coins is %d ",cn_count);
}
