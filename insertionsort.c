void insertionsort(int* T, int size, int *data)
{
    int j;
    for(int i=1; i<size; i++)
    {
        j = i;

        while(j > 0 && T[j] >= T[j-1])//porównanie
        {                                       data[0]++;
            int tmp = T[j];
            T[j] = T[j-1];//zamiana
            T[j-1] = tmp;                       data[1]++;
            j--;
        }
    }
}
