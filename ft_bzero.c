void    ft_bzero(void *s, size_t n)
{
    unsigned char *curr;
    
    curr = (unsigned char *)s;
    if (!s)
        return ;
    while (n > 0)
    {
        *curr = 0;
        n--;
        curr++;
    }
}
