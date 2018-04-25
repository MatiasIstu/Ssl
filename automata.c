#include <stdio.h>
#include <stdlib.h>

int Columna (int c)
{
  if(c>='0' && c<='9')
        return 1;
  return 0;
}

int automataEnteros(char*cadenaDeCaracteres)
{
    int TablaTransicion[4][2] = {{2,1},
                                 {3,1},
                                 {3,1},
                                 {3,3}
                                 };
 int estado=0;
 int caracterLeido = 0 ;
 int i=0;

 while(cadenaDeCaracteres[i]!='\0' && estado!=3)
 {
   caracterLeido=cadenaDeCaracteres[i];
   estado = TablaTransicion[estado][Columna(caracterLeido)];
   i++;
 }
    if(estado == 1)
        return 1;
    return 0;
}

int main(int argC, char* argV[])
{
  for(int i=1;i<argC;i++){
    printf("%d",automataEnteros(argV[i]));
  }
}
