#include <stdio.h>

void outputheader()
{
	printf("       %3s              %7s             %7s\n", "DAY", "DEPOSIT", "BALANCE");
	printf("       %3s              %7s             %7s\n", "---", "-------", "-------");
}

int generatetable(double final_balance)
{
	int day;
	double deposit, balance;

	day = 0;
	deposit = 0.00;
	balance = 0.00;

	while (balance < 100000.00)
	{
		day++;

		if (day == 1)
			deposit = 0.01;
		else
			deposit = deposit + deposit;

		balance = deposit + balance;

		printf("       %3d         %12.2lf         %11.2lf\n", day, deposit, balance);
	}
	return day;
}

int main(void)
{

	int day;
	double final_balance;

	printf("Please enter the amount of money you want to accumulate: ");
	scanf_s("%lf", &final_balance);

	day = generatetable(final_balance);

	outputheader();
	generatetable(final_balance);
	printf("It took %d days to hit at least $%.2lf.\n", day, final_balance);

	while (1) getchar();
	return 0;
}
