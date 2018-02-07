#include <stdio.h>
int main()
{
    char line[150];
    int i;
    vowels =  consonants 0;
    printf("Enter a line of string: ");
    scanf("%[^\n]", line);
    for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i])
        }
        else if((line[i])
        {
       ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9');
        else if (line[i]==' ')
        {
            ++spaces;
        }
    }
    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d", spaces);
    return 0;
}
