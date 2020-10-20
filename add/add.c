#include <stdio.h>
#include <stdlib.h>

void input(int **m1, int **m3, int r, int c){
	printf("value : \n");
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			scanf("%d", &m1[i][j]);
			m3[i][j] = m3[i][j] + m1[i][j];
		}
	}
}

void output(int **m3, int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	int r, c;

	printf("size : ");
	scanf("%d %d", &r, &c);

	int **m1 = malloc(sizeof(int *) * r);	
	int **m2 = malloc(sizeof(int *) * r);	
	int **m3 = malloc(sizeof(int *) * r);	


	for (int i = 0; i < r; i++){
		m1[i] = malloc(sizeof(int) * c);
	}
	for (int i = 0; i < r; i++){
		m2[i] = malloc(sizeof(int) * c);
	}	
	for (int i = 0; i < r; i++){
		m3[i] = malloc(sizeof(int) * c);
	}

	printf("1\n");
	input(m1, m3, r, c);

	printf("2\n");
	input(m2, m3, r, c);

	printf("result\n");
	output(m3, r, c);

	for(int i = 0; i < r; i++){
		free(m1[i]);
		free(m2[i]);
		free(m3[i]);
	}

	free(m1);
	free(m2);
	free(m3);

	return 0;
}
