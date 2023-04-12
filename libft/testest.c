#include "libft.h"
/*
int main(void)
{
    if (ft_isalpha('A') == 1)
    {
        printf("IT WORKS!!");
    }
    else
    {
        printf("IT ALSO WORKS?!");
    }
}*/
/*
int main(void)
{
    if (ft_isdigit('A') == 1)
    {
        printf("IT WORKS!!");
    }
    else
    {
        printf("IT ALSO WORKS?!");
    }
}*/

/*
int main(void)
{
    if (ft_isalnum('.') == 1)
    {
        printf("IT WORKS!!");
    }
    else
    {
        printf("IT ALSO WORKS?!");
    }
}*/
/*
int	main(void)
{
    if (ft_isascii(0x7f) == 1)
    {
        printf("IT WORKS!!");
    }
    else
    {
        printf("IT ALSO WORKS?!");
    }
}*/
/*
int	main(void)
{
    if (ft_isprint(' ') == 1)
    {
        printf("IT WORKS!!");
    }
    else
    {
        printf("IT ALSO WORKS?!");
    }
}*/
/*
int	main(void)
{
	printf("%i\n", ft_strlen("Hello World!"));
}*/
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}*/
/*
int main(void) 
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}*/
/*
int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
/*
void main (void)
{
	char str1[] = "Hello ";
	char str2[] = "World!";
	ft_strlcat(str1, str2, 20);
	printf("%s\n", str1);
}*/
void main (void)
{
	char i = '4';
	printf("%c\n%c\n", i, ft_tolower(i));
}
