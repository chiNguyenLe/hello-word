#include <stdio.h>
#include <stdlib.h>

void copy(const char* source, char* dest) {
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
}
int main() {
    char str1[100] = "test", str2[100] = {0};
    
    copy(str1, str2);
    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}