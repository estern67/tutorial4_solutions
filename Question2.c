//
//  Question2.c
//  tutorial4_solutions
//
//  Created by Mohamed Diaby on 08/12/2016.
//  Copyright © 2016 Mohamed Diaby. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()

{

    int first_num;
    
    int second_num;
    
    int even_div_check;
    
    
    printf("please enter first number: \n");
    scanf("%d",&first_num);
    
    
    printf("please enter second number: \n");
    scanf("%d",&second_num);
    
    //checks if first number is evenly divisible by the second
    
    even_div_check = first_num % second_num;
    
    
    if(even_div_check == 0)
    {
    
        printf("The interger is evenly divisible");
    
    }
    
    else {
    
        printf("The integer is not evenly divisible ");
    
    }
    
    
    




    return 0;

}
