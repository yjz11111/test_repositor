#include<process_copy.h>

int process_create(const char* src,const char* dest,int pronum,int blocksize)
{
	int i;
	for(i=0;i<pronum;i++)
	{
		pid_t pid;
		pid=fork();
		int pos=i*blocksize;
		char str_pos[100];
		bzero(str_pos,sizeof(str_pos));
		char str_blsize[100];
		bzero(str_blsize,sizeof(str_blsize));
		sprintf(str_pos,"%d",pos);
		sprintf(str_blsize,"%d",blocksize);
		if(pid>0){
			process_wait();
		}else if(pid==0){
			execl("/home/colin/4linux/20230912/PROCESS/process_copy/Mod/copy","copy",src,dest,str_pos,str_blsize,NULL);	
		}else {
			perror("fork fail");
			return 0;
		}
	}
	return 1;
	
}
