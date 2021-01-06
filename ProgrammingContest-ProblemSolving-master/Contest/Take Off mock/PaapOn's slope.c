#include<stdio.h>
#include<math.h>
int main ()
{
    int S, X1, Y1, X2 , Y2 , M;

    scanf("%d",  &S  );
    scanf("%d",  &X1 );
    scanf("%d",  &Y1 );
    scanf("%d",  &X2 );
    scanf("%d",  &Y2 );

        M=(Y2-Y1)/(X2-X1);

        if(M==S) {
            printf("Fortune favors on Papi PaapOn\n");
    }
        else{
            printf("Fortune does not favor on Papi PaapOn\n");
        }

        return 0;
}
