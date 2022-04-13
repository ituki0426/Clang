#include <stdio.h>
void write_big(int i)
{
	int s;
	int t;
	int add;
	add = 0;
	for (s = 1; s < i; s++)
	{
		for (t = 0; t < s; t++)
		{
			add = add + 1;
			printf("*");
			if (add == i)
			{
				break;
			}
		}
		if(add==i){
			break;
		}
		printf("\n");
	}
}
void write_small(int i)
{
	int s;
	for (s = 0; s < i; s++)
	{
		printf(" *");
	}
}
int main()
{
	int i;
	puts("put your number");
	scanf("%d", &i);
	if (i < 5)
	{
		write_small(i);
	}
	else
	{
		write_big(i);
	}
}