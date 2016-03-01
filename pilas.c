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
	struct punt el_p;
	el_p.x=1.4;
	el_p.y=2.6;
	el_p.z=5.1;
	push(&Mip,&el_p);

}

void push(struct pilapunto *pila,struct punto *p){
	pila->Puntos[pila->tope].x=p->x;
	pila->Puntos[pila->tope].y=p->y;
	pila->Puntos[pila->tope].z=p->z;
	pila-> tope++;


}
void pop(struct pilapunto *pila){




} 
