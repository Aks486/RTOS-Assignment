#include <stdio.h>
int sum(int arr[]){
 	int j ;
 	int sum1 =0;
 	for(j=0;j<10;j++){
		sum1 += arr[j];
	}
	return sum1;
}
int prod(int arr[]){
	int i;
	int prod1 = 1;
	for(int j =0;j<10;j++){
		prod1 =prod1*arr[j];
	}
	return prod1;
}
float avg(int arr[]){
	int i;
	int avg1=0;
	int avg2;
	for(int j =0;j<10;j++){
		avg1 += arr[j];
	}
	avg2=avg1/10;
	return avg2;
}

int main(){
	int i,arr[100];
	printf("Enter the 10 numbers: \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("The sum , average and product of 10 numbers are: %d %f %d\n",sum(arr),avg(arr),prod(arr));
	return 0;
}