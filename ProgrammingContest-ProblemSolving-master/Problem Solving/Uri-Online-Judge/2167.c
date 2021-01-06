#include<stdio.h>
int main(int argc, char** argv)
{
    int i,n;
    scanf("%d",&n);
    int p=n;
    int r[p];
    for(i=0;i<n;i++);{
        scanf("%d",&r[i]);
    }
    int f=r[0];
    for(i=0;i<n;i++){
        if(f>r[i]){
            f=r[i];
            c+=i;
        }
    }
    printf("%d\n",c+1);
return 0;
}
