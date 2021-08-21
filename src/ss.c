#include "Billing.h"

void input()
{
	int tl, sl, ts;

	FILE *fp = fopen("ans.dat", "rb");
	fseek(fp, 0, SEEK_END);
	tl = ftell(fp);
	sl = sizeof(customer);
	ts = tl / sl;
	fseek(fp, (ts - 1) * sl, SEEK_SET);
	fread(&customer, sizeof(customer), 1, fp);
	printf("\ncustomer no:%d\n", ++customer.number);
	fclose(fp);
	printf("         Account number:");
	scanf("%d", &customer.acct_no);
	printf("\n       Name:");
	scanf("%s", customer.name);
	printf("\n       mobile no:");
	scanf("%f", &customer.mobile_no);
	printf("         Street:");
	scanf("%s", customer.street);
	printf("         City:");
	scanf("%s", customer.city);
	printf("         Previous balance:");
	scanf("%f", &customer.oldbalance);
	printf("         Current payment:");
	scanf("%f", &customer.payment);
	printf("         Payment date(mm/dd/yyyy):");
	scanf("%d/%d/%d", &customer.lastpayment.month, &customer.lastpayment.day, &customer.lastpayment.year);
	return;
}