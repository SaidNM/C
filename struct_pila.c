#include <stdlib.h>
#include <stdio.h>

struct dato{
 char a;
 char b;
 char c;
};

struct punto{
 double x;
 double y;
 double z;
};

struct pilapunto{
 struct punto Puntos[100];
int tope;
};




void main(){
	struct pilapunto Mip;
	Mip.tope=0;
	struct punto el_p;
	el_p.x=1.4;
	el_p.y=2.6;
	el_p.z=5.1;
	printf("Tope: %d ",Mip.tope);
	push(&Mip,&el_p);
	printf("tope: %d ",Mip.tope);
	struct punto *mipop;
	mipop=pop(&Mip);

	printf("Tope: %d ",Mip.tope);

}

void push(struct pilapunto *pila,struct punto *p){
	pila->Puntos[pila->tope].x=p->x;
	pila->Puntos[pila->tope].y=p->y;
	pila->Puntos[pila->tope].z=p->z;
	pila-> tope++;


}
struct punto *pop(struct pilapunto *pila){
	struct punto *puntoaux;
	puntoaux=&(pila->Puntos[pila->tope]);
	pila->tope=pila->tope-1;
	return puntoaux;



} 
