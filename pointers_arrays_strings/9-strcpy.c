#include "main.h"

/**
 * *_strcpy - prints every other character of a string
 * @src: pointer to a string
 * @dest: pointer to a string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int length = 0;
        int cont = 0;
        char *p = dest;
        
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
                length++;
        }
        /*while(cont <= length)
        {
            dest--;
            cont++;
        }*/
        dest = p;
        //*dest = dest[0];
        printf("%s", dest);
        printf("%c", dest[0]);
        return(dest);
}
