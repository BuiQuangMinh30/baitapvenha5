#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,ucln=1,n;
	printf("Nhap so a:");scanf("%d",&a);
	printf("Nhap so b:");scanf("%d",&b);
//	for(i=1;i<=a||i<=b;i++){
//			for(j=1;j<i;j++){
//					if(a%i==0&&b%i==0){
//					n=i;
//				}
//			}
//	}
//     printf("uoc chung lon nhat la %d",n);
      for(ucln=a+b;ucln>1;ucln--)
      {
      	if(a%ucln==0&&b%ucln==0)
      	{
      		printf("uoc chung lon nhat cua %d va %d la %d",a,b,ucln);
      		break;
		  }
      }
}
