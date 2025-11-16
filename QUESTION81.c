# include<string.h>
int lengthOfLastWord(char* s) {
    int x = strlen(s);
    int count = 0;
    int i;
    for (i = x-1; i>=0;i--){
        if(s[i]!=' '){
            break;
        }
    }
    for (i=i; i>=0;i--){
        if(s[i]==' '){
            break;
        }
        count++;
        }
        return count;
    }
    
