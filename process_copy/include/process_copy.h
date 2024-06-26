#pragma once

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int check_pram(int argc,const char * src,int pronum);

int blocksize_cur(const char * src,int pronum);

int process_create(const char* src,const char* dest,int pronum,int blocksize);

void process_wait(void);
