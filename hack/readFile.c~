#include <stdio.h>
#include <stdlib.h>


int main(void){
        FILE *fp = fopen("test.txt", "r+"); // for unix test.txt
        if(fp == NULL)
                printf("\nERROR\n");
        else{
                char str[100];
                fgets( str, 100, fp);
                printf("\n%s\n", str);
                printf("\nworked well\n%d \n" , fgetc(fp) );
                fputs("hallo\n", fp);
                
        }  
        return 0;
}
