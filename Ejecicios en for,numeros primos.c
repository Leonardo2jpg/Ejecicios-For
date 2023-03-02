#include <stdio.h>

main(){
	
	int i,x,cont;
	x=50;
	cont=0;
	
	for(i = 2 ; i <=50 ;i++){
		
		for(x = 2 ; x <= i;x++)
	
		if(i % x == 0)
		cont++;
		
		if(cont == 1)
		printf("%d-",i);
		cont = 0 ; 
		} 
		system ("pause");
		return 0;
}
