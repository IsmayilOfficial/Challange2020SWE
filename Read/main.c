#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TOT 10 /* change to accomodate other sizes, change ONCE here */

int main(void) {
    char arr[10][11];
    char sec[10][11];
    FILE *plist = NULL; 
    int i = 0;
    int total = 0;

    plist = fopen("file.txt", "r");
    while(fgets(arr[i], 12, plist)) {
    	if(strlen(arr[i])>11){
    		printf("word too long fix it \n");
    		break;
    
		}
		else{
					   /* get rid of ending \n from fgets */
     arr[i][strlen(arr[i]) - 1] = '\0';
        i++;
		}
     
    }

    total = i;

 for(i = 0; i < total; ++i){
    		if(strlen(arr[i])==10  ){
    			  
		  	strcpy(sec[0],arr[i]);
		 
		  		
			  }
	} 
	
	
 for(i = 0; i < 10; ++i){
 	    
 		if (strlen(arr[i])+strlen(arr[i+1])<=10){
		  	strcat(arr[i],arr[i+1]);
		  
		  	if(strlen(arr[i])==10){
		  	strcpy(sec[1],arr[i]);	

		  	 
			  }   
			  	if(strlen(arr[i])==8){
		  	    strcpy(sec[2],arr[i]);	
		  		strcat(sec[2],"++");	

		  	 
			  }   
			  	if(strlen(arr[i])==7){
		  	    strcpy(sec[2],arr[i]);	
		  		strcat(sec[2],"+++");	

		  	 
			  } 
			  
		  	 
			    	
      		
      		
		  }
    	
	}
    for(i = 0; i < 10; ++i){
    		if(strlen(sec[i])!=10  ){
		  			strcpy(sec[i],"++++++++++");
			  }
	}    
   

   for( i = 10 ; i-- > 0 ; ){

	 
	
	 		printf("%s\n", sec[i]);
			 }


    return 0;
}
