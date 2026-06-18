#include<stdio.h>
int main()
{
    int n,t;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Enter the positio n to get toggle :");
    scanf("%d",&t);
    int c = n^(1<<t);
    printf("The number ofter toggle is :%d",c);
    return 0;
}