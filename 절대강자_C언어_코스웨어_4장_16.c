#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int zero,one,two,three,four,five,six,seven,eight,nine;
zero=one=two=three=four=five=six=seven=eight=nine=0;
	for (int n=1;n<=100;n++)
	{
		switch (rand()%10)
		{
			case 0 :
				zero++;
				break;
			case 1 :
				one++;
				break;
			case 2 :
				two++;
				break;
			case 3 :
				three++;
				break;
			case 4 :
				four++;
				break;
			case 5 :
				five++;
				break;
			case 6 :
				six++;
				break;
			case 7 :
				seven++;
				break;
			case 8 :
				eight++;
				break;
			case 9 :
				nine++;
				break;
		}
	}
	printf("0 : %d개\n",zero);
	printf("1 : %d개\n",one);
	printf("2 : %d개\n",two);
	printf("3 : %d개\n",three);
	printf("4 : %d개\n",four);
	printf("5 : %d개\n",five);
	printf("6 : %d개\n",six);
	printf("7 : %d개\n",seven);
	printf("8 : %d개\n",eight);
	printf("9 : %d개\n",nine);
	return 0;
}
