#include<stdio.h>
#include "letter.h"

void main(){
	char name[30];
	int increment = 0;
	printf("Enter your name:"); 
	gets(name); 

	while(name[increment]){
		switch(name[increment]){
			case 'a': a();printf("\n\n"); break;
			case 'b': b();printf("\n\n");  break;
			case 'c': c();printf("\n\n");  break;
			case 'd': d();printf("\n\n");  break;
			case 'e': e();printf("\n\n");  break;
			case 'f': f();printf("\n\n");  break;
			case 'g': g();printf("\n\n");  break;
			case 'h': h();printf("\n\n");  break;
			case 'i': i();printf("\n\n");  break;
			case 'j': j();printf("\n\n");  break;
			case 'k': k();printf("\n\n");  break;
			case 'l': l(); printf("\n\n"); break;
			case 'm': m();printf("\n\n");  break;
			case 'n': n();printf("\n\n");  break;
			case 'o': o(); printf("\n\n"); break;
			case 'p': p();printf("\n\n");  break;
			case 'q': q();printf("\n\n");  break;
			case 'r': r();printf("\n\n");  break;
			case 's': s();printf("\n\n");  break;
			case 't': t();printf("\n\n");  break;
			case 'u': u();printf("\n\n");  break;
			case 'v': v();printf("\n\n");  break;
			case 'w': w();printf("\n\n");  break;
			case 'x': x(); printf("\n\n"); break;
			case 'y': y();printf("\n\n");  break;
			case 'z': z();printf("\n\n");  break;
		}
		increment++;
	}
}