#include <stdio.h>
#include <stdlib.h>

int main(int argC, char* argV[])
{
    if(!(argC%2)) 
    {
            printf("ERROR: Se ingreso un numero incorrecto de archivos")
    }
    else
    {
        printf("%s",argV[1]);
        for(int i=0;i<(argC-1)/2,i++){
            FILE* f;
            f = fopen(argV[i],"r");
            //Leer archivo
            fclose(f);
            i++;
            f = fopen(argV[i],"w");
            //Escribir archivo
            fclose(f);
        }
    }
    return 0;
}

