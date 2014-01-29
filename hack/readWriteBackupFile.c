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
        fp = fopen("data", "rw+"); // for unix data.txt
        if(argc == 1){
                sqr[0].laenge = 12;
                n1 = fwrite(sqr, sizeof(RECT), 100, fp);
                if(n1== 100)
                        printf("all written down\n\n");
                else
                        printf("we had a problem\nonly %d elements were written\n", n1);
                
                fclose(fp);
        }else if(argc == 2){
                fopen("data", "rw+");
                RECT rec[100];
                n2 = fread(rec, sizeof(RECT), 100, fp);
                if(n2 == 100)
                        printf("as expected\n%d\n", rec[0].laenge);
                else
                        printf("we had a problem");

        }
        system("Pause");
        return 0;


}

