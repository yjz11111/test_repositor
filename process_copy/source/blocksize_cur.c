#include<process_copy.h>

int blocksize_cur(const char* src,int pronum)
{

	if(src==NULL)return 0;
	int blocksize=0;
	int fd=open(src,O_RDWR);
	int filesize=lseek(fd,0,SEEK_END);
	if((filesize%pronum)==0){
		blocksize=filesize/pronum;
	}else{
		blocksize=filesize/pronum+1;
	}
	close(fd);
	return blocksize;
}


