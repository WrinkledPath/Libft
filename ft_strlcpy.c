size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    
    if (!src)
        return (0);
    i = 0;
    while(size != 0 && i < size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    if (size > 0)
        dst[i] = 0;
    while (src[i])
        i++;
    return (i);
}
