#include<stdio.h>
void bubblesort(int A[], int n){
    int i, j, temp;
    for ( i = 0; i < n-1; i++){
        for ( j = 0; j < n-i-1; j++)
        {
            if(A[j]<A[j+1]){
                temp = A[j];
                A[j]= A[j+1];
                A[j+1]= temp;
            }
        }
        
    }
    {
        
    }
    
}
void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
   
    
}
int main (){
    int n,i;
    printf("Please enter your array element : ");
    scanf("%d",&n);
    int A[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    bubblesort(A,n);
    printf("Print Sorted : ");
    printArray(A,n);
    



    
}