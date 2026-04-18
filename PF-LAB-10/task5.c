#include <stdio.h>
#include <string.h>

int main()
{
    char words[6][20];
    int seen[6] = {0};

    for (int i = 0; i < 6; i++)
    {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (seen[i] == 0)
        {
            int count = 1;

            for (int j = i + 1; j < 6; j++)
            {
                if (strcmp(words[i], words[j]) == 0)
                {
                    count++;
                    seen[j] = 1;
                }
            }

            printf("\nWord: ");
            int len = strlen(words[i]);

            for (int k = 0; k < len; k++)
            {
                printf("%c ", words[i][k]);
            }

            printf("\nCount: %d\n", count);
        }
    }

    return 0;
}