char* reverseWords(char* s) {
    int n = strlen(s);
    char* result = malloc(n+1);

    int i = n-1;
    int j=0;
    while(i>=0){
        while(i>=0 && s[i]==' '){
            i--;
        }
        if (i < 0) break;
        int end= i;
        while(i>=0 && s[i]!=' '){
            i--;
        }
        int start = i+1;
        for(int k= start ; k<=end ; k++){
            result[j++] = s[k];
        }

        result[j++] = ' ';
    }
    if(j>0 && result[j-1]==' '){
        j--;
    }
    result[j] = '\0';
    return result;

}