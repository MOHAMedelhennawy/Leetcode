bool isAnagram(char* s, char* t) {
    int s_size = strlen(s), t_size = strlen(t);
    int count[256] = {0};

    if(s_size != t_size)
        return(false);

    for (int i = 0; s[i]; i++)
    {
        count[s[i]]++;
        count[t[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return(false);
    }
    
    return (true);
}