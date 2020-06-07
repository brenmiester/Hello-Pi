#import <stdio.h>

int system(const char *command);

int main()

{
	int num=1;
	while(num<=10)
	{
		printf("Hello Pi!\n");
		printf("Also, All Cops Are Bastards.\n");
		num++;
	}
	return 0;
}
