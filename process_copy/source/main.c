#include<process_copy.h>

int main(int argc,char** argv)
{
	int pronum;
	int blocksize;
	if(argv[3]==0)
	{
		pronum=5;
	}
	else
	{
		pronum=atoi(argv[3]);
	}
	int a=check_pram(argc,argv[1],pronum);
	if(a==0){printf("check error\n");return 1;}
	blocksize=blocksize_cur(argv[1],pronum);
	if(blocksize==0){printf("blocksize error\n");return 1;}
	a=process_create(argv[1],argv[2],pronum,blocksize);
	if(a==0){printf("process_creat error\n");return 1;}
	return 0;
}
