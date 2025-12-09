#include <stdio.h>

void matmult(int result[3][3], int first[3][3], int second[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				result[i][j] += first[i][k] * second[k][j];
			}
		}
	}
}

void matadd(int result[3][3], int first[3][3], int second[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = first[i][j] + second[i][j];
		}
	}
}

void printMatrix(char name, int mat[3][3]) {
	printf("   [%d %d %d]\n", mat[0][0], mat[0][1], mat[0][2]);
	printf("%c =|%d %d %d|\n", name, mat[1][0], mat[1][1], mat[1][2]);
	printf("   [%d %d %d]\n\n", mat[2][0], mat[2][1], mat[2][2]);
}

void printFinal(char *name, int mat[3][3]) {
	printf("       [%d %d %d]\n", mat[0][0], mat[0][1], mat[0][2]);
	printf("%s =|%d %d %d|\n", name, mat[1][0], mat[1][1], mat[1][2]);
	printf("       [%d %d %d]\n", mat[2][0], mat[2][1], mat[2][2]);
}

int main() {
	int A[3][3] = { {1, 2, 3}, {4, 5, 6},{7, 8, 9 } };
	int B[3][3] = { {1, 2, 0}, {3, 4, 5}, {0, 6, 7} };
	int AB[3][3];
	int final[3][3];
	matmult(AB, A, B);
	matadd(final, AB, A);
	printMatrix('A', A);
	printMatrix('B', B);
	printFinal("A*B+A", final);
	
	return 0;
}