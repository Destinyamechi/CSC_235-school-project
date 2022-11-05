#include <stdio.h>
#include <string.h>
int main() {
  
        char string[100], reversed_string[100];
        int j;
        printf("\n Enter string to be reversed: ");
        scanf("%s", &string);

        j = strlen(string) - 1;
        for (int i = 0; i < strlen(string); i++) {
                reversed_string[i] = string[j];
                j--;
        }

        printf("\n Reversed String = %s", reversed_string);
        return 0;
}
