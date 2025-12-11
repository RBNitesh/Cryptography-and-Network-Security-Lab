#include <stdio.h>
int main() {
char *str = "Hello world";
int i = 0;
printf("Original String: %s\n", str);
printf("After XOR with 0: ");
// Process each character
while (str[i] != '\0') {
char result = str[i] ^ 0; // XOR with zero
putchar(result); // print the character
i++;
}
printf("\n");
return 0;
}