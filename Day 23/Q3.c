//Program to Check Anagram Strings

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2) {
        printf("Strings are Not Anagrams");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        int count1 = 0, count2 = 0;

        for(j = 0; j < len1; j++) {
            if(str1[i] == str1[j])
                count1++;
            if(str1[i] == str2[j])
                count2++;
        }

        if(count1 != count2) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");

    return 0;
}