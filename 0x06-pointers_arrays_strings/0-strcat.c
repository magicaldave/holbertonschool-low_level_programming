char *_strcat(char *dest, char *src)
{
	int dn, sn;

	for (dn = 0 ; dest[dn] != '\0' ; dn++)
	{
	}
	for (sn = 0 ; src[sn] != '\0' ; sn++)
	{
		dest[dn] = src[sn];
		dn++;
	}
	if (src[sn] == '\0')
		dest[dn] = '\0';
	return (dest);
}

