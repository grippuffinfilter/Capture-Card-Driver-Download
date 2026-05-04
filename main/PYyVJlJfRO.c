#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
void sortArray(int *arr, int size)
{
    qsort(arr, size, sizeof(int), compare);
}
void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, size);
    sortArray(arr, size);
    printf("Sorted array: ");
    printArray(arr, size);
    return 0;
}
