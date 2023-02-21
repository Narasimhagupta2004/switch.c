#include<stdio.h>
int main() {
	int a,b;
	a=10,b=20;
	int num;
	printf("enter any num:");
	scanf("%d",&num);
	switch(num)  {
		case 1:
			printf("%d",a+b);
			break;
			case 2:
			printf("%d",a-b);
				break;
			case 3:
			printf("%d",a*b);
				break;
			case 4:
			printf("%d",a/b);
				break;
			default:
			printf("default");
				break;
			return 0;
			
	}
}
