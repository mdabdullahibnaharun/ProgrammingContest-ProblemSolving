#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    int s,v1,v2,t1,t2,n1,n2;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    n1=(s*v1)+(2*t1);
    n2=(s*v2)+(2*t2);
    if(n1<n2)
        printf("First\n");
    else if(n1>n2)
        printf("Second\n");
    else if(n1==n2)
        printf("Friendship\n");
    return 0;
}
