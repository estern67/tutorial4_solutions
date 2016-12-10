//
//  Question4.c
//  tutorial4_solutions
//
//  Created by Mohamed Diaby on 09/12/2016.
//  Edited by Einstein winluck on 10/12/2016
//  Copyright © 2016 Mohamed Diaby. All rights reserved.
//

#include <stdio.h>

    int main(){
        
		printf("***\n This program accepts your LOCAL current time in 24hrs");
		printf("and display \n Washington, Moscow  and Beijing Local times\n ***\n");
		
		int hours;
		int minutes;
		int w, b, m; //washngton, beijing and moscow
		
		printf("What's your local time now (HOURS) ?: ");
		scanf("%d", &hours);
		
		printf("\n and how many minutes past scince %d ?: ", hours);
		scanf("%d", &minutes);
		
		//some validation but not necessary!!
		if(hours > 23 || hours < 0)
			printf("Enter valid hours values!!");
			
		w = hours - 5;
		b = hours + 7;
		m = hours + 3;
		
		//remove negative hours
		if (w < 0) 
			w = w * (-1);
			
		printf("**********************\n\t");
		printf("In Washngton it's %d:%2d \n\t", w, minutes);
		printf("In Beijing it's %d:%d \n\t", b, minutes);
		printf("In Moscow it's %d:%d \n", m, minutes);
    
	return (0);
}
