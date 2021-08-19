/*
In a company ,an employee’s rating point(ERP) is calculated as the sum of the rating points
given by the employee’s manager and HR .the employee rating grade (ERG) is calculated according 
to the ERP ranges given below.

ERP                ERG
30-50              D

51-60              C

61-80              B

81-100           A

Write an algorithm to find the ERG character for a given employee’s ERP

INPUT:

The  input consists of an integer ERP ,representing the calculated employee rating point

OUTPUT:

Print a character representing the ERG for a given employee’s ERP
*/
#include<stdio.h>
int main(){
	int erp;
	scanf("%d",&erp);
	switch(erp){
		case 30 ... 50:
		printf("D");
		break;
		case 51 ... 60:
		printf("C");
		break;
		case 61 ... 80:
		printf("B");
		break;
		case 81 ... 100:
		printf("A");
		break;
	}
}
