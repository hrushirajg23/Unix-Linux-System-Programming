#include<stdio.h>
#include<stdlib.h>
int main(){
     int iRet=0,f=0,m=0;
     char* str=(char*)malloc(sizeof(char)*10);
     iRet=scanf("%d %d %s",&f,&m,str);
     printf("%s",str);
     printf("%d\n",iRet);
     return 0;
}