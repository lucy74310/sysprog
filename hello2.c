#include <string.h>

int main()
{
	char* str = "Hello World!";

	write(1, str, strlen(str));


	return 0;

}
