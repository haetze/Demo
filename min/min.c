#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int FlagNum = 10;
void genField(int Field[]);
void genOut(int Field[], char OutPut[], int Flag[], int choice[]);
void input(int Field[], char OutPut[], int Flag[], int choice[]);
void testWin(char OutPut[]);

int main(){
	int BombNum = 10;
	char Out[BombNum*BombNum];
	int Field[BombNum*BombNum];
	int FlagField[BombNum*BombNum];
	int ch[BombNum*BombNum];
	for(int i = 0; i<100; ++i)
		ch[i] = 0;
	genField(Field);
	genOut(Field, Out, FlagField, ch);

	return 0;


}

void genField(int Field[]){
	int c = 0;
	for(int i = 0; i<10; ++i){
		time_t ti = time(NULL);
		srand ( ti );
		int x = rand() % 100;
		if(Field[x] == 1)
			--i;
		else{
		
			Field[x] = 1;
			++c;
			//printf("%d\n",c);

		}
	}
	for(int n = 0; n<100; ++n){
		if(Field[n] == 1){

		}else{
			Field[n] = 2;
		}
		//printf("%d\n%d\n", Field[n], c);

		


	}

}



void genOut(int Field[], char  OutPut[], int Flag[], int choice[]){
	for(int i = 0; i<100; ++i){
		OutPut[i] = 'o';
		if(choice[i] == 1)
			OutPut[i] = 'x';
		else if(Flag[i] == 1)
			OutPut[i] = 'f';

		else if((choice[i+1]==1 || choice[i+10]==1 || choice[i+11] == 1) && i == 0){
			int bc = 0;
			if(Field[i+1] == 1)
				++bc;
			if(Field[i+10] == 1) 
	       			++bc;
			if(Field[i+11] == 1)
	                         ++bc;
			OutPut[i] = (char)(((int)'0')+bc);
			
		}else if((choice[i-1]==1 || choice[i+10]==1 || choice[i+9] == 1) && i == 9){
			int bc = 0;
			if(Field[i-1] == 1)
				++bc;
			if(Field[i+10] == 1)
				++bc;
			if(Field[i+9] == 1)
				++bc;
			OutPut[i] = (char)(((int)'0')+bc);	
		
		}else if((choice[i-10] == 1 || choice[i-9] == 1 || choice[i+1]==1 )&& i==90){
			int bc = 0;
			if(Field[i-10] == 1)
				++bc;
			if(Field[i-9] == 1)
				++bc;
			if(Field[i+1] == 1)
				++bc;
			OutPut[i] = (char)(((int)'0')+bc);
		
		}else if((choice[i-10] == 1 || choice[i-11] == 1 || choice[i-1]==1 )&& i==99){
			int bc = 0;
			if(Field[i-10] == 1)
				++bc;
			if(Field[i-11] == 1)
				++bc;
			if(Field[i-1] == 1)
				++bc;
				
			OutPut[i] = (char)(((int)'0')+bc);
		
		}else if((choice[i-1] == 1 || choice[i+1] == 1 || choice[i+10] == 1) && i!=0 && i!=9 && i<10){
			int bc = 0;
			if(Field[i-1] == 1)
				++bc;
			if(Field[i+1] == 1)
				++bc;
			if(Field[i+10] == 1)
				++bc;
			OutPut[i] = (char)(((int)'0')+bc);
		
		}else if((choice[i-1] == 1 || choice[i+1] == 1 || choice[i-10] == 1) && i>90 && i<99){
			int bc = 0;
			if(Field[i-1] == 1)
				++bc;
			if(Field[i+1] == 1)
				++bc;
			if(Field[i-10] == 1)
				++bc;
			OutPut[i] = (char)(((int)'0')+bc);
		
		}else if(((choice[i-10]==1 && i-10!=-1) || (choice[i-9]==1 && i-9!=-1) || choice[i+1]==1 || choice[i+10]==1 || choice[i+11]==1) && i%10==0 && i!=90 && i!=0){
			int bc = 0;
			if(Field[i-10] == 1)
				++bc;
			if(Field[i-9] == 1)
				++bc;
			if(Field[i+1] == 1)
			       ++bc;
			if(Field[i+10] == 1)
				++bc;
			if(Field[i+11] == 1)
				++bc;
		
			OutPut[i] = (char)(((int)'0')+bc);

		}else if(((choice[i-10]==1 && i-10!=-1) || (choice[i-11]==1 && i-11!=-1) || choice[i-1]==1 || choice[i+10]==1 || choice[i+9]==1) && (i-9)%10==0 && i!=9 && i!=99){
			int bc = 0;
			if(Field[i-10] == 1)
				++bc;
			if(Field[i-11] == 1)
				++bc;
			if(Field[i-1] == 1)
				++bc;
			if(Field[i+10] == 1)
				++bc;
			if(Field[i+9] == 1)
				++bc;
			OutPut[i] = (char)(((int)'0')+bc);

		}else if(((choice[i-11]==1 && i-11!=-1) || (choice[i-10]==1 && i-10!=-1) || (choice[i-9]==1 && i-9!=-1) || (choice[i-1]==1 && i-1!=-1) || (choice[i+1]==1 && i+1!=-1) || (choice[i+9]==1 && i+9!=-1) || (choice[i+10]==1 && i+10!=-1) || (choice[i+11]==1 && i+11!=-1))&&(i%10!=0 && (i-9)%10!=0 && i-90>0 && i!= 0 && i!=9 && i!=90 && i!=99 &&  i-10>0) ){
			int bc = 0;
			if(Field[i-11]==1)
				++bc;
			if(Field[i-10]==1)
				++bc;
			if(Field[i-9]==1)
				++bc;
			if(Field[i-1]==1)
				++bc;
			if(Field[i+1]==1)
				++bc;
			if(Field[i+9]==1)
				++bc;
			if(Field[i+10]==1)
				++bc;
			if(Field[i+11]==1)
				++bc;
			OutPut[i] = (char)(((int)'0')+bc);
				
		}else{
			OutPut[i] = 'o';

		}
		printf("%c",OutPut[i]);
		if(i==9 || i==19 || i==29 || i==39 || i==49 || i==59 || i==69 || i==79 || i==89 || i==99 || i==109)
                	printf("\n");


	}
	
	input(Field, OutPut, Flag, choice);
	

}






