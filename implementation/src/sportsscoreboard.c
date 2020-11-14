#include<stdio.h>
#include<conio.h>
#include<string.h>

struct cricket
{
char nm[15];
char tnm[10];
int btavg;
};

void cri_pnt(struct cricket player[],int n)
{
	int i;
	char ch,team[10];
	printf("===========================================\n");
	printf("   PLAYER'S NAME	country		BATTING AVERAGE\n");
	printf("===========================================\n");
	for(i=0; i<=n; i++)
	printf(" %-20s %-20s%d\n",player[i].nm,player[i].tnm,player[i].btavg);
	read:
	printf("\n				%s					  \n",team);
	printf("===========================================\n");
	printf(" PLAYER'S NAME		BATTING AVERAGE\n");
	printf("===========================================\n");
	for (i=0; i<=n; i++)
		if (strcmp(team,player[i].tnm)==0)
			printf(" %-20s %d\n",player[i].nm,player[i].btavg);
	ch = getche();
	getch();
}
