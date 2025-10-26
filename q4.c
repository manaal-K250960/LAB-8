#include<stdio.h>
int main(){
	int r,c,zero=0,nonzero=0;
	printf("enter number of rows: ");
	scanf("%d",&r);
	printf("enter number of coloum: ");
	scanf("%d",&c);
	int reading[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){			
				printf("enter value for %d row %d coloum: ",i+1,j+1);
				scanf("%d",&reading[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		if(reading[i][j]==0){
			zero++;	
		}			
		}
		
	}
	printf("MATRIX \n");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("%d\t",reading[i][j]);
			}
			printf("\n");
		}
		if(zero<(r*c)/2){
				printf("the matrix is not sparse");
		}
		else{
				printf("the matrix is sparse");
		}
		
	return 0;
}