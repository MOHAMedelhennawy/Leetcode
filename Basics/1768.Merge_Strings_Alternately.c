char * mergeAlternately(char * word1, char * word2) {
    int size = strlen(word1) + strlen(word2) + 1;
    char *str = malloc(sizeof(char) * size);
    char *originalStr = str;

    int count = 0;

    while (*word1 || *word2) {
        if (count % 2 == 0 && *word1) {
            *str++ = *word1++;
        } else if (*word2) {
            *str++ = *word2++;
        }
        count++;
    }

    *str = '\0';
    return originalStr;
}