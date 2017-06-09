#include <stdio.h>
#include <stdlib.h>

void copy(char *source, char *dest) {
    dest = source;
}
int main() {
    
    char str1[100] = "test";
    char *str2 = str1, *str3 = "testtest", *strcopy;
    str2 = str1;
    //strcopy = str3; OK
    //copy(str3, strcopy);
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", strcopy);
    
    return 0;
}