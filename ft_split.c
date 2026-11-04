int is_space(char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
}

char *malloc_words(char *str)
{
    int len;
    int i;
    char    *ret;

    len = 0;
    while (str[len] && !is_space(str[len]))
        len++;
    ret = (char *)malloc((len + 1) * sizeof(char));
    if (!ret)
        return ((char *)0);
    i = 0;
    while (i < len)
    {
        ret[i] = str[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

int count_words(char *str)
{
    int count;
    
    count = 0;
    while (*str)
    {
        while (*str && is_space(*str))
            str++;
        if (*str && !is_space(*str))
        {
            count++;
            while (*str && !is_space(*str))
                str++;
        }
    }
    return (count);
}

char    **ft_split(char *str)
{
    char **res;
    int i;
    
    res = (char **)malloc((count_words(str) + 1) * sizeof(char *));
    if (!res)
        return ((char **)0);
    i = 0;
    while (*str)
    {
        while (*str && is_space(*str))
            str++;
        if (*str && !is_space(*str))
        {
            res[i] = malloc_words(str);
            if (!res[i])
                return ((char **)0);
            i++;
            while (*str && !is_space(*str))
                str++;
        }
    }
    res[i] = (char *)0;
    return (res);
}
