#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int b,q;
	FILE *a;
	char a1[20],a2[20];

	if((a=fopen("E:\string.txt","r+"))==NULL)
	{
		printf("file not exist");
		exit(1);
	}
	scanf("%d",&b);
	fprintf(a,"%d",b);
	
	fscanf(a,"%d",&b);
	
    printf("n=%d",b);
	fclose(a);
}
