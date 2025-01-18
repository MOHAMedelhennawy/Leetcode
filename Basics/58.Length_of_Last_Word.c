// Solution: #1
int lengthOfLastWord(char* s) {
    int len = 0;
    char *token = strtok(s, " ");

    while (token != NULL) {
        len = strlen(token);
        token = strtok(NULL, " ");
    }

    return len;
}

// Solution: #2
int lengthOfLastWord(char* s) {
    int len = strlen(s) - 1;
    int size = 0;

    while (len >= 0 && s[len] == ' ') {
        len--;
    }

    while (len >= 0 && s[len] != ' ') {
        size++;
        len--;
    }

    return size;
}