#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char test_char;
int test_int;
long int test_long_int;
long long int test_long_long_int;
float test_float;
printf("Size of a char: %ld byte(s) \n", sizeof(test_char));
printf("Size of a int: %ld byte(s) \n", sizeof(test_int));
printf("Size of a long int: %ld byte(s) \n", sizeof(test_long_int));
printf("Size of a long long int: %ld byte(s) \n", sizeof(test_long_long_int));
printf("Size of a float: %ld byte(s) \n", sizeof(test_float));
return (0);
}
