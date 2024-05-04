#include <stdio.h>
#include <stdlib.h>

//modificação para mostrar apenas numeros do alfabeto
//mais modificações personalizadas
int main(){
	int r,a,b;
	
	srand((unsigned)time(NULL));
	for(a=0;a<30;a++){
		for(b=0;b<500;b++){
			//resto de 26 ou seja menor que 26
			//'a' + pois começa com o valor da tabela ascii 
			r = 'a' + rand() % 26;
			printf("%c",r);			
		}

		putchar('\n');
		
	}

	
	return(0);
}
