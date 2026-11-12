void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*srcf;
	unsigned char	*destf;

	srcf = (unsigned char *)src;
	destf = (unsigned char *)dest;
    if (!dest || !src)
		return (NULL);
    if (size == 0)
        return (dest);
	if (srcf < destf)
	{
		while (size > 0)
		{
			size--;
			destf[size] = srcf[size];
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, size));
}
