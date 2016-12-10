//
//  main.c
//  tutorial4_solutions
//
//  Created by Mohamed Diaby on 08/12/2016.
//  Edited by Einstein winluck on 10/12/2016
//  Copyright © 2016 Mohamed Diaby. All rights reserved.
//

#include <stdio.h>

int main() {

       char marriage_status;
    
        puts("Please enter a character: \n" );
        marriage_status = getchar();

        switch(marriage_status){
     
        case 'S':
        case 's':
            printf("Single");
            break;
        case 'M':
        case 'm':
            printf("Married");
            break;            
        case 'W':
        case 'w':
            printf("Widowed");
            break;
        case 'E':
        case 'e':
            printf("Separated");
            break;            
        case 'D':
        case 'd':
            printf("Divorced");
        default:
            printf("Error: Invalid character!!");       
        }
      
 return (0);
}
