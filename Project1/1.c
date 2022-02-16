#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	char a,b;
	while (1)
	{
		scanf("%c", &a);
		if (a < 58 && a>47)
			printf("…µ±∆ƒ„ ‰»Î ˝◊÷¡À");
		else
		{
			if (a < 91 && a>64)
				printf("%c", a + 32);
			if (a < 123 && a>96)
				printf("%c", a - 32);
		}
			while(getchar()!='\n')
			{ }
			
	}
}
