#include<stdio.h>
#include<conio.h>
#include<windows.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int count=0;
char pa;
void name(){
	printf("\t\t-----------");
	printf("\n\t\tTIC TAC TOE \n");
	printf("\t\t-----------");
}
void show(){
	printf("\n\n\t\t---|---|---");
	printf("\n\t\t %c | %c | %c ",a[0],a[1],a[2]);
	printf("\n\t\t---|---|---");
	printf("\n\t\t %c | %c | %c ",a[3],a[4],a[5]);
    printf("\n\t\t---|---|---");
    printf("\n\t\t %c | %c | %c ",a[6],a[7],a[8]);
    printf("\n\t\t---|---|---");
}
void symbol(){
	printf("\n\n\n\t--------------------");
	printf("\n\tPlayer 1 symbol: |x|");
	printf("\n\tPlayer 2 symbol: |O|");
	printf("\n\t--------------------");
	
}
void check(char P, char S){
	int i;
	for(i=0; i<9; i++){
		if(a[i]==P){
			a[i]=S;
		}
		
	}
	if(pa=='1')
	pa='2';
	else if(pa=='2')
	pa='1';
}
void play(){
	char p,s;
	printf("\n\tEnter position \n\t");
	fflush(stdin);
	scanf("%c",&p);
//	fflush(stdin);
//	printf("\t");
//	scanf("%c",&s);
	count++;
	if(pa=='1')
	 s='x';
	
	  else if(pa=='2')
	  s='O';
	  
	check(p,s);
}
void start(){
	
	printf("\n\n\tEnter which player would start:\n\n\tEnter 1 for player 1\n\tEnter 2 for player 2\n\t");
	fflush(stdin);
	scanf("%c",&pa);
	
}

int end(){
	if(a[0]=='x' && a[1]=='x' && a[2] =='x'  ||  a[3]=='x' && a[4]=='x' && a[5] =='x'  || a[6]=='x' && a[7]=='x' && a[8] =='x'){
		return 100;
	}
	else if(a[0]=='x' && a[4]=='x' && a[8] =='x'  ||  a[2]=='x' && a[4]=='x' && a[6] =='x'  || a[0]=='x' && a[3]=='x' && a[6] =='x' || a[1]=='x' && a[4]=='x' && a[7] =='x' || a[2]=='x' && a[5]=='x' && a[8] =='x'){
		return 100;
	}
	
	else if(a[0]=='O' && a[1]=='O' && a[2] =='O'  ||  a[3]=='O' && a[4]=='O' && a[5] =='O'  || a[6]=='O' && a[7]=='O' && a[8] =='O'){
		return 200;
	}
	else if(a[0]=='O' && a[4]=='O' && a[8] =='O'  ||  a[2]=='O' && a[4]=='O' && a[6] =='O'  || a[0]=='O' && a[3]=='O' && a[6] =='O' || a[1]=='O' && a[4]=='O' && a[7] =='O' || a[2]=='O' && a[5]=='O' && a[8] =='O'){
		return 200;
	}
	else
	 return 300;
}
int main(){
	
	
	int k;
	char ch;
	label1:
		count=0;
	system("cls");
	name();
	show();
	symbol();
	start();
	play();
	
	label:
    system("cls");
    show();
    play();
    k=end();
    if(count<10){
	
    if(k==100)
     printf("Player 1 wins\n");
     else if(k==200)
      printf("Player 2 wins\n");
      else if(k==300)
         goto label;
     }
    else
        printf("Game Draw\n");
         
         
    printf("Enter y for play again or any other key to end the Game\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='Y' || ch== 'y'){
        
        a[0]='1';a[1]='2';a[2]='3';a[3]='4';a[4]='5';a[5]='6';
        a[6]='7';a[7]='8';a[8]='9';
        
        
		goto label1;	
	}
     
         getch();
}
