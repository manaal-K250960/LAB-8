#include<stdio.h>
int main(){
	for(char i=65;i<=90;i++){
		for(char s=90; s>i; s--){
            printf(" ");
        }
		for (char j=65;j<=i;j++){
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}