void input(int Field[], char OutPut[], int Flag[], int choice[]){
	printf("Next Turn:\n <1> turn a card\n <2> set a Flag (you have %d flags left)\n <3>remove a flag\n ",FlagNum);
	int ch = 1;
	scanf("%d", &ch);
	if(ch == 1){
		int card = 0;
		printf("Which card do you want to turn??\n");
		scanf("%d", &card);
		if(Field[card] == 1){
			printf("Boooom!! You lose\n");
			return ;
		}else if(Flag[card] == 1){
			printf("There is a flag you can't do that!!!\n");
		}else
			choice[card] = 1;

	}else if(ch == 2){
		if(FlagNum == 0)
			printf("Not enough flags\n");
		else{
			--FlagNum;
			int card = 0;
			scanf("%d", &card);
			if(choice[card] == 1)
				printf("already choosen\n");
			else if(Flag[card] == 1)
				printf("already flaged\n");
			else
				Flag[card] = 1;

		}
	}else if(ch == 3){
		int card = 0;
		printf("which card you want to unflag\n");
		scanf("%d", &card);
		if(Flag[card] != 1)
			printf("no flag to remove\n");
		else{
			++FlagNum;
			Flag[card]=2;
		}
	
	}
	else{
	}
	testWin(OutPut);
	genOut(Field, OutPut, Flag, choice);

}

void testWin(char OutPut[]){
	int won = 1;
	for( int i = 0; i<100; ++i){
		if(OutPut[i] != 'o' && OutPut[i]!='0' && OutPut[i]!='1' && OutPut[i]!='2' && OutPut[i]!='3' && OutPut[i]!='4' && OutPut[i]!='5' && OutPut[i]!='6'&& OutPut[i]!='7' && OutPut[i]!='8' && won==1){
			won = 1;
		}else{
			won = 2;
		}
	}
	if(won == 1){
		printf("\n YOU WON\n");
		return;
	}
}





