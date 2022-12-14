/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readString(char* fileName)
{
    char *pointer = malloc(100);

    FILE *pointer2 = fopen(fileName,"r");
    fgets(pointer, 100, pointer2);

    pointer[strlen(pointer)-1] = '\0';
    return pointer;
}

char* mysteryExplode(const char* string)
{

    int length = strlen(string);
    char *pointer3 = malloc(((length*length + length)/2)+1);

    int i;
    int j;

    for(i = 1; i<=strlen(string); i++)
    {
        for(j = 0; j<i; j++)
        {
            strncat(pointer3, &string[j], 1);
        }
    }

    return pointer3;
}
