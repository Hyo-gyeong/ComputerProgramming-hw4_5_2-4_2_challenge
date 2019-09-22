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
		randNum[i] = rand() % 10; //randNum이 0-9중 하나로 딱 정해짐!
		count[randNum[i]]++; // 중첩for문을 사용하지 않아도 randNum을 이용해서 코드를 간단히 할 수 있음.
	}

	for(k = 0; k < 10; k++) {
		printf("%d의 개수는 %d\n", k, count[k]); 
	}

	printf("-------------------------------\n");

	for(i = 0; i < input; i++) {
		printf("%5d", randNum[i]);
		if((i+1) % 5 == 0) 
			printf("\n");
	}
	printf("\n");
}