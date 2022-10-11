#inlcude<stdio.h>
void main()
{
  int i,n,sum=0;
  printf("enter the number of elements to be added");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    sum=sum+i;
  printf("Sum of n elements =%d",sum);
}
