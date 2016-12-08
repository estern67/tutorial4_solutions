//
//  main.c
//  tutorial4_solutions
//
//  Created by Mohamed Diaby on 08/12/2016.
//  Copyright © 2016 Mohamed Diaby. All rights reserved.
//

#include <stdio.h>

int main() {
    
    
       char marriage_status;
    
    puts("please enter a character: \n" );
    

    
    marriage_status = getchar();
    
    
    
    switch(marriage_status)
    
    {
            
            
        case 'S':
            
            printf("single ");
            break;
            
        case 'M':
            
            printf("married ");
            break;
            
        case 'W':
            printf("widowed ");
            break;
        case 'E':
            printf("separated ");
            break;
            
        case 'D':
            printf("Divorced ");
            
            
        default:
            printf("error: invalid code ");
            
            
            
    }
    

    
    
    
    
    return 0;
}
