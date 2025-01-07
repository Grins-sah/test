// C program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Geeks-for-Geeks";
    char* x = strstr(str,"Geeks");
    char* y = strchr(str,'e');
	// Returns first token
	char* token = strtok(str, "-");

	// Keep printing tokens while one of the
	// delimiters present in str[].
    int i= 0;
	while (token != NULL) {
		printf(" % s %s %ld\n", x,str,y-str);
		token = strtok(NULL, " - ");
	}

	return 0;
}
