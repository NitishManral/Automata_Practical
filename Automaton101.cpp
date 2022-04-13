#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	int i;
	char str[100],cs='A';
	clrscr();
	printf("Please enter a string where set of alphabet ={0,1}\n Where L={string must end with "101"}" );
	scanf("%s",str);
	printf("Transition: ->A");
	for(i=0;i<strlen(str);i++){
		if((cs=='A'|| cs=='B' || cs=='D') && str[i]=='1')
			cs='B';
		else if((cs=='B' || cs=='D') && str[i]=='0')
			cs='C';
		else if(cs=='C' && str[i]=='1')
			cs='D';
		else if((cs=='A' ||  cs=='C') && str[i]=='0')
			cs='A';
		printf("->%c ",cs);
	}
	printf("\nFinal state is %c\n Given string is ",cs);
	if(cs=='D')
		printf(" \baccepted");
	else
		printf(" \brejected");
	getch();

}