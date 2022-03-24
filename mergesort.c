#include <stdlib.h>
#include <stdio.h>



void Merge(int tab[], int p, int m, int k, int *data)
{
    int size1 = m - p + 1;
    int size2 = k - m;


    int left[size1],right[size2];


    int q,w;

    for(q=0;q<size1;q++)
    {
        left[q] = tab[p + q];
    }
    for(w=0;w<size2;w++)
    {
        right[w] = tab[m + w + 1];
    }

    int i=0,j=0,n=p;
    while(i < size1 && j<size2)
    {
        data[0]++;
        if(left[i] >= right[j])
        {
            tab[n] = left[i];
            i++;
        }
        else
        {
            tab[n] = right[j];

            j++;
        }
        n++;
    }

    while(i<size1)
    {
        tab[n] = left[i];
        i++;
        n++;
    }
    while(j<size2)
    {
        tab[n] = right[j];
        j++;
        n++;
    }
}

void MergeSort(int tab[], int p, int k, int *data)
{
    if(p < k){
        int m = p + (k - p)/2;

        MergeSort(tab, p, m, data);
        MergeSort(tab, m + 1, k, data);

        data[1]++;

        Merge(tab, p, m, k, data);
    }

}
