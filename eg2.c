#include<stdio.h>

int main(){
int a = 1;
int b = 1;
int tmp = 0;
tmp = ++a; /* increments a by one, and returns new value; a == 2, tmp == 2 */
printf("%d,%d\n",a, tmp);
tmp = a++; /* increments a by one, but returns old value; a == 3, tmp == 2 */
printf("%d,%d\n",a, tmp);
tmp = --b; /* decrements b by one, and returns new value; b == 0, tmp == 0 */
printf("%d,%d\n",b, tmp);
tmp = b--; /* decrements b by one, but returns old value; b == -1, tmp == 0 */
printf("%d,%d\n",b, tmp);

return 0;
}
