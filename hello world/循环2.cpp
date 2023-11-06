#include <stdio.h>
int main()
{
	int i;
	float x,y,z;
	printf ("输入三个数："); 
	scanf("%f,%f,%f",&x,&y,&z);
	 for(x,y,z; i<=5; i=i+1)
	 {
	 printf("i=%d\n",i);
	 x=x+x;
	 y=y+x;
	 z=z+y; 
	 }
	 printf("x=%f\n",x);
	 printf("y=%f\n",y);
	 printf("z=%f\n",z);
	return 0;
}
