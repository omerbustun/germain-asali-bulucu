#include <stdio.h>
#include <math.h>

int main() {
	
    int a,b;
    int i;
    
	printf("Sinirlari girin:\n");
	
	scanf("%d %d",&a,&b);
	
    printf("\n");
	
	for (i=a; i<=b; i++){
		
        if (!(i == 0 || i == 1)) {
        	
			int asal_sayac = 0;
	        int x;
			
			for(x=2; x < (i); x++){
	
	            if(i % x == 0)
	                asal_sayac += 1;
	
	        }
	        if (asal_sayac == 0) {
	        	
	            int gerasal_sayac = 0;
				int y;
				
				for(y=2; y < (2*i + 1); y++){
	
	                if ((2*i + 1) % y == 0)
	                    gerasal_sayac += 1;
				}
	            if (gerasal_sayac == 0){
				
	                printf("%d-",i);
	                
					}
	                
	            else {(printf("Belirtilen aralikta Germain asali bulunmamaktadir."));
					
					}		
				}
	    	}
	    	
	    }
	    
    }
    

