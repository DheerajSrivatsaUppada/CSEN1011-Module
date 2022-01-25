#include<stdio.h>
int main(){
  int maximum,minimum,j,a[20],num;
  printf("Enter number of elements in the array:");
  scanf("%d",&num);
   printf("Enter %d numbers",num);
  for(j=0;j<num;j++){
    scanf("%d",&a[j]);
  }
  maximum=a[0];
  minimum=a[0];
  for(j=0;j<num;j++){
    if(a[j]<minimum){
      minimum=a[j];
    }
    else if(a[j]>maximum){
      maximum=a[j];
    }
  }
  printf("Max= %d\nMin= %d\n",maximum,minimum);
}

/*
Output:
Enter number of elements in the array:5
Enter 5 numbers
6
5
4
3
2
Max=6
Min=2
*/
