#include <stdio.h>
int main(void)
{
	int anum=0,bnum=0,cnum=0,dnum=0,e_num=0,fnum=0,gnum=0,hnum=0,inum=0,jnum=0,knum=0,lnum=0,mnum=0,nnum=0,onum=0,pnum=0,qnum=0,rnum=0,snum=0,tnum=0,unum=0,vnum=0,wnum=0,xnum=0,ynum=0,znum=0,c, total_byte = 0, line_count = 0;
	while ((c = getchar()) != EOF)
	{
		total_byte++;
		if (c=='\n')
			++line_count;
		switch (c)
		{
			case ('A'):
			case ('a'):
				anum++;
				break;
			case ('B'):
			case ('b'):
				bnum++;
				break;
			case ('C'):
			case ('c'):
				cnum++;
				break;
			case ('D'):
			case ('d'):
				dnum++;
				break;
			case ('E'):
			case ('e'):
				e_num++;
				break;
			case ('F'):
			case ('f'):
				fnum++;
				break;
			case ('G'):
			case ('g'):
				gnum++;
				break;
			case ('H'):
			case ('h'):
				hnum++;
				break;
			case ('I'):
			case ('i'):
				inum++;
				break;
			case ('J'):
			case ('j'):
				jnum++;
				break;
			case ('K'):
			case ('k'):
				knum++;
				break;
			case ('L'):
			case ('l'):
				lnum++;
				break;
			case ('M'):
			case ('m'):
				mnum++;
				break;
			case ('N'):
			case ('n'):
				nnum++;
				break;
			case ('O'):
			case ('o'):
				onum++;
				break;
			case ('P'):
			case ('p'):
				pnum++;
				break;
			case ('Q'):
			case ('q'):
				qnum++;
				break;
			case ('R'):
			case ('r'):
				rnum++;
				break;
			case ('S'):
			case ('s'):
				snum++;
				break;
			case ('T'):
			case ('t'):
				tnum++;
				break;
			case ('U'):
			case ('u'):
				unum++;
				break;
			case ('V'):
			case ('v'):
				vnum++;
				break;
			case ('W'):
			case ('w'):
				wnum++;
				break;
			case ('X'):
			case ('x'):
				xnum++;
				break;
			case ('Y'):
			case ('y'):
				ynum++;
				break;
			case ('Z'):
			case ('z'):
				znum++;
				break;
		}
	}
	printf("파일 크기 : %d 바이트\n",total_byte);
	printf("파일 줄 수 : %d 행\n",line_count);
	printf("A: %d\t B: %d\t C: %d\t D: %d\t E: %d\t F: %d\n G: %d\t H: %d\t I: %d\t J: %d\t K: %d\t L: %d\n M: %d\t N: %d\t O: %d\t P: %d\t Q: %d\t R: %d\n S: %d\t T: %d\t U: %d\t V: %d\t W: %d\t X: %d\n Y: %d\t Z: %d\n",anum,bnum,cnum,dnum,e_num,fnum,gnum,hnum,inum,jnum,knum,lnum,mnum,nnum,onum,pnum,qnum,rnum,snum,tnum,unum,vnum,wnum,xnum,ynum,znum);
	return 0;
}
