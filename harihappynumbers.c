#include<stdio.h>
int sumsqrs(int num)
{
	int r,sum=0;
	while(num)
	{
		r=num%10;
		sum=sum+(r*r);
		num=num/10;
	}
	return sum;
}
int main()
{
	int res,cnt=0,num;
	scanf("%d",&num);
	while(1)
	{
		res=sumsqrs(num);
		if(res==1)
		{
			printf("happy number");
			break;
		}
		else
		{
			num=res;
			cnt=cnt+1;
			if(cnt>20)
			{
				printf("not a happy number");
				break;
			}
			
		}
	}
	return 0;
}
