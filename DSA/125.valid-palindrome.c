#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

static inline bool isAlphanumeric(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

bool isPalindrome(char* s) {
    char *start = s;
    char *end = s + (strlen(s) - 1);

    while (start < end) {

        while (start < end && !isAlphanumeric(*start)) {
            start++;
        }

        while (start < end && !isAlphanumeric(*end)) {
            end--;
        }

        if (start < end) {
            if (tolower(*start) != tolower(*end))
                return (false);

            start++;
            end--;
        }

    }

    return true;
}

int main()
{
    char *s = "aa";
    bool flag = isPalindrome(s);

    printf("%d", flag);
}