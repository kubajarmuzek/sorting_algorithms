#include <stdbool.h>

void quicksort(int T[], int p, int r, int *data, bool *czy_z_klawiatury)
{
    if(czy_z_klawiatury) printf("\nWartosc pivota: %d", &T[r]);
    if(p < r)
    {
        int q = partition(T, p, r, data);
        quicksort(T, p, q-1, data, czy_z_klawiatury);
        quicksort(T, q+1, r, data, czy_z_klawiatury);
    }
}

int partition(int T[], int p, int r, int *data)
{
    int x = T[r];
    int i = p-1;
    for(int j=p; j<r; j++)
    {
        if(T[j] >= x)//porównanie
        {
            i++;                            data[0]++;
            int tmp = T[j];
            T[j] = T[i];//zamiana
            T[i] = tmp;                     data[1]++;
        }
    }
    T[r] = T[i+1];//zamiana
    T[i+1] = x;                             data[1]++;
    return i+1;
}

void tailRecursiveQuicksort(int T[], int p, int r, int *data, bool *czy_z_klawiatury)
{
    if(czy_z_klawiatury) printf("\nWartosc pivota: %d", T[r]);
    while(p < r)
    {
        int q = partition(T, p, r, data);
        tailRecursiveQuicksort(T, p, q-1, data, czy_z_klawiatury);
        p = q+1;
    }
}
