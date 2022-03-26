#include <time.h>
#include <stdlib.h>
#include <stdio.h>


void reportTests(char a, int *size, double *time, int *data)
{
    //int t0[10], t1[10], t2[10], t3[10], t4[10], t5[10], t6[10], t7[10], t8[10], t9[10];
    //int t0[0][size[0]];





    for(int i=0; i<10; i++)
    {
        int t0[size[i]];
        generateIncreasingArray(size[i], t0);
        int t1[size[i]];
        generateIncreasingArray(size[i], t1);
        int t2[size[i]];
        generateIncreasingArray(size[i], t2);
        int t3[size[i]];
        generateIncreasingArray(size[i], t3);
        int t4[size[i]];
        generateIncreasingArray(size[i], t4);
        int t5[size[i]];
        generateIncreasingArray(size[i], t5);
        int t6[size[i]];
        generateIncreasingArray(size[i], t6);
        int t7[size[i]];
        generateIncreasingArray(size[i], t7);
        int t8[size[i]];
        generateIncreasingArray(size[i], t8);
        int t9[size[i]];
        generateIncreasingArray(size[i], t9);


        clock_t start = clock();

        switch(a)
        {
        case 'm':
            MergeSort(t0, 0, size[i]-1, data);
            MergeSort(t1, 0, size[i]-1, data);
            MergeSort(t2, 0, size[i]-1, data);
            MergeSort(t3, 0, size[i]-1, data);
            MergeSort(t4, 0, size[i]-1, data);
            MergeSort(t5, 0, size[i]-1, data);
            MergeSort(t6, 0, size[i]-1, data);
            MergeSort(t7, 0, size[i]-1, data);
            MergeSort(t8, 0, size[i]-1, data);
            MergeSort(t9, 0, size[i]-1, data);
            break;
        case 'h':
            heapsort(t0, size[i], data);
            heapsort(t1, size[i], data);
            heapsort(t2, size[i], data);
            heapsort(t3, size[i], data);
            heapsort(t4, size[i], data);
            heapsort(t5, size[i], data);
            heapsort(t6, size[i], data);
            heapsort(t7, size[i], data);
            heapsort(t8, size[i], data);
            heapsort(t9, size[i], data);
            break;
        case 'q':
            tailRecursiveQuicksort(t0, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t1, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t2, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t3, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t4, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t5, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t6, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t7, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t8, 0, size[i]-1, data, 0);
            tailRecursiveQuicksort(t9, 0, size[i]-1, data, 0);
            break;
        case 's':
            shellsort(t0, size[i], data, 0);
            shellsort(t1, size[i], data, 0);
            shellsort(t2, size[i], data, 0);
            shellsort(t3, size[i], data, 0);
            shellsort(t4, size[i], data, 0);
            shellsort(t5, size[i], data, 0);
            shellsort(t6, size[i], data, 0);
            shellsort(t7, size[i], data, 0);
            shellsort(t8, size[i], data, 0);
            shellsort(t9, size[i], data, 0);
            break;
        case 'i':
            insertionsort(t0, size[i], data);
            insertionsort(t1, size[i], data);
            insertionsort(t2, size[i], data);
            insertionsort(t3, size[i], data);
            insertionsort(t4, size[i], data);
            insertionsort(t5, size[i], data);
            insertionsort(t6, size[i], data);
            insertionsort(t7, size[i], data);
            insertionsort(t8, size[i], data);
            insertionsort(t9, size[i], data);
            break;
        default:
            printf("XD");
        }


        clock_t end = clock();
        time[i] = ((double)(end - start))/CLOCKS_PER_SEC;
    }


}

