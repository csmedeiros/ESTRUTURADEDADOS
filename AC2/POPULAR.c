#include <stdio.h>

int main() {
	
	int n;
	
	scanf("%d", &n);
	while(n!=0) {
		int votos[100][100];
		int a, b, c, d;
		int contador = n;
		int maior = 0;
		for(c=0;c<n;c++) {
			for(d=0;d<n;d++) {
				scanf("%d", &votos[c][d]);
			}
		}
		
		for(a=0;a<n;a++) {
			int soma = 0;
			contador-=1;
			for(b=0;b<n;b++) {
				soma+=votos[b][a];	
				if(soma>maior) {
					maior=soma;
			}
		}
		
	}
		printf("%d\n", maior);
		scanf("%d", &n);
	}
	return 0;
}
