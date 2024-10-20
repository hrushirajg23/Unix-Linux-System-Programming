#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char* argv[]){

    int fd=0,mode=0;
    if(argc!=3){
        fputs("insufficient arguments",stdout);
        return -1;
    }
    if(strcmp(argv[2],"read")==0){
        mode=O_RDONLY;
    }
    else if(strcmp(argv[2],"write")==0){
        mode=O_WRONLY;
    }
    else if(strcmp(argv[2],"execute")==0)mode=O_EXCL;
    else{
        fputs("insufficient arguments",stdout);
    }
    fd=open(argv[1],mode);
    if(fd==-1){
        perror("unable to open file ");
        return -1;
    }
    else{
        puts("File opened successfully\n");
    }

    char buff[21];
    int iRet=read(0,buff,20);
    /*
        This shows that until user enters somedata in empty file
        the terminal keeps waiting in BLOCKING mode.
    */
   buff[iRet]='\0';
    printf("%s\n",buff);
    return 0;
}


