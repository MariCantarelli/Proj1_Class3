#include<stdio.h>

int Strlen(char s[]){
    int i;
    while(s[i] != '\0'){
        i++;
    }
    return i - 1; 
}

void Strcpy(char dst[], char org[]){
    int i = 0;
    while(org[i] != "\0"){
        dst[i] = org[i];
        i++;
    }
    dst[i] = '\0';
}

int main(){
    char str[20] = "abcde";
    char str1[20];
    printf("Tamanho da string %s : %d/n", str, Strlen(str));

    Strcpy(str1, str);
    printf("Tamanho da string %s : %d/n", str1, Strlen(str1));
    return 0;
}