//#include<conio.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct Persona{
 char nombre[25];
 int edad;
};                        
 
int main(){
 struct Persona per[25];
 int i=0;
 int j=0;
 FILE *pArchivo;
 
 pArchivo=fopen("datos.dat","wb");
 if(pArchivo!=NULL){
   do{
       fflush(stdin);
       printf("Introduzca el nombre de lapersona: ");
       gets(per[i].nombre);
       if(strlen(per[i].nombre)>0){
           printf("Introduzca la edad");
           scanf("%d",&(per[i].edad));
           fwrite(&per[i],sizeof(Persona),1,pArchivo);
           i++;
       }
    }while(strlen(per[i].nombre)>0 && i<=24);
    fclose(pArchivo);
 }
 else{
   printf("Error en la apertura del archivo");
 }
 
   
int er_dev = 0;
pArchivo =fopen(“datos.dat", “rb") ;
if (pArchivo=NULL){
 printf ( “Error en apertura del fichero para lectura \n “ );
 er_ dev = 1
}
else
{ fread (&per[i], sizeof(Persona), 1, pArchivo);
while (! feof(fich){
            i++;
            printf("nombre : %s \n", per[i].nombre);
            printf("Edad %d \n", per[i].edad);
             fread (&per[i],sizeof(Persona), 1, pArchivo);
}
fclose (pArchivo);
}
}