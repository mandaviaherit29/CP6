#include <stdio.h>

int main()
{
    char book1[50], book2[50], book3[50];
    char *p[3] = {book1, book2, book3};
    int i;

    printf("Enter three book names:\n");
    for(i = 0; i < 3; i++)
        scanf(" %49[^\n]", p[i]);

    printf("Book names are:\n");
    for(i = 0; i < 3; i++)
        printf("%s\n", p[i]);

    return 0;
}
