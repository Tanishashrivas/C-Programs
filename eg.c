#include <stdio.h>

int main()
{
// puts("Hello, World");
//char* s1 = "Hello" ", " "World";
// printf("%s", s1);

/*FILE *even, *odds;
 int n = 10;
 size_t k = 0;
 even = fopen("even.txt", "w");
 odds = fopen("odds.txt", "w");
 for(k = 1; k < n + 1; k++)
 {
 k%2==0 ? fprintf(even, "\t%5d\n", k)
 : fprintf(odds, "\t%5d\n", k);
 }
 fclose(even);
 fclose(odds); */
 
// unsigned int a = 29; /* 29 = 0001 1101 */ 
// unsigned int b = 48; /* 48 = 0011 0000 */
// int c = 0; 
// c = a & b; /* 32 = 0001 0000 */
// printf("%d & %d = %d\n", a, b, c );
// c = a | b; /* 61 = 0011 1101 */
// printf("%d | %d = %d\n", a, b, c );
// c = a ^ b; /* 45 = 0010 1101 */
// printf("%d ^ %d = %d\n", a, b, c );
// c = ~a; /* -30 = 1110 0010 */
// printf("~%d = %d\n", a, c );
// c = a << 2; /* 116 = 0111 0100 */
// printf("%d << 2 = %d\n", a, c );
// c = a >> 2; /* 7 = 0000 0111 */
// printf("%d >> 2 = %d\n", a, c );
 
 int x = 3;
int *p = &x;
printf("%p = %p\n", &x, p); /* Outputs "A = A", for some implementation-defined A.
*/

 return 0;
}

