#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
	FILE *problem, *solution;
	int c,i,opd1,opd2;
	char word[50];

	if (argc != 3) {
		fprintf(stderr,"사용법 : %s problem_f solution_f\n",argv[0]);
		exit(1);
	}
	if ((problem = fopen(argv[1],"w")) == NULL) {
		fprintf(stderr,"오류 : %s 파일을 열 수 없습니다.\n",argv[1]);
		exit(1);
	}

	for (i = 0;i<50;i++)
		fprintf(problem, "%d + %d = \n", rand() % 1000, rand() % 1000);
	fclose(problem);
	if ((problem = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr,"오류 : %s 파일을 열 수 없습니다.\n",argv[1]);
		exit(1);
	}
	if ((problem = fopen(argv[2], "w")) == NULL) {
		fprintf(stderr,"오류 : %s 파일을 열 수 없습니다.\n",argv[2]);
		exit(1);
	}

	while (fscanf(problem, "%d + %d = \n", &opd1,&opd2) != EOF)
		fprintf(solution, "%d + %d = %d\n",opd1,opd2,opd1 + opd1 + opd2);

	fclose(problem);
	fclose(solution);

	return 0;
}
