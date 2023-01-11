#include <stdio.h>
int main(void)
{
	int j = 9;
	char c = 'A',s[] = "test string";
	printf(">>문자 출력<<\n");
	printf("%%c: |%c|, %%7c: |%7c|, %%-7c: |%-7c|\n",c,c,c);
	printf("%%s: |%s|, %%7s: |%7s|, %%-12s: |%-12s|\n",s,s,s);
	printf("%%.7s: |%.7s|, %%10.7s: |%10.7s|\n",s,s);
	printf("C is %n\n",&j);
	printf("%*ca good programming language\n",j,' ');

	int i = 1024;
	long l = 12345678;
	long long ll = 12345678901234LL;
	printf("\n>>정수 출력<<\n");
	printf("%%d: |%d|, %%o: |%o|, %%x: |%x|, %%u: |%u|\n",i,i,i,i);
	printf("%%07d: |%07d|, %%0.7d: |%0.7d|, %%+d: |%+d|\n",i,i,i);
	printf("%%X: |%X|, %%#x: |%#x|, %%#X: |%#X|\n",i,i,i);
	printf("%%ld: |%ld|, %%lo: |%lo|, %%lx: |%lx|\n",l,l,l);
	printf("%%lld: |%lld|, %%llo: |%llo|, %%llx: |%llx|\n",ll,ll,ll);

	int k = 2;
	float f = 123.45678, f0 = 987.0;
	double d = -123.45678, d0 = 0.00000009;
	printf("\n>>실수 출력<<\n");
	printf("%%f: |%f|, %%e: |%e|, %%g: |%g|\n",f,f,f);
	printf("%%.3f: |%.3f|, %%.3e: |%.3e|, %%.2g: |%.2g|\n",f,f,f);
	printf("%%10.3f: |%10.3f|, %%10.3e: |%10.3e|, %%10.2g: |%10.2g|\n",f,f,f);
	j = k = 3;
	printf("%%*.*f: |%*.*f|\n",j,k,f);
	printf("%%f: |%f|, %%e: |%e|, %%g: |%g|\n",f0,f0,f0);
	printf("%%#f: |%#f|, %%#e: |%#e|, %%#g: |%#g|\n",f0,f0,f0);
	printf("%%f: |%f|, %%e: |%e|, %%g: |%g|\n",d,d,d);
	printf("%%*f: |%*f|, %%.*f: |%.*f|, %%*.*f: |%*.*f|\n",j,d,k,d,j,k,d);
	printf("%%f: |%f|, %%e: |%e|, %%g: |%g|\n",d0,d0,d0);

	return 0;
}
