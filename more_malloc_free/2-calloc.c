#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Elements of array
 * @size: Size of data type
 * Return: Void
 */

#include <stdlib.h>
#include <string.h>

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
