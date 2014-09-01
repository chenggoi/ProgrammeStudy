/*
Find the longest same string between the "query" and "text",return the length
*/

#include<stdio.h>
#include<string.h>


int main()
{
    char text[100] , query[100];
    printf("Inpute the text and query: ");
    scanf("%s %s", &text, &query);
    int max = 0;

    if(strstr(text, query)) { printf("%d", strlen(query)); }
    else
    {

        for(int i = 0; i < strlen(text); i++)
        {

            int n = 0;

            for(int j = 0; j < strlen(query); j++)
            {
                if(text[i] == query[j])
                {
                    n = 1;
                    int a = i + 1, b = j + 1;

                    while(text[a] == query[b] && b < strlen(query))
                    {
                        n++;
                        a++;
                        b++;
                    }

                    if(n > max) { max = n; }
                }
            }
        }

        printf("max: %d", max);
    }

}
