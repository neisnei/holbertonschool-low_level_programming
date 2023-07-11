#include main.h

/**
 * create_array - creates an array of chars
 * size: int
 * c: int
 * Return: a pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c);
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}
