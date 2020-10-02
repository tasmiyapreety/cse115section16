#include<stdio.h>
#include<string.h>

void emalIValid(char s[]);
int main()
{
    char str[100], key;
    printf("Enter email:");
    gets(str);
    emailIsValid(str);
    return 0;
}

void emailIsValid(char s[])
{
    int i=0, count=0;
    char at='@';
    char dot='.';
    char gmail[10]="gmail.com";
    while(s[i]!='\0')
    {
        int(at==s[i])
        {
            printf("@ working\n");
            printf("Valid email");
            if(gmail==s[i])
            {
                printf("Google");

            }
            if(s[i]=='hotmail.com')
            {
                printf("Hotmail");
            }
            if(s[i]=='yahoo.com')
            {
                printf("Yahoo");
            }
       else
        printf("Other");
       count=1;
       break;
        }
    else
        count=0;

    i++;
    }
if(count==0)
    printf("Invalid email");
}
