#include<stdio.h>
#include<string.h>
int main()
{
struct customer {

char name[15];

int amount;

char mobilenumber[10];

}n[2];
for(int i=0;i<2;i++){
scanf("%s",n[i].name);
scanf("%d",&n[i].amount);
if(n[i].amount<0){
printf("Invalid amount");
return 0;
}
scanf("%s",n[i].mobilenumber);
if(strlen(n[i].mobilenumber)!=10){
printf("Invalid mobile number");
return 0;
}
int j=0;
while(n[i].mobilenumber[j]!='\0'){
if(n[i].mobilenumber[j]>='0' && n[i].mobilenumber[j]<='9')
j+=1;
else{
printf("Invalid entry");
return 0;
}
}

}
int s=n[0].amount+n[1].amount;
printf("%d",s);
}
