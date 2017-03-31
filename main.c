#include <stdio.h>
#include <conio.h>

void main()
{
    int nChar;

    while(1)
    {
        nChar = getch();
        if(nChar == 'q')
            break;
        printf("%c", nChar);
    }
}