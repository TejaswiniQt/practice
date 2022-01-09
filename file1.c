#include <stdio.h>

int main()
{
    char ch;
    printf("press 'h' if you are hungry or press 't' for thirsty\n");
    scanf("%c",&ch);
    if(ch=='h')
    {
        printf("eat samosa\n");
    }
    else
	    printf("drink water\n");
    
    return 0;
}
