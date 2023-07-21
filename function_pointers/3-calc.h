#ifndef calc_h
#define calc_h

/**
 * struct op - struct op
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
char *op;
int(*f)(int a, int b);
} op-t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
