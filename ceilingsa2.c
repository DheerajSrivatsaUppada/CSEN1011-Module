/* Write a C program for the following problem.
For a given array  of sorted integers,  find the ceiling of a number n in the array.
If the ceiling number is not there, output the last element of the sorted list.
If the number n is already in the sorted list, output the number itself.
For example consider the sorted array as [12, 30, 43, 65, 74, 81, 96]
If n = 15, output should be 30 
If n = 97, output should be 96
if n = 65, output should be 65 */



#include <stdio.h> 
int main(){
  int N,i,j;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  
  int x,s;
  scanf("%d",&x);
  int low=0,high=N-1,mid;
  int c=-1;
  while(low<=high){
    mid=(low+high)/2;
    if (a[mid]==x){
      return a[mid];
      printf("%d",c);
      break;
    }
    else if(x<a[mid]){
      c=a[mid];
      high=mid-1;
      printf("%d",c);
      break;
    }
    else if(x<a[0]){
      printf("%d",a[0]);
      break;
    }
    else if(x>a[N-1]){
      s=N-1;
      printf("%d",a[s]);
      break;
    }
    else{
      low=mid+1;
      printf("%d",c);
      break;
    }

  }
 
}


/* output:
Case - 01
Ënter the number of terms in the array: 7
12 30 43 65 74 81 96
Enter the number to find its ceiling: 15
30
Case - 02
Ënter the number of terms in the array: 7
Enter the numbers: 12 30 43 65 74 81 96
Enter the number to find its ceiling: 97
The ceiling of the given number is 96
Case - 03
Ënter the number of terms in the array: 7
Enter the numbers: 12 30 43 65 74 81 96
Enter the number to find its ceiling: 65
The ceiling of the given number is 65
*/


