#include <stdio.h>
void main() {
    auto int a = 10;
    {
        auto int a = 20;
{
        a = 30;
        printf("%d", a);
    }
     printf("\n%d",a);
}
    printf("%d", a);
}