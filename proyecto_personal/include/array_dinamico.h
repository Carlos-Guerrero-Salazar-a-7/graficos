#ifndef ARRAY_DINAMICO
#define ARRAY_DINAMICO
float* agregar_dato(float* array, float a,int tamano){
    int nuevo_tamano=+1;
    float* nuevo_array=nullptr;
    nuevo_array=new float[nuevo_tamano];
    nuevo_array=array;
    nuevo_array[nuevo_tamano-1]=a;
    return nuevo_array;
}
#endif