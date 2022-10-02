#include<stdio.h>

int sum(int arr[],int n){
 	int j ;
 	int sum1 =0;
 	for(j=0;j<n;j++){
		sum1 += arr[j];
	}
	return sum1;
}
int prod(int arr[],int n){
	int i;
	int prod1 = 1;
	for(int j =0;j<n;j++){
		prod1 =prod1*arr[j];
	}
	return prod1;
}
float avg(int arr[],int n){
	int i;
	int avg1=0;
	int avg2;
	for(int j =0;j<n;j++){
		avg1 += arr[j];
	}
	avg2=avg1/n;
	return avg2;
}


int main(){
	int i,arr[100];
	int count = 0,n;
	printf("Enter the 10 numbers: \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		count++;
		if(arr[i]==888){
			n = count - 1;
		}
	}
	printf("The sum , average and product of 10 numbers are: %d %f %d\n",sum(arr,n),avg(arr,n),prod(arr,n));
	return 0;
}