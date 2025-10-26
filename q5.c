#include<stdio.h>
int main(){
	int row,coloum,sum=0,avg;
	printf("enter number of rows: ");
	scanf("%d",&row);
	printf("enter number of coloums: ");
	scanf("%d",&coloum);
	int reading[row][coloum][3];
	for(int i=0;i<row;i++){
		for(int j=0;j<coloum;j++){
				printf("enter rgb value for %d row %d coloum: ",i+1,j+1);
			for(int k=0;k<3;k++){
				scanf("%d",&reading[i][j][k]);
			}
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<coloum;j++){
			for(int k=0;k<3;k++){
				sum+=reading[i][j][k];
			}
		}
	}
	avg=sum/(row*coloum*3);
		printf("the average is %d",avg);
	return 0;
}