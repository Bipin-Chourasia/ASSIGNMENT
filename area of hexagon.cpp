#include<stdio.h>
#include<math.h>
int main()
{
	float s,area;
	printf("Enter the side of the hexagon");
	scanf("%f",&s);
	area=(3*3.14*s*s)/2;
	printf("The area of regular hexagon is:%f",area);	
}
