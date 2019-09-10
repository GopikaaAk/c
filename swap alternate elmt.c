#include<stdio.h>
int main()
{
int total;
int i;
int temp;
scanf("%d",&total);
int array[total];
for(i=0;i<total;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<total;i+=2)
{
if(i+1==total)
{
break;
}
temp=array[i];
array[i]=array[i+1];
array[i+1]=temp;
}
for(i=0;i<total;i++)
{
printf("%d ",array[i]);
}
return 0;
}
