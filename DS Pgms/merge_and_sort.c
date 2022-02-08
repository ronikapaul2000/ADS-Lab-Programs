#include<stdio.h>
void main()
{
int a[50],b[50],c[50],n1,n2,m,i,j,temp=0;
printf("Enter the size of the 1st array");
scanf("%d",&n1);
printf("enter the elements");
for(i=0;i<n1;i++)
{
  scanf("%d",&a[i]);
}
printf("Enter the size of the 2nd array");
scanf("%d",&n2);
printf("Enter the elements of the second array");
for(i=0;i<n2;i++)
{
 scanf("%d",&b[i]);
}
for(i=0;i<n1;i++)
{
 c[i]=a[i];
}
m=n1+n2;
for(i=0,j=n1;j<m&&i<n2;i++,j++)
{
c[j]=b[i];
}
for(i=0;i<m;i++)
{
 for(j=i+1;j<m;j++)
 {
   if(c[i]>c[j])
   {
     temp=c[i];
     c[i]=c[j];
     c[j]=temp;
   }
 }
}
printf("\nAfter sorting:");
for(i=0;i<m;i++)
{
printf("%3d",c[i]);
}
printf("\nArray elements after merging",m);
for(i=0;i<m;i++)
{
printf("%3d",c[i]);
}
}
