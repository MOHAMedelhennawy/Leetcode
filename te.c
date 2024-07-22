#include<stdio.h>
#include<stdbool.h>
bool isSubsequence(char* s, char* t) {
    char *s_p = s;
    char *t_p = t;


    while (*t_p && *s_p) {
        if (*t_p == *s_p)
            s_p++;

        t_p++;
    }



    if (!*s_p)
        return (true);

    return (false);
}
int main() {
    char *s = "";
    char *t = "ahbgdc";

    printf("%d", isSubsequence(s, t));
}