#include <stdio.h>
int main()
{
    char c;
    int n,m;
    printf("Enter an alphabet: ");
    scanf("%c",&c); 
    n = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    m = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (n|| m)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
