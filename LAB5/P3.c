#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 100
#define MAX_LEN 100

// Function to check if two strings are anagrams
int isAnagram(char str1[], char str2[]) {
    int count1[256] = {0}, count2[256] = {0};
    int i;

    // If lengths are different, they can't be anagrams
    if (strlen(str1) != strlen(str2)){
        return 0;
    }
    // Count frequency of each character
    for (i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    // Compare character counts
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    char words[MAX_WORDS][MAX_LEN];
    char input[MAX_LEN];
    int randomIndex;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // random number generator
    srand(time(0));
    randomIndex = rand() % n;

    printf("Random word is: %s\n", words[randomIndex]);

    printf("Enter an anagram of this word: ");
    scanf("%s", input);

    if (isAnagram(words[randomIndex], input)) {
        printf("It is an Anagram\n");
    } else {
        printf("It is not an Anagram\n");
    }
}
