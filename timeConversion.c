#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int h,m,s;
    char tM[4];
    scanf("%d:%d:%d%s",&h,&m,&s,tM);
       if((strcmp(tM,"PM")==0) && h!=12)
    {
     h+=12;   
    }
    if((strcmp(tM,"AM")==0) && h==12)
    {
     h=0;   
    }
    
    printf("%02d:%02d:%02d",h,m,s);
   
    return 0;

    
}
