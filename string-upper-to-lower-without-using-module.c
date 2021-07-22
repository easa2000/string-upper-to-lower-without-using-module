// program to convert upper to lower without using module

#include<stdio.h>
void main()
{
    int i=0,j=0;
    char str[100], lower_str[100];
    printf("\n Enter a String: ");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <='Z')
        {
            lower_str[j] = str[i] + 32;
        }else{
            lower_str[j] = str[i];
        }
        i++;
        j++;
    }
    lower_str[j] = '\0';
    printf("\n The String converted into Uppercase: ");
    puts(lower_str);
}
