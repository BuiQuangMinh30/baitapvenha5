#include<stdio.h>
int main()
{
	int a,b,bcnn,max=1;
	printf("Nhap so a: ");scanf("%d",&a);
	printf("Nhap so b: ");scanf("%d",&b);
	if(a==0||b==0)
	{
		printf("Boi chung nho nhat cua %d va %d la 0",a,b);
	}
	else
	{
		for(bcnn=1;bcnn<=a*b;bcnn++)
		{
			if(bcnn%a==0&&bcnn%b==0)
			{
				max=bcnn;
				printf("Bcnn la %d\n",max);
				break;
			}
		}
    }
}


