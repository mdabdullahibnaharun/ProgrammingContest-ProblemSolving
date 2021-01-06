
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int search(int a[],int size,int data)
{
    int i;
    for(i = 0 ; i<size ; i++)
    {
        if(a[i]==data)
            return i;
    }
    return -1;
}

int main()
{
    int i,q;
    scanf("%d",&q);
    int n[q],j=0;
    for(i = 0; i<q ; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==1)
        {
            if(-1!=search(n,j,b))
            {
                n[j++]=b;
            }
            printf("Data added\n");
        }
        else if(a==2)
        {
            int x,k = search(n,j,b);

            for(x=k; x<j; x++)
            {
                n[x]=n[x+1];
            }
            printf("Double data removed\n");
            j--;

        }
        else if(a==3)
        {
            int k = search(n,j,b);
            if(k!=-1){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
    for(i=0; i<=j; i++)
    {
        printf("%d\n",n[i]);
    }
    return 0;
}



