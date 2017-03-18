/*Irrigation problems*/

#include<stdio.h>

int main()
{
    int Ca, Cb, N;

    while(scanf("%d %d %d", &Ca, &Cb, &N) != EOF)
    {
        int a = 0, b = 0, Nowb;

        while(b != N)
        {
            for(int i = 0; i <= ((Cb - b) / Ca); i++)
            {
                printf("fill A\n");
                printf("pour A B\n");
                Nowb = b + (i + 1) * Ca;

                if(Nowb == N) { break; }
            }

            if(Nowb == N) { break; }

            printf("empty B\n");
            int a;
            a = Ca - (Cb - b) % Ca;
            printf("pour A B\n");
            b = a;
        }

        printf("success\n");
    }
}
