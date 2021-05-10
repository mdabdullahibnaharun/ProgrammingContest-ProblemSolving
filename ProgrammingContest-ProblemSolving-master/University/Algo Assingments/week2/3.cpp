/** headers **/

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

/**sorting Algorithm **/
void insertionSort(char arr[], int n)
{
    int i, j;
    char key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/** main function **/
int main()
{
    char arr[100005];

    /**Input value **/
    scanf("%[^\n]s",&arr);

    int n = 0;

    /** measure that string length **/
    while(arr[n]!='\0')n++;

    /** insertion sort **/
    insertionSort(arr, n);

    printf("%s\n",arr);

    return 0;
}
