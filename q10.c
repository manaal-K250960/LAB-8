#include<stdio.h>
int main(){
	int w,v,p,high;
	printf("enter number of hospital wards: ");
	scanf("%d",&w);
	printf("enter number of patients: ");
	scanf("%d",&p);
	printf("enter number of vital signs recorded for each patient: ");
	scanf("%d",&v);
	int vital[w][p][v];
	for(int i=0;i<w;i++){
		for(int j=0;j<p;j++){
			for(int k=0;k<v;k++){
				printf("enter vital reading of %d ward %d patient %d vital: ",i+1,j+1,k+1);
				scanf("%d",&vital[i][j][k]);	
			}
			
		}
	}
	printf("MATRIX \n");
		for(int i=0;i<w;i++){
		for(int j=0;j<p;j++){
		for(int k=0;k<v;k++){
		printf("%d\t",vital[i][j][k]);	
		}
		printf("\n");
		}
		printf("\n");
	}
for(int i=0;i<w;i++){
	printf("\n----ward %d----\n",i+1);
	for(int j=0;j<v;j++){
		int rowsum=0;
		for(int k=0;k<p;k++){
			rowsum+=vital[i][j][k];
		}
		 printf("Sum of vitals of patient %d (Row %d): %d\n", j+1, j+1, rowsum);
	}
	for(int k=0;k<p;k++){
		int colsum=0;
			for(int j=0;j<v;j++){
			colsum+=vital[i][j][k];
		}
		 printf("Sum of each vital %d (coloum %d): %d\n", k+1, k+1, colsum);
	}
	
	
}
	
	return 0;
}