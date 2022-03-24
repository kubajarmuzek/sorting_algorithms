#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    /*int t1[60000];
    generateIncreasingArray(60000, &t1);
    for(int i=0; i<60000; i++)
    {
        printf("%d, ", t1[i]);
    }

    tailRecursiveQuicksort(&t1, 0, 59999);

    printf("\n");

    for(int i=0; i<60000; i++)
    {
        printf("%d, ", t1[i]);
    }*///QUICKSORT TEST


    /*int t2[50];
    generateIncreasingArray(50, &t2);
    for(int i=0; i<50; i++)
    {
        printf("%d, ", t2[i]);
    }

    heapsort(&t2, 50);

    printf("\n");

    for(int i=0; i<50; i++)
    {
        printf("%d, ", t2[i]);
    }*///HEAPSORT TEST


    /*
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d, %d\n\n", a, b);
    */

    /*int t3[100];
    generateVShaped(100, &t3);
    for(int i=0; i<100; i++)
    {
        printf("%d, ", t3[i]);
    }
    printf("\n\n");
    insertionsort(t3, 100);

    for(int i=0; i<100; i++)
    {
        printf("%d, ", t3[i]);
    }*///INSERTIONSORT TEST


    /*int t4[100];
    generateVShaped(100, &t4);
    for(int i=0; i<100; i++)
    {
        printf("%d, ", t4[i]);
    }
    printf("\n\n");
    MergeSort(t4, 0, 99);

    for(int i=0; i<100; i++)
    {
        printf("%d, ", t4[i]);
    }*///!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


    /*int t5[100];
    generateVShaped(100, &t5);
    for(int i=0; i<100; i++)
    {
        printf("%d, ", t5[i]);
    }
    printf("\n\n");
    shellsort(t5, 100);

    for(int i=0; i<100; i++)
    {
        printf("%d, ", t5[i]);
    }*/
    /*
    int size;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &size);
    int t6[size];
    char a;
    int data[2];
    data[0]=0;
    data[1]=0;
    printf("Podaj algorytm(pierwsza litera): ");
    fflush(stdin);
    scanf("%c", &a);
    loadFromKeyboard(t6, size, a, data);
    printf("\n\n");
    printf("Ciag wyjsciowy:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d, ", t6[i]);
    }
    printf("\n%d %d ",data[0],data[1]);
    */
    int data[2];
    data[0] = 0;
    data[1] = 0;
    printf("Merge sort \n\n");
    float x = test('m', 1000, data);
    printf("n=1000 %lf\n", x/1000);
    x = test('m', 2000, data);
    printf("n=2000 %lf\n", x/1000);
    x = test('m', 3000, data);
    printf("n=3000 %lf\n", x/1000);
    x = test('m', 4000, data);
    printf("n=4000 %lf\n", x/1000);
    x = test('m', 5000, data);
    printf("n=5000 %lf\n", x/1000);
    x = test('m', 6000, data);
    printf("n=6000 %lf\n", x/1000);
    x = test('m', 7000, data);
    printf("n=7000 %lf\n", x/1000);
    x = test('m', 10000, data);
    printf("n=10000 %lf\n", x/1000);
    x = test('m', 12000, data);
    printf("n=12000 %lf\n", x/1000);
    x = test('m', 15000, data);
    printf("n=15000 %lf\n", x/1000);


    printf("Quick sort \n\n");
    x = test('q', 1000, data);
    printf("n=1000 %lf\n", x/1000);
    x = test('q', 2000, data);
    printf("n=2000 %lf\n", x/1000);
    x = test('q', 3000, data);
    printf("n=3000 %lf\n", x/1000);
    x = test('q', 4000, data);
    printf("n=4000 %lf\n", x/1000);
    x = test('q', 5000, data);
    printf("n=5000 %lf\n", x/1000);
    x = test('q', 6000, data);
    printf("n=6000 %lf\n", x/1000);
    x = test('q', 7000, data);
    printf("n=7000 %lf\n", x/1000);
    x = test('q', 10000, data);
    printf("n=10000 %lf\n", x/1000);
    x = test('q', 12000, data);
    printf("n=12000 %lf\n", x/1000);
    x = test('q', 15000, data);
    printf("n=15000 %lf\n", x/1000);


    printf("Insertion sort \n\n");
    x = test('i', 1000, data);
    printf("n=1000 %lf\n", x/1000);
    x = test('i', 2000, data);
    printf("n=2000 %lf\n", x/1000);
    x = test('i', 3000, data);
    printf("n=3000 %lf\n", x/1000);
    x = test('i', 4000, data);
    printf("n=4000 %lf\n", x/1000);
    x = test('i', 5000, data);
    printf("n=5000 %lf\n", x/1000);
    x = test('i', 6000, data);
    printf("n=6000 %lf\n", x/1000);
    x = test('i', 7000, data);
    printf("n=7000 %lf\n", x/1000);
    x = test('i', 10000, data);
    printf("n=10000 %lf\n", x/1000);
    x = test('i', 12000, data);
    printf("n=12000 %lf\n", x/1000);
    x = test('i', 15000, data);
    printf("n=15000 %lf\n", x/1000);


    printf("Heap sort \n\n");
    x = test('h', 1000, data);
    printf("n=1000 %lf\n", x/1000);
    x = test('h', 2000, data);
    printf("n=2000 %lf\n", x/1000);
    x = test('h', 3000, data);
    printf("n=3000 %lf\n", x/1000);
    x = test('h', 4000, data);
    printf("n=4000 %lf\n", x/1000);
    x = test('h', 5000, data);
    printf("n=5000 %lf\n", x/1000);
    x = test('h', 6000, data);
    printf("n=6000 %lf\n", x/1000);
    x = test('h', 7000, data);
    printf("n=7000 %lf\n", x/1000);
    x = test('h', 10000, data);
    printf("n=10000 %lf\n", x/1000);
    x = test('h', 12000, data);
    printf("n=12000 %lf\n", x/1000);
    x = test('h', 15000, data);
    printf("n=15000 %lf\n", x/1000);


    printf("Shell sort \n\n");
    x = test('s', 1000, data);
    printf("n=1000 %lf\n", x/1000);
    x = test('s', 2000, data);
    printf("n=2000 %lf\n", x/1000);
    x = test('s', 3000, data);
    printf("n=3000 %lf\n", x/1000);
    x = test('s', 4000, data);
    printf("n=4000 %lf\n", x/1000);
    x = test('s', 5000, data);
    printf("n=5000 %lf\n", x/1000);
    x = test('s', 6000, data);
    printf("n=6000 %lf\n", x/1000);
    x = test('s', 7000, data);
    printf("n=7000 %lf\n", x/1000);
    x = test('s', 10000, data);
    printf("n=10000 %lf\n", x/1000);
    x = test('s', 12000, data);
    printf("n=12000 %lf\n", x/1000);
    x = test('s', 15000, data);
    printf("n=15000 %lf\n", x/1000);


}



