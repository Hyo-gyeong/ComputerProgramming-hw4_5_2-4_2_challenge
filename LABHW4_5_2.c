#include <stdio.h>
int get_cycle_number (int n);
int main(void)
{
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);
		
	printf("\n���̴� %d\n", get_cycle_number(input)-2);
}
int get_cycle_number (int n)
{
	while (n > 1) {
		printf("%3d", n);

		if (n % 2 == 0) {//¦���̸�
			return 1 + get_cycle_number(n / 2);
		}

		else if (n % 2 == 1){			//Ȧ���̸�
			return 1 + get_cycle_number(n * 3 + 1);
		}		
	}

	printf("%3d", n); // n = 1
}