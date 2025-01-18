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

// Syntax: #2
bool isSubsequence(char* s, char* t) {
    char *s_p = s;
    char *t_p = t;

    while (*t_p && *s_p) {
        if (*t_p == *s_p)
            s_p++;
        t_p++;
    }
    return (!*s_p);
}

// Syntax: #3
bool isSubsequence(char* s, char* t) {
    char *s_p = s;
    char *t_p = t;

    while (*t_p && *s_p) {
        if (*t_p == *s_p)
            s_p++;
        t_p++;
    }
    return *s_p ? false : true;
}