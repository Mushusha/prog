#include<iostream>
#include<cstdarg>

void ZerOne (int arr[]) {
	for (int i = 0; i < 8; i++)
		arr[i] ^= 1;
}
		
void FillingArr (int arr[]) {
	for (int i = 0; i < 8; i++)
		arr[i] = i*3 + 1;
}

bool checkBalance(int arr[]) {
	int n = 0;
	bool check (false);
	for (int i = 0; i < 5; i++)
		n += arr[i];
	int i = 0;
	int k = n/2; 
	if (n % 2 == 0)
		while (n >= k) {
			if (n == k) check = true;
			n -= arr[i++];
		}

	return check;
}

void mvArr(int arr[], int n) {
	int tm[6] = {0};
	if (n > 0)
		for (int i = 0; i < 6; i++) {
			if (n + i <= 5) tm[i + n] = arr[i];
			else tm[i + n - 6] = arr[i];
		}
	if (n < 0)
		for (int i = 0; i < 6; i++) {
                        if (i + n >= 0) tm[i + n] = arr[i];
                        else tm[i + n + 6] = arr[i];
		}

	for (int i = 0; i < 6; i++) 
		arr[i] = tm [i];
}

void ZerOne5 (int size, ...) {
	va_list lst;
	va_start(lst, size);

        for (int i = 0; i < size; i++)
                printf ("%d ", va_arg(lst, int) ^ 1);

	va_end(lst);
}

int main() {

	// 1
	int arr1[8] = {1, 0, 1, 1, 0, 1, 0, 0};
	ZerOne (arr1);
	for (int i = 0; i < 8; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	
	// 2
	int arr2[8];
	FillingArr (arr2);
	for (int i = 0; i < 8; i++)
                printf("%d ", arr2[i]);
	printf("\n");
	
	// 3
	int arr3[5] = {10, 1, 2, 3, 4};
	printf("%s\n", checkBalance(arr3) ? "true" : "false");

	// 4
	int arr4[6] = {1, 2, 3, 4, 5, 6};
	int n = -2;
	mvArr(arr4, n);
	for (int i = 0; i < 6; i++)
        	printf("%d ", arr4[i]);
        printf("\n");
	
	// 5
	ZerOne5(6, 1, 0, 1, 0, 1, 0);
	printf("\n");
	

	return 0;
}
