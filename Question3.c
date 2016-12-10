//
//  Question3.c
//  tutorial4_solutions
//
//  Created by Mohamed Diaby on 09/12/2016.
//  Edited by Einstein winluck on 10/12/2016
//  Copyright © 2016 Mohamed Diaby. All rights reserved.
//

#include <stdio.h>

    int main(){
        
    int firstNo;
    int secondNo;
    //int smallerNo;
    
    printf("--THIS SMALL PROGRAM COMPARE TWO different NUMBERS TO SEE WHICH IS SMALLER--\n");
    printf("Please enter first number: \n");
    scanf("%d",&firstNo);
    
    printf("Please enter second number: \n");
    scanf("%d",&secondNo);

    //smallerNo = (firstNo <= secondNo)? firstNo:secondNo;
    (firstNo < secondNo) ? printf("%d is smallest number", firstNo) : printf("%d is smallest number", secondNo);
    
    //printf(" %d is the smallest number",smallerNo);
        
    return (0);

}
