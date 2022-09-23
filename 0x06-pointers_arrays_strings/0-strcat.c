#include <stdio.h>
#include <main.h>
/*_strcat():appends src string to dest string*/

char *_strcat(char *dest, char *src)
{
	char x = 0;
	char y = 0;
	/*finding offset of null terminator in dest*/
	while (dest[x] != '\0')
	{
		x++;
	}
	/* copying bytes from src string */
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	/* setting null terminator */
	dest[x] != '\0';
	/* returning pointer to dest array */
	return (dest);
}
