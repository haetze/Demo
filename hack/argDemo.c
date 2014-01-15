#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
	for(int i = 0; i<argc; i++){
		if(strcmp("test", argv[i]) == 0){
			printf("you won the jackpot with");
		}
		printf("argument %d = %s\n", i, argv[i]);
	}
	char *test[] = {"hallo", "wie", "geht"};
	for(int i = 0; i<3; i++)
		printf("%s\n", test[i]);

	return 0;

}

