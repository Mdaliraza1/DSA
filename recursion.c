#include<stdio.h>
void tower(int,char,char,char);
int main()
{
    int num;
    printf("Enter the number of disk:");
    scanf("%d",&num);
    tower(num,'A','B','C');
}
void tower(int num,char beg,char qux, char end)
{
    if(num==1){
        printf("Move disk 1 from peg %c to peg %c \n",beg,end);
    return;
    }
    tower(num-1,beg,end,qux);
    printf("Move disk %d from peg %c to peg %c \n",num,beg,end);
    tower(num-1,qux,beg,end);
    
}