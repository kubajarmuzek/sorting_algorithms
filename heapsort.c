#include <stdlib.h>


void heapsort(int T[], int size, int *data)
{
    int heapSize = size-1;
    buildMaxHeap(T, heapSize, data);
    for(int i=heapSize; i>0; i--)
    {
        int tmp = T[0];
        T[0] = T[i];//zamiana
        T[i] = tmp;                         data[1]++;
        heapSize--;
        maxHeapify(T, 0, heapSize, data);
    }
}


int left(int i)
{
    return (i+1)*2-1;
}

int right(int i)
{
    return (i+1)*2;
}

void maxHeapify(int* T, int i, int heapSize, int *data)
{
    int l = left(i);
    int r = right(i);
    int least;
    if(l <= heapSize && T[l] < T[i])//porównanie
    {
        least = l;                          data[0]++;
    }
    else
    {
        least = i;
    }
    if(r <= heapSize && T[r] < T[least])//porównanie
    {
        least = r;                          data[0]++;
    }
    if(least != i)
    {
        int tmp = T[i];
        T[i] = T[least];//zamiana
        T[least] = tmp;                     data[1]++;
        maxHeapify(T, least, heapSize, data);
    }
}

void buildMaxHeap(int* T, int heapSize, int *data)
{
    for(int i=heapSize/2; i>-1; i--)
    {
        maxHeapify(T, i, heapSize, data);
    }
}
