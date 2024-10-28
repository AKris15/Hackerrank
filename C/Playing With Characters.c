#include <stdio.h>



int main() 
{
    char ch;
    char word[128];
    char sen[128];
    
    scanf("%c", &ch);
    scanf("%s\n", &word);
    scanf("%[^\n]%*c", &sen);
    
    printf("%c\n", ch);
    printf("%s\n", word);
    printf("%s\n", sen);

    return 0;
}
