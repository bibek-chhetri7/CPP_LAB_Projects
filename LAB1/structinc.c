#include<stdio.h>
struct Rectangle
{
	int len;
	int bre;
};
int main()
{
	struct Rectangle r1;
	int area;
	printf("Enter the length and breadth of rectangle:\n");
	scanf("%d%d", &r1.len, &r1.bre);
	area = r1.len  * r1.bre;
	printf("Area of rectangle= %d", area);
}
