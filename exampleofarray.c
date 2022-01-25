#include<stdio.h>
int main(){
  int k[20],num;
  printf("Enter number of elements in the array:");
  scanf("%d",&num);
  printf("Enter %d numbers",num);
  for(int j=0;j<num;j++){
    scanf("%d",&k[j]);
  }
  printf("The array elements are\n");
  for(int j=0;j<num;j++){ 
    printf("%d \t",k[j]);
  }
}
/*
Output:
Enter number of elements in the array: 5
Enter 5 numbers 1
2
3
4
5
The array elements are
1 2 3 4 5
*/
