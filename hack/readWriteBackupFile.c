#include <stdio.h>

int ch = 2;
typedef struct{
        int laenge;
        int hoehe; } RECT;

RECT sqr[100];

int main (int argc, char** argv){
        int n1, n2;
        FILE* fp;
        char str[1000];
        fp = fopen("data.txt", "r+"); // for unix data.txt
        if(argc == 2){
                sqr[0].laenge = atoi(argv[1]);
                n1 = fwrite(sqr, sizeof(RECT), 100, fp);
                if(n1== 100)
                        printf("all written down\n\n");
                else
                        printf("we had a problem\nonly %d elements were written\n", n1);
                
                fclose(fp);
        }else if(argc == 1){
                fopen("datai.txt", "r+");
                RECT rec[100];
                n2 = fread(rec, sizeof(RECT), 100, fp);
                if(n2 == 100)
                        printf("as expected\n%d\n", rec[0].laenge);
                else
                        printf("we had a problem");

        }
        return 0;


}

