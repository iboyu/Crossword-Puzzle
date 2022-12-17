#include <stdio.h>
#define ROWS 15
#define COLS 15
#define Size 50

int main()
{

    int i, j, index, numOfChar;
    char inBuff[Size];
    char words[ROWS][COLS];

    for (i = 0; i < 2; i++)
    {
        printf("Please enter the word: \n");
        fgets(inBuff, Size, stdin);
        sscanf(inBuff, "%s", words[i]);
    }

    for (j = 0; j < 2; j++)
    {
        numOfChar = 0;
        for (index = 0; index < COLS; index++)
        {

            if (words[j][index] != '\0')
            {
                numOfChar++;
            }
            else
            {
                break;
            }
        }
        printf("Word %i output: ", j + 1);
        for (; numOfChar >= 0; numOfChar--)
        {
            printf("%c", words[j][numOfChar]);
        }

        printf("\n");
    }

    return 0;
}
