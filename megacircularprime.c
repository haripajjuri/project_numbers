#include<stdio.h>
int isprime(int num)
{
	int i;
	if(num==1)
	{
		return 0;
	}
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int digcnt(int num)
{
	int r,h=1;
	while(num)
	{
		r=num%10;
		num=num/10;
		h=h*10;
	}
	h=h/10;
	return h;
}

int numberofdigs(int num)
{
	int ct=0,r;
	while(num)
	{
		r=num%10;
		num=num/10;
		ct=ct+1;
	}
	return ct;
}

int main()
{
	int num,h,cnt=0,r,n;
	scanf("%d",&num);
	n=numberofdigs(num);
	while(1)
	{
		if(isprime(num))
		{
			h=digcnt(num);
			r=num%10;
			num=num/10;
			num=(h*r)+num;
			cnt++;
			if(cnt==n)
			{
				printf("mega circular prime number");
				break;
			}
		}
		else
		{
			printf("not a mega circular prime number");
			break;
		}
	}
	return 0;
}
