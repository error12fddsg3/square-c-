#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two number:");
	scanf("%d%d",&x,&y);
	if(x>y)
      { 
        printf("the largest number is : %d",x);
        printf("\nthe smallest number is : %d",y);
	  }
	else
	{
		printf("the largest number is %d\n",y);
		printf("the smallest number is : %d",x);
	  }  
	  
	return 0;  
}
