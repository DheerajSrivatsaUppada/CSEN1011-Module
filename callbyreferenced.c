// call by reference using swap function
#include<stdio.h>
int swap(int *f, int *u){
  int temp;
  temp=*f;
  *f=*u;
  *u=temp;
  printf("After swapping %d %d",*f,*u);
}
int main()
{
  
  int x,y;
  printf("Before swapping %d %d",x,y);
  printf("\n");
  swap(&x,&y);
}
/*
Output:
Before swapping 32765 -1092075088
After swapping -1092075088 32765
*/
