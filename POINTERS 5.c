#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char *word, *next;
    int len;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if(len > 0 && name[len - 1] == '\n')
        name[len - 1] = '\0';

    word = strtok(name, " ");
    while(word != NULL) {
        next = strtok(NULL, " ");
        if(next == NULL)
            printf("%s", word);
        else
            printf("%c. ", word[0]);
        word = next;
    }
    printf("\n");

    return 0;
}
