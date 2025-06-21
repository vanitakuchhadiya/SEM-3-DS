// WAP to allocate and de-allocate memory for int, char and float variable at runtime.

#include <stdio.h>
#include <stdlib.h>
void main(){
    int *iptr =(int *) malloc (sizeof(int));
    char *cptr =(char *) malloc (sizeof(char));
    float *fptr =(float *) malloc (sizeof(float));

    if(iptr && cptr && fptr)
    {
        *iptr=10;
        *cptr='V';
        *fptr= 3.14;
        printf("%d\n",*iptr);
        printf("%c\n",*cptr);
        printf("%0.2f\n",*fptr);
    }
    else{
        printf("Memory not allocated");
    }
}