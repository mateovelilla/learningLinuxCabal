#include <stdio.h>
void butler(void);
int main(void)
{
        printf("Este print no tiene comillas.\n");
        butler();
        printf("si aca tambien esta llamando otra funcion");
        return 0;
}
void butler(void)
{
        printf("me llamaste señor?\n");
}

