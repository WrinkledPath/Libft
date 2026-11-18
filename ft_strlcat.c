

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dst_size == 0)
        return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= dst_size)
		return (dst_size + src_len);
	i = 0;
	while (i < src_len && i + dst_len < dst_size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
