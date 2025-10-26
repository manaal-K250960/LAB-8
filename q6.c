#include<stdio.h>
int main(){
	int row,col,correct=1;
	printf("enter number of rows: ");
	scanf("%d",&row);
	printf("enter number of coloums: ");
	scanf("%d",&col);
	int seat[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
				printf("enter seat value for %d student %d seat: ",i+1,j+1);
			
				scanf("%d",&seat[i][j]);
		}
	}
		printf("MATRIX \n");
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				printf("%d\t",seat[i][j]);
			}
			printf("\n");
		}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i==j && seat[i][j]!=1 ){
				printf("Student %d not in correct seat\n", i+1);
				correct=0;
				break;
			}
			else if(i!=j && seat[i][j]!=0 ){
				printf("Student %d not in correct seat\n", i+1);
				correct=0;
				break;
			}
		}
	}
	if(correct)
    printf("All students are in their correct seats. Seating is an identity matrix.\n");
else
    printf("Some students are sitting in wrong seats.\n");


	return 0;
}