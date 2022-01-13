#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter two number: ");
	scanf("%d%d",&x,&y);
	printf("Before swap\n x=%d Y=%d",x,y);
	z=x;
	x=y;
	y=z;
	printf("after swap %d %d",x,y);
	return 0;
}
