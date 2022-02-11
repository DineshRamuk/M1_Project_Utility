#include "function.h"
int changepriceticket(int price)
{
	char pass[10],pak[10]="admin";
	printf("Enter the password to change price of ticket: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		printf("Enter new price: ");
		scanf("%d",&price);
		printf("Price Updated");
		system("PAUSE");
		system("CLS");
	}
	else
		printf("Entered password is incorrect! ");
	return price;
}
