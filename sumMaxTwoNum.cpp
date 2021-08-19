/*
In a science research lab,combining two nuclear chemicals produces a maximum energy that 
is the product of the energy of the two chemicals . The energy values of the chemicals can be
negative or positive. The scientist wishes to calculate the sum of the maximized energies of the 
two elements when the reaction happens.

Write an algorithm to find the total energy produced by the chemicals when the reaction happens

INPUT:

The first line of the input consists of an integer numOfChem,representing the number of chemicals(N)
The second line consists of N space-separated integers  ener1,ener2…. representing the energies of
the chemicals

OUTPUT:

Print an integer representing the total energy produced by the chemicals when the reaction happens

Constraints:

0=numOfChem=
==
0=i<numOfChem

Example:
Input:
7
9 -3 8 -6 -7 8 10  -->9+10
Output
19
Explanation:
The maximum product of the energies is 90..i.e 9*10 
So the sum of the energies of the chemicals is 19.

Test cases:
i/p : 
6
-3 5 -6 9 8 -9  --> 8+9

Output:
 17
i/p:
5
6 4 2 3 9  --> 6+9 
o/p:
15
*/
#include<stdio.h>
int main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	
	for(i=0;i<n;i++){
		for( j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			
			}
		}
	}
	printf("%d",arr[0]+arr[1]);
}
