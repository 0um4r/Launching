#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){
	uint8_t directionEncoding = 0;
	int* regular = malloc(sizeof(int));
	
	for (int i=5 ; i<=100 ; ++i)
	{
		regular = i%255 - 8;
		directionEncoding = (regular<=i ? 1 : 0);
	}
	printf("The direction X is: %d ", directionEncoding);
	return 0;
}