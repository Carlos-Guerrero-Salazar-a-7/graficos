#ifndef LECTURA_GRAFIC_H
#define LECTURA_GRAFICO_H
#include <iostream>
float* leer_archivo(char* documento){
    FILE* vectores = fopen(documento,"r");
    char linea[300];//valor que lee cada linea
    int contador_puntos=0;//numero de registros en tamaño de las arrays
    //evita que se rompa el programa por falta de archivo
    if(vectores==NULL){
      std::cout<<"error no se encontro el csv"<<std::endl;
      return 0;
    }
    //por cada linea en el csv busca que siga el texto cuando no la ultima vez que pase por la condicion es el tamaño de los paralelos
    while(fgets(linea,sizeof(linea),vectores)){
      if(strlen(linea) > 1){
        contador_puntos++;
      }
    }
    if(contador_puntos%3==0){
        std::cout<<"error el sistema tiene menos vectores de los esperados";
        return 0;
    }
    rewind(vectores);




}
#endif