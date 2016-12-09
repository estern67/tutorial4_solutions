//
//  Question3.c
//  tutorial4_solutions
//
//  Created by Mohamed Diaby on 09/12/2016.
//  Copyright © 2016 Mohamed Diaby. All rights reserved.
//

#include <stdio.h>


int main()

{


    int a;
    
    int b;
    
    int c;
    
    
    printf("please enter first number: \n");
    scanf("%d",&a);
    
    printf("please enter second number: \n");
    scanf("%d",&b);
    
    
    

    c = (a <= b)? a:b;
    
    printf(" %d is the smallest number",c);



}
