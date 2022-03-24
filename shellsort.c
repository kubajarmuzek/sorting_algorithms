#include<stdio.h>

void shellsort(int tab[],int size,int *data, int czy_z_klawiatury)
{
    //printf("%d\n",size);
    int gap = 1;
    while(gap < size)
    {
        gap *= 3;
        gap++;
    }
    gap /=3;

    int i;
    while(gap > 0)
    {
        if(czy_z_klawiatury==1)
        {
            printf("%d\n",gap);
        }
        for(i=gap;i<size;i++)
        {
            int t = tab[i];
            int j = i;

            while(j >= gap && tab[j - gap] < t)
            {
                data[0]++;
                tab[j] = tab[j - gap];
                j -= gap;
            }
            tab[j] = t;
            if(j != i)
            {
                data[1]++;
            }
        }
        gap /= 3;
    }
}
