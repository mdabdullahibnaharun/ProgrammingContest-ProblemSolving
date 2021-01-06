#include<stdio.h>
int main()
{
  char ch='A';
  printf(" %c\n",ch+32);
 /// printf(" %c\n",ch-32);
  return 0;
}

/*
#include<stdio.h>
struct StudentInfo
{
    int id;
    float cgpa;
    char sname[20];
};

int main()
{
    char ch='a';
    printf("%c\n",toupper(ch)); //toupper();
    printf("%c\n",tolower(ch));

    printf("%c\n",ch-32);
    printf("%c\n",ch+32);
    return 0;
}
*/
/*
int main()
{

    struct StudentInfo s1,s2;

    s1.id=1;
    s1.cgpa=3.9;
    strcpy(s1.sname,"Zidan");

    s2.id=2;
    s2.cgpa=3.45;
    strcpy(s2.sname,"Mahfuj");

    printf("Id %d\n",s1.id);
    printf("CGPA %f\n",s1.cgpa);
    printf("Name %s\n",s1.sname);

    printf("\n\n\n");

    printf("Id %d\n",s2.id);
    printf("CGPA %f\n",s2.cgpa);
    printf("Name %s\n",s2.sname);
}
*/
/*
#include<stdio.h>
struct StudentInfo
{
    int id;
    float cgpa;
    char sname[20];
};

int main()
{
    struct StudentInfo s1,s2;

    int n=9;// int type var
    double a = 4.5; //double type var
    char ch='A';// char type var;

    struct StudentInfo x={1,3.45,"SADIA"};

    printf("ID %d\n",x.id);
    printf("ID %f\n",x.cgpa);
    printf("ID %s\n\n",x.sname);

    s1.id=1;
    s1.cgpa=3.9;
    strcpy(s1.sname,"Zidan");

    s2.id=2;
    s2.cgpa=3.45;
    strcpy(s2.sname,"Mahfuj");

    printf("Id %d\n",s1.id);
    printf("CGPA %f\n",s1.cgpa);
    printf("Name %s\n\n",s1.sname);

    printf("Id %d\n",s2.id);
    printf("CGPA %f\n",s2.cgpa);
    printf("Name %s\n\n",s2.sname);
}
*/

/*
#include<stdio.h>
struct studentinfo
{
    float cgpa;
    int id;
    char sname[20];
};
int main()
{
    struct studentinfo s1,s2,s3; // student type var
    s1.id=1;
    s1.cgpa=3.45;
    strcpy(s1.sname,"ZIDAN");

    printf("Id = %d\n",s1.id);
    printf("Id = %.2f\n",s1.cgpa);
    printf("Id = %s\n",s1.sname);

    s2.id=2;
    s2.cgpa=3.45;
    s2.sname[20]="MAHFUZ";

    printf("Id = %d\n",s2.id);
    printf("Id = %.2f\n",s2.cgpa);
    printf("Id = %s\n",s2.sname);

}
*/

/*
int main()
{
    struct StudentInfo s1,s2;

    int n=9;// int type var
    double a = 4.5; //double type var
    char ch='A';// char type var;

    struct StudentInfo x={1,3.45,"SADIA"};

    printf("ID %d\n",x.id);
    printf("ID %f\n",x.cgpa);
    printf("ID %s\n",x.sname);

    s1.id=1;
    s1.cgpa=3.9;
    strcpy(s1.sname,"Zidan");

    s2.id=2;
    s2.cgpa=3.45;
    strcpy(s2.sname,"Mahfuj");

    printf("Id %d\n",s1.id);
    printf("CGPA %f\n",s1.cgpa);
    printf("Name %s\n",s1.sname);

    printf("Id %d\n",s2.id);
    printf("CGPA %f\n",s2.cgpa);
    printf("Name %s\n",s2.sname);
}

*/

/*
int main()
{
    struct studentinfo s1,s2,s3; // student type var
    s1.id=1;
    s1.cgpa=3.45;
    strcpy(s1.sname,"ZIDAN");

    printf("Id = %d\n",s1.id);
    printf("Id = %.2f\n",s1.cgpa);
    printf("Id = %s\n",s1.sname);

    s2.id=2;
    s2.cgpa=3.45;
    s2.sname[20]="MAHFUZ";

}
*/

/*
int main()
{
    struct studentinfo s1,s2,s3; // student type var

    s1.id=1;
    s1.cgpa=3.45;
    s1.sname[20]="ZIDAN";

    s2.id=2;
    s2.cgpa=3.45;
    s2.sname[20]="MAHFUZ";


    float cgpa1,cgpa2,cgpa3;    //float type var

    cgpa1=3.14;
    cgpa2=3.59;
}
*/

/*
struct studentinfo
{
    float cgpa;
    int id;
    char sname[20];
}s1,s2,s3;
*/
/*
struct studentinfo
{
    float cgpa;
    int id;
    char sname[20];
};
*/

/*
int main()
{
    int a,b,sum;
    float cgpa[]={3.45,3.45};
    int id[]={1,2};
    char name[30][]="ZIDAN","MAHFUZ";
}
*/

/*
int main()
{
    int a,b,sum;
    float cgpa=3.45;
    int id=1;
    char name[30]="ZIDAN";
}
*/
