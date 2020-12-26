#include <stdio.h>

int main() {
	
    int a,b;
    int i;
    int ger_say = 0;
	printf("Sinirlari girin: ");
	
	scanf("%d %d",&a,&b);
	
    printf("\n");
	
	for (i=a; i<=b; i++)
	{
		
        if (2<=i) 
		{
        	
			int asal_sayac = 0;
	        int x;
			
			for(x=2; x < (i); x++)
			{
	
	            if(i % x == 0)
	                asal_sayac += 1;
	
	        }
	        if (asal_sayac == 0) 
			{
	            int gerasal_sayac = 0;
				int y;
				
				for(y=2; y < (2*i + 1); y++){
	
	                if ((2*i + 1) % y == 0)
	                    gerasal_sayac += 1;
				}
	            
				if (gerasal_sayac == 0)		{
	                printf("%d - ",i);
	                ger_say += 1;
					}
	
				}
				
	    	}
	    	
	    }
	    if (ger_say == 0){
	    printf("Bu aralikta Germain asali bulunmamaktadir.");
	    }
	    else {
	    printf("\nVerdiginiz aralikta %d tane Germain asali bulunmustur.",ger_say);
	    }
	    return 0;
    }
    

