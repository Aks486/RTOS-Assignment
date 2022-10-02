#include <stdio.h>
#define N 5
#define M 5
int main()
{
    int arr[N][M], odd[30], even[30];
    int n ,o=0;
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++){
        for(int j=0;j<M;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < N; i++){
        for(int j =0;j<M;j++){
            if(arr[i][j] % 2 == 0){
               even[n] = arr[i][j];
                n++;
            }else{
                odd[o]=arr[i][j];
                o++;
            }
        }
    }
    printf("The elements present in the odd array are: ");
    for (int i=0;i<o;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    printf("The elements present in the even array are: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",even[i]);
    }
    return 0;
}
