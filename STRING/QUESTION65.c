# include<stdio.h>//write a function to count the occurence of the vowel in the string and also find the number of words in the string.
# include<string.h>
int countvowels(char str[]);
int main() {

    
char str[200];
fgets(str,200,stdin);
strlen(str);
int x = strlen(str);
countvowels(str);
printf("no of vowels is :%d \n", countvowels(str));
printf("no of consonants is : %d", x - countvowels(str));


    return 0;
}

int countvowels(char str[]){
    int count = 0;
for(int i=0;str[i] != '\0'; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
        count++;

    }
}

return count;
    
    

}
