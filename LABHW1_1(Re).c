#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
int main(void)
{
	int input, i, k;
	int count[10] = {0}; 
	int randNum[100]; 
	
	srand(time(NULL));

	printf("Enter the number of random numbers:<<=100> : "); 
	scanf("%d", &input); 

	for(i = 0; i < input; i++) { 
		randNum[i] = rand() % 10; //randNum�� 0-9�� �ϳ��� �� ������!
		count[randNum[i]]++; // ��øfor���� ������� �ʾƵ� randNum�� �̿��ؼ� �ڵ带 ������ �� �� ����.
	}

	for(k = 0; k < 10; k++) {
		printf("%d�� ������ %d\n", k, count[k]); 
	}

	printf("-------------------------------\n");

	for(i = 0; i < input; i++) {
		printf("%5d", randNum[i]);
		if((i+1) % 5 == 0) 
			printf("\n");
	}
	printf("\n");
}