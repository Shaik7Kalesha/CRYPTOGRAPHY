#include <stdio.h>
#include <string.h>
#include <ctype.h>
char key[5][5] = {
    {'K', 'E', 'Y', 'W', 'O'},
    {'R', 'D', 'A', 'B', 'C'},
    {'F', 'G', 'H', 'I', 'L'},
    {'M', 'N', 'P', 'Q', 'S'},
    {'T', 'U', 'V', 'X', 'Z'}
};
void playfairEncrypt(char *message) {
}
int main() {
    char message[] = "HELLO";
    playfairEncrypt(message);
    printf("encrypt",message);
    return 0;
}

