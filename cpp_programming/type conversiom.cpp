#include <stdio.h>

int main()
{
	/* your code */
	float a;
	int b;
	printf("enter any floating point number");
	scanf("%f",&a);
	b=(int)a;
	if(b>=1 && b<2)
	    printf("very bad");
	if(b>=2 && b<3)
	    printf("bad");
	if(b>=3 && b<4)
	    printf("neutral");
	if(b>=4 && b<5)
	    printf("good");
	if(b>=5 && b<6)
	    printf("very good");
	
	printf("%d",b);
	return 0;
}
