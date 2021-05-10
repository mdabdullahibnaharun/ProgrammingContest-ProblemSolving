#include<iostream>
#include<cstdio>
#include<string.h>
#include<stdlib.h>

using namespace std;

#define MAX 1005

typedef struct restaurant
{
    char name[25];
    int point;
} restaurants;

void selectionSort(restaurants arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j].point < arr[min_idx].point)
            {
                min_idx = j;
            }
        }

        restaurants temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int tc,i,j;
    scanf("%d",&tc);
    restaurants rs[tc];

    for(i=0; i<tc; i++)
    {
        scanf("%s %d",&rs[i].name,&rs[i].point);
    }

    selectionSort(rs,tc);

    int samevalue=0;
    for(i=0; i<tc-1; i++)
    {
        if(rs[i].point==rs[i+1].point)samevalue++;
    }

    if(samevalue<=1)
    {
        printf("%s\n",rs[tc-1].name);
    }
    else
    {
        char smallname[25];
        strcpy(smallname,rs[0].name);
        for(i=0; i<tc; i++)
        {
            if(strcmp(smallname,rs[i].name)>0)
            {
                strcpy(smallname,rs[i].name);
            }
        }
        printf("%s\n",smallname);
    }

    return 0;
}
