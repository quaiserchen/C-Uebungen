#include <stdio.h>

int main(void) {

	char text[] = "Hallo Welt!\0";

	printf("%s\n", text);

	printf("%c\n", text[4]);

	for(int i = 0; text[i] != '\0'; i++){
		printf("%c", text[i]);
	}

	printf("\n\n");

	system("pause");

	return 0;

	//test
}
