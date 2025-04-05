#include <stdio.h>
#include <string.h>

int main() {
    int i, j, len, count;
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    
    for(i = 0; i < len; i++) {
        count = 1;
        if(str[i] != '\0') {
            for(j = i + 1; j < len; j++) {
                if(str[i] == str[j]) {
                    count++;
                    str[j] = '\0';  // Mark duplicate
                }
            }
            printf("%c: %d\n", str[i], count);
        }
    }

    return 0;
}
