#include <stdio.h>
void isPalindrome(char *str) {

    // Reversing the string
    char *rev = strrev(str);

    // Check if the original and reversed
  	// strings are equal
    if (strcmp(str, rev) == 0)
        printf("\"%s\" is palindrome.\n",
               str);
    else
        printf("\"%s\" is not palindrome.\n",
               str);
}
int main()
{
    int size=0,i=0;
    char str[]="Deepak";
   while(str[i]!='\0')
    {
        size++;
        i++;
    }
    printf("Length is %d\n",size);
    for(int i=size;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    if|(str)

    return 0;
}
