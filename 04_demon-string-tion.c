#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int strcatT(){
	printf("Format: strcat(char *restrict s1, const char *restrict s2);\n");
	char first[50] = "hello ";
	char second[10] ="there";
	printf("Function: adds string s2 to the end of the string s1, if any only if s1 has enough space.\n");
	printf("The first word is: %s\n", first);
	printf("The second word is: %s\n", second);
	printf("After strcat, it is: %s\n", strcat(first, second));
	return 0;
}

int strncatT(){
	char first[50] = "hello ";
	char second[10] ="there";
	printf("Format: strncat(char *restrict s1, const char *restrict s2, size_t n\n" );
	printf("Function: Along with the functionality of strcat, this function allowd you to restrict the number of char that are copied over (through n)\n");
	printf("The first word is still: %s\n", first);
	printf("The second word is still: %s\n", second);
	printf("To restrict the full string from being copied, we will only take 3 characters\n");
	printf("After strncat (n=3), it is: %s\n", strncat(first, second, 3));

	return 0;
}



int main(){
	printf("----Testing out strcat----\n");
	strcatT();
	printf("----Testing out strncat----\n");
	strncatT();
	return 0;
}

