/**
*_strcpy - copies a string pointed to by src to dest
*@dest: pointer to destination array where the content is to be copied
*@src: pointer to the source of data to be copied
*Return: a pointer to the destination string dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
