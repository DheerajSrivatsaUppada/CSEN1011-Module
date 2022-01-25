/* We are given a list of integers where: the integers are in the range 1..n
The list has a length of n+1 These properties mean the list must have at least 1 duplicate. 
Write a C program to identify the duplicate. */


#include <stdio.h>
 int main(){
   int N,i,j;
   scanf("%d",&N);
   int a[N];
   for(i=0;i<N;i++){
     scanf("%d",&a[i]);
    }
    for(i=0; i<N; i++){
      for(int j=i+1; j<N; j++){ 
        if(a[i]==a[j]){ 
           printf("%d\n",a[j]); 
        }
      }
    }
}


/* Output
case - 01
Enter the number of elements in the list: 5
Enter the elements... 1 4 3 2 1
1
case - 02
Enter the number of elements in the list: 5
Enter the elements... 1 2 4 3 2 
The duplicate element is 2
*/
