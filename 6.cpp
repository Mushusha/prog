#include<iostream>
#include<fstream>
#include<string.h>

int main() {
	
	// 1
	char a;
	std::ofstream fos1("611.txt");
	for (int i = 0; i < 10; ++i) {
		char b[10];
		std::cout << "enter no more 10 symbols ";
		std::cin >> b;
		fos1 << b;
	}
	fos1.close();

	std::ofstream fos2("612.txt");
        for (int i = 68; i < 112 ; ++i) {
		a = i; 
                fos2 << a;
        }

        fos2.close();

	// 2
	int n = 0;
	char* arr = (char*)calloc(1, sizeof(char));
	
	std::ifstream fis1("611.txt");
        while (!fis1.eof()) {
		arr = (char*)realloc(arr, (n+1)*sizeof(char));
		fis1.get(arr[n]);
		std::cout << arr[n++];

	}
        
	fis1.close();

	std::ifstream fis2("612.txt");
        while (!fis2.eof()) { 
		arr = (char*)realloc(arr, (n+1)*sizeof(char));
                fis2.get(arr[n]);
                std::cout << arr[n++];
	}
                
	fis2.close();

	free (arr);

	// 3
	printf("\n");
	char word[10];
	n = 0;
	bool b = false;
	std::cout << "enter word no more 10 letters ";
	std::cin >> word;
	std::ifstream fis3("611.txt");
	while (!fis3.eof()) {
		fis3.get(a);
		if (a == word[0]) {
			n = 1;
			for (int i = 1; i < strlen(word); i++) {
				fis3.get(a);
				if (a != word[i]) {
					n = 0;
					break;
				}
				else n++; 
			}
		}
		if (n == strlen(word)) {
			b = true;
			break;
		}
	}
	std::cout << b;

	return 0;
}
