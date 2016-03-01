#include <stdio.h>
#include <stdlib.h>

struct dato{
char a;
char b;
char c;
};

void main(){
int i;
struct dato dat[100];

printf("Tamaño:%d ",sizeof(struct dato));
for(i=0;i<2;i++){
printf("Dir:%d ",&dat[i]);
}}
