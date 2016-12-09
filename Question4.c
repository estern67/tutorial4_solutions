//
//  Question4.c
//  tutorial4_solutions
//
//  Created by Mohamed Diaby on 09/12/2016.
//  Copyright © 2016 Mohamed Diaby. All rights reserved.
//

#include <stdio.h>


    int main()

  {

      int time_hrs;
      
      int time_washington;
      
      int time_beijin;
      
      int time_moscow;
      
      int min;
      

      
      
      
      printf("Enter hours: \n");
      scanf("%d",&time_hrs);
      
      printf("Enter minutes: \n");
      scanf("%d", &min);
      
      // To check that the hrs and min entered is not greater or equal to 23 and 59 respectively
      
      if(time_hrs<=23 && min <= 59)
          
      {
      
          
          
          time_washington = time_hrs - 5;
          
          
          // incase time hrs are greater or equal to 24
          
          if(time_washington >=24){
          
         time_washington = time_washington - 24;
              
              
            }
          
          
       
          
          
          time_beijin = time_hrs + 7;
          
           // incase time hrs are greater or equal to 24
          
          if(time_beijin >= 24)

          {
          
              time_beijin = time_beijin - 24;
              
          }
          
          time_moscow = time_hrs + 3;
          
           // incase time hrs are greater or equal to 24
          
          if(time_moscow >= 24)
              
          {
              time_moscow = time_moscow - 24;
              
          }
          
          
          
          printf("The time in washington is %d:%d hrs for %d:%d \n",time_washington,min,time_hrs,min);
          
          printf("The time in Beijin is %d:%d hrs for %d:%d \n",time_beijin,min,time_hrs,min);
          
          printf("The time in Moscow is %d:%d hrs for %d:%d \n",time_moscow,min,time_hrs,min);
          


      }
      
      
      else{
      
          printf("error: Invalid time! ");
      
      }


      return 0;
      
      
   }
