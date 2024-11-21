#include <stdio.h>

int main()
{
	float N;
	scanf("%f",&N);
	printf("Round off to two places: %.2f",N);
	printf("\nRound off to four places: %.4f",N);
	printf("\nRound off to eight places: %.8f",N);
	return 0;
}
