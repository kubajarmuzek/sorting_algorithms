#include <time.h>
#include <string.h>


int *generateRandomArray(int size, int t[])
{
    time_t x;
    srand((unsigned) time(&x));
    for(int i=0; i<size; i++)
    {
        t[i] = rand()%(10*size);
    }
}

int *generateIncreasingArray(int size, int t[])
{
    //int t[size];
    time_t x;
    srand((unsigned) time(&x));

    t[0] = rand()%11;
    for(int i=1; i<size; i++)
    {
        t[i] = t[i-1] + rand()%16;
    }
    return t;
}

int *generateDecreasingArray(int size, int t[])
{
    time_t x;
    srand((unsigned) time(&x));

    t[0] = rand()%11 + 10*size - 10;
    for(int i=1; i<size; i++)
    {
        t[i] = t[i-1] - rand()%16;
    }
    return t;
}

int *generateAShaped(int size, int t[])
{
    time_t x;
    srand((unsigned) time(&x));

    int maxValueIndex = size*0.5 + rand()%((int)(0.2*size)) - 0.1*size;

    t[0] = rand()%11;
    for(int i=1; i<size; i++)
    {
        if(i<maxValueIndex)
        {
            t[i] = t[i-1] + rand()%21;
        }
        else
        {
            t[i] = t[i-1] - rand()%16;
        }
    }
    return t;
}

int *generateVShaped(int size, int t[])
{
    time_t x;
    srand((unsigned) time(&x));

    int minValueIndex = size*0.5 + rand()%(int)(0.2*size) - 0.1*size;

    t[0] = 10*size - rand()%11;
    for(int i=1; i<size; i++)
    {
        if(i > minValueIndex)
        {
            t[i] = t[i-1] + rand()%16;
        }
        else
        {
            t[i] = t[i-1] - rand()%21;
        }
    }
    return t;
}

int *loadFromKeyboard(int t[], int size, char a, int *data)
{
    printf("Podaj elementy tablicy:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &t[i]);
    }
    printf("\nCiag wejsciowy:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d, ", t[i]);
    }

    switch(a)
    {
    case 'q':
        tailRecursiveQuicksort(t, 0, size-1, data);
        break;
    case 'h':
        heapsort(t, size, data);
        break;
    case 'i':
        insertionsort(t, size, data);
        break;
    case 'm':
        MergeSort(t, 0, size-1, data);
        break;
    case 's':
        shellsort(t, size,1,data,1);
        break;
    default:
        printf("\n\nProgram nie posiada podanego algorytmu.");
    }
}
