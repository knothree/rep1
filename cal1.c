/* 산술 연산 */
#include <stdio.h>
int main()
{
    int a,b;
    a = 10;
    b = 3;
    printf("a + b 는 : %d \n", a + b);
    printf("a - b 는 : %d \n", a - b);
    printf("a * b 는 : %d \n", a * b);
    printf("a / b 는 : %d \n", a / b);
    printf("a %% b 는 : %d \n \n", a % b);

   //  printf("a / b 는 : %f \n", a / b); // 해서는 안될 짓
    return 0;
}
