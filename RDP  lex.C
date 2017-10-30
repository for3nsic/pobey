#include<stdio.h>
#include<conio.h>
int i=0;
char str[30];
int s(){
if(str[i]=='c')
i++;
else return 0;
if(A())
i++;
else return 0;
if(str[i]=='d' && str[i+1]==NULL)
return 1;
else return 0;
}
int A()
{
if(str[i]=='a')
i++;
else return 0;
if(A1())
return 1;
else
return 0;
}
int A1()
{
if(str[i]=='b')
return 1;
else if(str[i]=='d')
return 1;
else return 0;
}
void main()
{
clrscr();
printf("enter the string \n");
scanf("%s",str);
if(s()){
printf("the string is accepted");
}
else
printf("the string is not accepted");
getch();
}