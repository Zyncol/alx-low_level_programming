#include "3-calc.h"
/**
*get_op_func - directs the selected function to be performed
*@s: an operator
*Return: a pointer to a function that was selected
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while ((ops[i]).op != NULL)
{
if (ops[i].op[0] == s[0])
return ((ops[i]).f);
i++;
}
return (NULL);
}
