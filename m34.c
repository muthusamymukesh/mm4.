#include<stdio.h>
void main()
{
    int i,b,count;
    char a[100];
    printf("Enter the passage:");
         scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
            count++;
        }
    }
    printf(" The value is %d",count);
}
