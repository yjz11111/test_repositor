#include<process_copy.h>

void process_wait()
{
  	pid_t zpid;
	if((zpid=wait(NULL))>0)
	{
		printf("wait %d success\n",zpid);
		
	}
}
