#include <time.h>
#include <stdio.h>
#include <stdlib.h>


double test(char a, int size, int *data)
{
    int t0[size], t1[size], t2[size], t3[size], t4[size], t5[size], t6[size], t7[size], t8[size], t9[size];

    data[0] = 0;
    data[1] = 0;

    generateRandomArray(size, &t0);
    generateRandomArray(size, &t1);
    generateIncreasingArray(size, &t2);
    generateIncreasingArray(size, &t3);
    generateDecreasingArray(size, &t4);
    generateDecreasingArray(size, &t5);
    generateAShaped(size, &t6);
    generateAShaped(size, &t7);
    generateVShaped(size, &t8);
    generateVShaped(size, &t9);


    clock_t start = clock();

    switch(a)
    {
    case 'q':
        tailRecursiveQuicksort(t0, 0, size-1, data, 0);
        tailRecursiveQuicksort(t1, 0, size-1, data, 0);
        tailRecursiveQuicksort(t2, 0, size-1, data, 0);
        tailRecursiveQuicksort(t3, 0, size-1, data, 0);
        tailRecursiveQuicksort(t4, 0, size-1, data, 0);
        tailRecursiveQuicksort(t5, 0, size-1, data, 0);
        tailRecursiveQuicksort(t6, 0, size-1, data, 0);
        tailRecursiveQuicksort(t7, 0, size-1, data, 0);
        tailRecursiveQuicksort(t8, 0, size-1, data, 0);
        tailRecursiveQuicksort(t9, 0, size-1, data, 0);
        printf("%d %d\n\n",data[0],data[1]);
        break;
    case 'h':
        heapsort(t0, size, data);
        heapsort(t1, size, data);
        heapsort(t2, size, data);
        heapsort(t3, size, data);
        heapsort(t4, size, data);
        heapsort(t5, size, data);
        heapsort(t6, size, data);
        heapsort(t7, size, data);
        heapsort(t8, size, data);
        heapsort(t9, size, data);
        printf("%d %d\n\n",data[0],data[1]);
        break;
    case 'i':
        insertionsort(t0, size, data);
        insertionsort(t1, size, data);
        insertionsort(t2, size, data);
        insertionsort(t3, size, data);
        insertionsort(t4, size, data);
        insertionsort(t5, size, data);
        insertionsort(t6, size, data);
        insertionsort(t7, size, data);
        insertionsort(t8, size, data);
        insertionsort(t9, size, data);
        printf("%d %d\n\n",data[0],data[1]);
        break;
    case 'm':
        MergeSort(t0, 0, size-1, data);
        MergeSort(t1, 0, size-1, data);
        MergeSort(t2, 0, size-1, data);
        MergeSort(t3, 0, size-1, data);
        MergeSort(t4, 0, size-1, data);
        MergeSort(t5, 0, size-1, data);
        MergeSort(t6, 0, size-1, data);
        MergeSort(t7, 0, size-1, data);
        MergeSort(t8, 0, size-1, data);
        MergeSort(t9, 0, size-1, data);
        printf("\n %d\n",data[0]);
        break;
    case 's':
        shellsort(t0, size, data, 0);
        shellsort(t1, size, data, 0);
        shellsort(t2, size, data, 0);
        shellsort(t3, size, data, 0);
        shellsort(t4, size, data, 0);
        shellsort(t5, size, data, 0);
        shellsort(t6, size, data, 0);
        shellsort(t7, size, data, 0);
        shellsort(t8, size, data, 0);
        shellsort(t9, size, data, 0);
        printf("%d %d\n\n",data[0],data[1]);
        break;
    default:
        printf("\n\nProgram nie posiada podanego algorytmu.");
    }

    clock_t end = clock();
    double total = ((double) (end - start)) / CLOCKS_PER_SEC;

    return total;
}
