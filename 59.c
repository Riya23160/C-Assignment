#include <stdio.h>
#include <string.h>
int main() {
    printf("Riya Gupta\n");
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }
    printf("One's complement of the binary number: %s\n", binary);
    return 0;
}
