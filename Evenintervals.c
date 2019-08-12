void main()
{
int l,h,t;
clrscr();
printf("Enter any two number(intervals):");
scanf("%d%d",&l,&h);
printf("Even numbers between %d and %d are=",l,h);
for(t=l+1;t<h;t++)
{
if(t%2==0)
printf("\t%d",t);
}
getch();
}
