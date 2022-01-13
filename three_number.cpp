#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three number:");
	scanf("%d%d %d",&x,&y,&z);
	if(x>y)
      { 
        if(x>z)
        {
        printf("the largest number is : %d",x);
        //printf("\nthe smallest number is : %d",y);
	     }
	    else
		{
			printf("the largest number is %d",z);
		 } 
       }
	else
	{
		if(y>z)
		{
		printf("the largest number is %d\n",y);
		//printf("the smallest number is : %d",x);
	     }
		else
		{
		  printf("the largest number is : %d",z);	
		  }  
	}
	  
	return 0;  
}
