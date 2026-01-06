#include <stdio.h>

int my_strlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void my_reverse(char str[]) {
    int n = my_strlen(str);
    char temp;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char text[100];

    printf("Enter a string: ");
 
    fgets(text, sizeof(text), stdin);
    
  
    int len = my_strlen(text);
    if (text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    printf("Length: %d\n", my_strlen(text));
    
    my_reverse(text);
    printf("Reversed: %s\n", text);

    return 0;
}