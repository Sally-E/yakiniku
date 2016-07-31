#include<stdio.h>
//#include<stdlib.h>

int main(){
	int N;
	char bb[2];

	fgets(bb,sizeof(bb),stdin);
	N=atoi(bb);
	switch(N){
		case 1:
			printf("E\n");
			break;
		case 2:
			printf("D\n");
			break;
		case 3:
			printf("C\n");
			break;
		case 4:
			printf("B\n");
			break;
		case 5:
			printf("A\n");
			break;
	}
}
