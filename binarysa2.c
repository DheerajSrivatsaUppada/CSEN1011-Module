/*Write a C program to convert binary to decimal number. 
Note:
For the purpose of auto-grading the input should be like
5 1 0 1 1 0
where the first line contains the number of bits in the list and the rest contain bits.  
From these bits obtain the decimal number.
Output should be 22 for the above example.*/


#include<stdio.h>
#include<math.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    int f[a],i=0;
    
    while(i<a){
    scanf("%d",&f[i]);
    i+=1;}
    int j=0;
    while(j<a){
        b=b+f[j]*pow(2,a-j-1);
        j+=1;
    }
    printf("%d",b);
}


/* Output:
~/CSEN1011-18/Summative-Assessment-02$ gcc 04-binary-to-decimal.c -lm
~/CSEN1011-18/Summative-Assessment-02$ ./a.out
Enter the number of bits in the array: 5
Enter the bits... 1 1 1 1 1
The decimal equivalent of the binary number is 31 */
