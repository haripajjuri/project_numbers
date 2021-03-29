#include <stdio.h>
int power(int a, int b)
{
    int i,res,temp;
    temp=a;
    for (i=1; i<b; i++)
    {
        a=a*temp;
    }
    return a;
}
 
int numberofdigs(int num)
{
	int r,cnt=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		cnt++;
	}	
	return cnt;
}


int main()
{
	int num,r,n,x,temp,sum=0;
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		n=numberofdigs(num);
		r=num%10;
		num=num/10;
		x=power( r,n);
		sum=sum+x;
	}
	if(temp==sum)
	{
		printf("disarium number");
	}
	else
	{
		printf("not a disarium");
	}
	return 0;
}

