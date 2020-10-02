
#include <stdio.h>

int main ()
{
    int arr[4]={2,5,1,6};
    int *ptr=arr;
    int i;
    for(i=0;i<4;i++)
    {
        printf("*ptr[%d]=%d\n",i,*(ptr+i));
    }

    printf("\n\n");

    char str[]="hello";
    char *chptr;
    chptr=str;
    puts(str);
    puts(chptr);

    printf("\n\n");

    char str1[]="hello";
    char *chptr1;
    chptr1=str1;
    i=0;
    while(str1[i]!='\0')
    {
        printf("%c",*chptr1+i); /*chptr is having 1st string value, "h". 1st it'll work for *chptr
                                  and then it'll increase its ASCII value by one, which is "i" */
        i++;
    }

    printf("\n\n");

    char str2[]="hello";
    char *chptr2;
    chptr2=str2;
    i=0;
    while(str2[i]!='\0')
    {
        printf("%c",*(chptr2+i));   //it will work as like as puts.
        i++;
    }

    return 0;
}

