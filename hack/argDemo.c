#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
//loop to go through arguments
	for(int i = 0; i<argc; i++){
		if(strcmp("test", argv[i]) == 0){
			printf("you won the jackpot with");
		}
		printf("argument %d = %s\n", i, argv[i]);
	}
//array of strings (arrays of characters
	char *test[] = {"hallo", "wie", "geht"};
	for(int i = 0; i<3; i++)
		printf("%s\n", test[i]);

	return 0;

}

