#include <stdio.h>

int main()
{
	char buffer[32];

	printf("Type your name: ");
	fgets(buffer, 32, stdin); // it took in space as well
	// scanf("%s", buffer); this did not read after space
	printf("Hello, %s", buffer);
	return 0;
}
