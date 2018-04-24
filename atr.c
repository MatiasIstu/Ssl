#include <stdio.h>
#include <stdlib.h>

int main(int argC, char* argV[])
{
    if(!(argC%2)){
        printf("ERROR: Se ingreso un numero incorrecto de archivos");
    }else{
        for(int i=1;i<=(argC-1);i+=2){
            FILE* archivoTexto;
            FILE* archivoBinario;
            int caracterLeido;
            if(!(archivoTexto = fopen(argV[i],"r"))){
                printf("No se pudo abrir el archivo %s \n",argV[i]);
                break;
            }
            if(!(archivoBinario = fopen(argV[i+1],"wb"))){
                printf("No se pudo abrir el archivo %s \n",argV[i+1]);
                break;
            }
            while(caracterLeido != EOF){
                caracterLeido = fgetc(archivoTexto);
                fwrite(&caracterLeido,sizeof(int),1,archivoBinario);
            }
            fclose(archivoTexto);
            fclose(archivoBinario);
            caracterLeido = 0;
        }
    }
    return 0;
}
