#include <stdio.h>
#include <stdlib.h>

struct punto{
double x;
double y;
double z;
};


void main(){
struct punto Puntos[100];
struct punto *p;
printf("tamaño: %d ",sizeof(struct punto));
p=Puntos;
int i ;
for(i=0;i<2;i++){
printf("Dir: %d ",&Puntos[i]);



}
}
