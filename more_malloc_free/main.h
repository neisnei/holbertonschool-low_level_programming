#ifndef MAIN_H
#define MAIN_H
/**
*main - header file for protoypes
*void protoypes (void)
*int protoypes (int)
*/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
#endif
