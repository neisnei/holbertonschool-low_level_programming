#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: A string concatenated
 */

void *_calloc(unsigned int nmemb, unsigned int size) {
    if (nmemb == 0 || size == 0) {
        return NULL;
    }

    void *ptr = malloc(nmemb * size);
    if (ptr == NULL) {
        return NULL;
    }

    memset(ptr, 0, nmemb * size);

    return ptr;
}
