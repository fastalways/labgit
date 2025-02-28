#include <stdio.h>

int main()
{
	int star;
	printf("Enter Star :");
	scanf("%d",&star);
	int i,j;
	for(i=1;i<=star;i++) // ตัวแปร i ควบคุมจำนวนแถว
	{
        for(j=1;j<=i;j++) // ตัวแปร j ควบคุมจำนวนดาวในแต่ละแถว
		{
            printf("*");
        }
        printf("\n");
	}
}