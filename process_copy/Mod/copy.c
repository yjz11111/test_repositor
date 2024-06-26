#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc,char** argv)
{
	if(access(argv[1],F_OK)!=0){
		perror("access fail");
		return 1;
	}
	int blocksize=atoi(argv[4]);
	char buffer[blocksize];
	memset(buffer,0,blocksize);
	int fd_src=open(argv[1],O_RDWR);
	
	int fd_dst=open(argv[2],O_RDWR|O_CREAT,0664);
	lseek(fd_src,atoi(argv[3]),SEEK_SET);
	int len =read(fd_src,buffer,sizeof(buffer));
	lseek(fd_dst,atoi(argv[3]),SEEK_SET);
	write(fd_dst,buffer,len);
	close(fd_src);
	close(fd_dst);
	return 0;
}
