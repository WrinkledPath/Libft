void    *ft_memset(void *str, int c, int n)
{
    int i;
    unsigned char *curr;

    i = 0;
    curr = (unsigned char *)str;
    while (i < n)
    {
        curr[i] = c;
        i++;
    }
    return (str);
}
