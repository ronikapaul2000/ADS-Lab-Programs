#include<stdio.h>
int m[]={0,0,0,0};
int a,b,r,s;
void main()
{
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
union2(a,b);
printset();
}

void union2(int a,int b)
{
    r=find(a);
    s=find(b);
    printf("%d",r);
    printf("%d",s);
    if(r!=s)
    {
        m[s]=r;
    }
    else{
        printf("Same set");
    }

      int find(int x)
{
    if(m[x]==0)
    {

        return x;
    }
    else (find m[x]);
}

void printset()
{
    for (int i=0;i<4;i++){

printf("%d",m[i]);                      ++++++++++++++++++++++++++++++++++++++++
    }                                   +                                      +
                                        +                                      +
}                                       +                                      +
+++++++++++++++++++++++++++++++++++++++++                                      ++++++++++++++++++++++++++++++++++++
+
+
+
+
+
++++++++++++++++++++++++++++++++++++++++                                      ++++++++++++++++++++++++++++++++++++++
                                       +                                      +
                                       +                                      +
                                       +                                      +
                                       ++++++++++++++++++++++++++++++++++++++++




