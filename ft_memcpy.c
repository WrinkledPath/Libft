void    *ft_memcpy(void *to, const void *from, int n)
{
    int i;
    unsigned char   *curr_to;
    unsigned char   *curr_fr;

    i = 0;
    curr_to = (unsigned char *)to;
    curr_fr = (unsigned char *)from;
    while (i < n)
    {
        curr_to[i] = curr_fr[i];
        i++;
    }
    return (to);
}
