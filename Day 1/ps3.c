#include<stdio.h>
void main()
{
    char c;
    printf("Enter the alphabet:");
    scanf("%c",&c);
    if(c=='a'||c=='i'||c=='e'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        printf("Vowel");
    else
        printf("Consonant");
}
