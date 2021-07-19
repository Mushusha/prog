#include<iostream>

#define RANGE(x,y) ((((x) >= 0) && ((x) < (y)))) ? \
			     (printf("true\n")) : (printf("false\n"))
#define ARRAY(x,y) (printf("%d\n", *(*(arr + (x)) + (y)))) 
int main() {
	int i, j;
	int** arr;
	arr = (int**)malloc(8*sizeof(int*));
	for (i = 0; i < 8; i++)
		arr[i] = (int*)malloc(5*sizeof(int));
	for (i = 0; i < 8; i++)
		for (j = 0; j < 5; j++)
			arr[i][j] = i + j;	

	RANGE(5,7);
	RANGE(5,5);
	RANGE(0,2);
	RANGE(8,6);
	ARRAY(3,4);

	return 0;
}
