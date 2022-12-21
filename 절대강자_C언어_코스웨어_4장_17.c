#include <stdio.h>
int main(void)
{
	int num=0,num_num=0,spc_num=0,c, total_byte = 0, line_count = 0;
	while ((c = getchar()) != EOF)
	{
		total_byte++;
		if ((48<=c)&&(c<=57))
			num_num++;
		else if ((c!=' ') && (c!='\n'))
			num++;
		if (c==' ')
			spc_num++;
		if (c=='\n')
			++line_count;
	}
	printf("파일 크기 : %d 바이트\n",total_byte);
	printf("파일 줄 수 : %d 행\n",line_count);
	printf("알파벳 문자 수 : %d\n",num);
	printf("숫자 문자 수 : %d\n",num_num);
	printf("공백 문자 수 : %d\n",spc_num);
	return 0;
}
