#include <stdio.h>
#define SIZE 5

int array1[10], array2[10], array3[10], array4[10], i, j, k = 0, flag = 0;

void accept(int array[]);
void printArr(int array[]);
void _union();
void intersection();
void difference();
void symmetric_diff();

int main()
{
    printf("-- Enter the element of First array A --\n");
    accept(array1);

    printf("-- Enter the elements of array B --\n");
    accept(array2);

    printf("\n-- Set A --\n");
    printArr(array1);
    printf("\n-- Set B --\n");
    printArr(array2);

    _union();
    printf("\n");
    intersection();
    printf("\n");
    difference();
    printf("\n");
    symmetric_diff();
    printf("\n");

    return 0;
}

void accept(int array[])
{
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d, ", &array[i]);
    }
}

void printArr(int array[])
{
    printf("{ ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("}");
}

void _union()
{
    for (i = 0; i < SIZE; i++)
    {
        array3[k] = array1[i];
        k++;
    }
    for (i = 0; i < SIZE; i++)
    {
        flag = 0;
        for (j = 0; j < SIZE; j++)
        {
            if (array2[i] == array1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            array3[k] = array2[i];
            k++;
        }
    }
    printf("\n\n-- Union --\n");
    printf("{ ");
    for (i = 0; i < k; i++)
    {
        printf("%d, ", array3[i]);
    }
    printf("}");
}

void intersection()
{
    printf("\n-- Intersections --\n");
    printf("{ ");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (array1[i] == array2[j])
                printf("%d, ", array1[i]);
        }
    }
    printf("}");
}

void difference()
{
    printf("\n-- Difference of two set is --\n");
    printf("\nA-B\n");
    printf("{ ");
    for (i = 0; i < SIZE; i++)
    {
        flag = 0;
        for (j = 0; j < SIZE; j++)
        {
            if (array1[i] == array2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d, ", array1[i]);
    }
    printf("}");
    printf("\n\nB-A\n");
    printf("{ ");
    for (i = 0; i < SIZE; i++)
    {
        flag = 0;
        for (j = 0; j < SIZE; j++)
        {
            if (array2[i] == array1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d, ", array2[i]);
    }
    printf("}");
}

void symmetric_diff()
{
    k = 0;
    for (i = 0; i < SIZE; i++)
    {
        flag = 0;
        for (j = 0; j < SIZE; j++)
        {
            if (array1[i] == array2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            array4[k] = array1[i];
            k++;
        }
    }
    for (i = 0; i < SIZE; i++)
    {
        flag = 0;
        for (j = 0; j < SIZE; j++)
        {
            if (array2[i] == array1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            array4[k] = array2[i];
            k++;
        }
    }
    printf("\n-- Symmetric difference --\n");
    printf("{ ");
    for (i = 0; i < k; i++)
    {
        printf("%d, ", array4[i]);
    }
    printf("}");
}
