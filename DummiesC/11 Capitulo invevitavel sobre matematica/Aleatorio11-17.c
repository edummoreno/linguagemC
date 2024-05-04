#include <stdio.h>
#include <stdlib.h>

//modificação para mostrar apenas numeros do alfabeto
int main(){
	int r,a,b;
	
	puts("100 random numbers");
	
	for(a=0;a<20;a++){
		for(b=0;b<5;b++){
			//resto de 26 ou seja menor que 26
			//'a' + pois começa com o valor da tabela ascii 
			r = 'a' + rand() % 26;
			printf("%c\t",r);			
		}

		putchar('\n');
		
	}

	
	return(0);
}



