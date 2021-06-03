#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    printf("Enter a letter to check if it's a vowel or consonant!\n");
    scanf("%c", &letter);


    if(letter == 'a'){
        printf("%c is a vowel!", letter); return 0;
    }
    if(letter == 'e'){
        printf("%c is a vowel!", letter ); return 0;
    }
    if(letter == 'i'){
        printf("%c is a vowel!", letter); return 0;
    }
    if(letter == 'o'){
        printf("%c is a vowel!", letter); return 0;
    }
    if(letter == 'u'){
        printf("%c is a vowel!", letter); return 0;
    }
    else{printf("%c is a consonant ", letter);
	}
    return 0;
}

