#include <stdio.h>
#include <conio2.h>
 #include <dos.h> 
#include <unistd.h>
   main() 
   { clrscr();
    int x,x2;
	 do 
	 { 
	 for (x=1; x<80; x++)
	  { 
	  if (kbhit())break;
	   gotoxy(x,15);
	    printf ("*");
		 x2=x-1;
		  gotoxy(x2,15);
		   usleep(6000); 
		   printf (" ");
		    }
			 for (;x>1;x--)
			  {
			   if (kbhit())break; 
			   gotoxy(x,15);
			    printf("*");
				 x2=x+1; 
				 gotoxy(x2,15); 
				 printf(" ");
				  usleep(6000); 
				  } 
				  } 
				  while 
				  (!kbhit());
				  
				   }