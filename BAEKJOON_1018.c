#include <stdio.h>
int main(void)
{
    int N,M,min = 10000,count,white,black;
    scanf("%d%d",&N,&M);
    getchar();
    char board[N][M+1];
    for (int i=0;i<N;i++)
    {   
        scanf("%[^\n]",board[i]);
        getchar();
    }   
    for (int i=0;i<N-7;i++) // 보드판을 아래로 내려가면서 읽음
        for (int o=0;o<M-7;o++) // 보드판을 오른쪽으로 이동하면서 읽음
        {
			black = 0;
			white = 0;
			for (int p=i;p<i+8;p++)
				for (int q=o;q<o+8;q++)
				{
					if ((p+q)%2 == 0)
					{
						if (board[p][q] == 'B')
							black++;
						else
							white++;
					}
					else
					{
						if (board[p][q] == 'B')
							white++;
						else
							black++;
					}
				}
			if (min > black)
				min = black;
			if (min > white)
				min = white;
        }
    printf("%d\n",min); // 절반 나눠서 출력
    return 0;
}
