// WAP to determine whether the entered character is vowel or not
#include<stdio.h>
void main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O',ch=='U'){
        printf("Character is vowel");
    }
    else{
        printf("Character is consonant");
    }
}