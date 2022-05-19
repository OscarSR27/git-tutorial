#include <stdio.h>
#include "espl_lib.h"

int main()
{
    printf("Hello ESPL\n");
            
    char command = 'a';
    char *numToWords = NULL;
    while(command != 'q')
    {
        unsigned int x = 0;
        printf("Please type an integer positive number (default value is 0): ");
        scanf("%d", &x);

        numToWords = num_to_words(x);

        printf("The output value is: ");
        printf("%s",numToWords);
        printf("\nIf you want to exit please press q, otherwise press any other key\n");
        scanf(" %c", &command);
    }

}