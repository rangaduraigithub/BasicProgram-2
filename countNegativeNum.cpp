
/*
The bank SafeMoney had some dormant accounts. The   bank charges certain monthly rates for the
maintenance of these accounts. Because of these monthly deductions ,the balance of some of these 
accounts are negative . The bank wishes to close these negative-value dormant accounts.

Write an algorithm to help the bank find the number of dormant bank accountants that have a 
negative balance.

Input:dd

The first line of the input consists of an integer numOfAccounts representing the number of
dormant accounts (N)

The second line consists of N space-separated integers – ac1,ac2….acN representing the balance
in each account

Output:
Print an integer representing the number of dormant account that must be closed for negative balance.
Constraiints:
0<=numOfaccounts<=10^6
-1006<=balance<=1006
0<=i<numOfaccounts
Example:
I/P:
10
-5 -3 8 -6 -7 18 10 -4 -3 11
O/P:
6
*/

#include<stdio.h>
int main(){
	int n,c=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<n;i++){
    	if(arr[i]<0){
    		c++;
		}
		}
		printf("%d",c);
	
}
