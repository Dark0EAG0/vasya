#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int CountOfInputs = 2,CountOfHiddenN = 2, inputMa[2];//И здесь тоже подправь
    printf("Give me an inmput: ");
    scanf("%1d %1d",inputMa[0],inputMa[1]);//Ужас подправь Input
    int ForIn[CountOfInputs][CountOfHiddenN], HesI[CountOfHiddenN],HesO[CountOfHiddenN];
    for (size_t i = 0; i < CountOfInputs; i++){
        for (size_t in = 0; in < CountOfHiddenN; in++){
            ForIn[i][in] = -1+2*((float)rand())/RAND_MAX;
        } 
    }
    for (size_t i = 0; i < CountOfHiddenN; i++)
    {
        HesI[i] = (inputMa[0]*ForIn[i][in]);
    }
}