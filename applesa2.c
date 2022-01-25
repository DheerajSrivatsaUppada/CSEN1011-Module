/*I want to know how much money I could have made yesterday if I'd been trading Apple stocks all day.
So I grabbed Apple's stock prices from yesterday and put them in an array called stock_prices, where:
The indices are the time (in minutes) past trade opening time, which was 9:30am local time.
The values are the price (in US dollars) of one share of Apple stock at that time.
So if the stock cost $500 at 10:30am, that means stock_prices[60] = 500.
Write program in C that the best profit I could have made from one purchase and one sale of one share of Apple stock yesterday.
For example:
  stock_prices = [10, 7, 5, 8, 11, 9]
the program should returns 6 (buying for $5 and selling for $11)
No "shorting"—you need to buy before you can sell. Also, you can't buy and sell in the same time step—at least 1 minute has to pass. */


int main(){
    int p,q,r,s=0;
    scanf("%d",&p);
    int m[p];
    int i=0;
    while(i<p){
    scanf("%d",&m[i]);
    i+=1;
    }
    i=0;
    while(i<p){
        if(m[0]<m[i])
        s+=1;
        i+=1;
    }
    if(s==0){
        printf("0");
        return 0;
    }
    q=r=m[0];
   int n=0;
    while(n<p){
        if(q<m[n])
        q=m[n];
        if(r>m[n])
        r=m[n];
	n+=1;
    }
    printf("%d",q-r);
}


/* Output: 
Case - 01
Enter the number of stock prices: 6
10 7 5 8 11 9
The maximum profit that is possible is 6
Case - 02
Enter the number of stock prices: 6
The stock prices are ...
1 2 3 4 5 6
The maximum profit that is possible is 5
Case - 03
Enter the number of stock prices: 6
The stock prices are ...
6 5 4 3 2 1
The maximum profit that is possible is 0
*/

/* Learnings:
Instead of 3 nested for loops is there a better way?
*/
