#include <stdio.h>
#include <ctype.h>

char changeCase(char ch) {
    if (isupper(ch))
        return tolower(ch);
    else if (islower(ch))
        return toupper(ch);
    return ch;
}

int main() {
    char input;
    printf("請輸入一個字母：");
    scanf_s(" %c", &input);

    char result = changeCase(input);
    printf("轉換後的字母為：%c\n", result);

    return 0;
}