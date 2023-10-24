#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count_day;

	scanf("%d", &count_day);

	printf("Second: %d\n", count_day*24*60*60);
	printf("Minute: %d\n", count_day*24*60);
	printf("Hour: %d\n", count_day*24);
	printf("Day: %d\n", count_day);
	printf("Week: %d\n", count_day/7);
	printf("Month: %d\n", count_day/30);
	printf("Year: %d\n", count_day/365);
	
	return 0;
}
