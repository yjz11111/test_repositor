#include<process_copy.h>

int check_pram(int argc,const char* src,int pronum)
{
	if(argc<3){
		printf("argc error\n");
		return 0;
	} if(access(src,F_OK)!=0){
		printf("not find\n");
		return 0;
	} if(pronum<=0||pronum>10){
		printf("pronum error\n");
		return 0;
	}
	return 1;
}
