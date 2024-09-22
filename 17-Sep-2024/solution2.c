// 2. Check whether an alphabet entered by the user is a vowel or a consonant.

#include<stdio.h>
int main()
{
    char alpha,lowerVowel,upperVowel;
    printf("Enter any Alphabate: ");
    scanf("%c",&alpha);

    lowerVowel = (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u');
    upperVowel = (alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U');

    if(lowerVowel||upperVowel){
        printf("%c is Vowel",alpha);
    }
    else{
        printf("%c is Consonant",alpha);
    }
    return 0;
}
