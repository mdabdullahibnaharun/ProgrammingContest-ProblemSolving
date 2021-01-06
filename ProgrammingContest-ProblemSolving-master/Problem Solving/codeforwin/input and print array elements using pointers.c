#include<stdio.h>
#define A 5
int main()
{
    int arr[A];
    int i;
    int *p=arr;
    printf("Enter array elements:\n");
    for(i=0;i<A;i++){
        scanf("%d",p);
        p++;
    }
    p=arr;
    printf("printing array elements: ");
    for(i=0;i<A;i++){
        printf("%d ",*p);
        p++;
    }
return 0;
}
