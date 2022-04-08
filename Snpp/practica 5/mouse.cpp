#include <winbgim.h>
#include <stdlib.h>
#include <iostream>

main(){
	const float pi = 3.1415;
	initwindow(640,480);
	int a=0,x,y;
	while(a==0){
		x=mousex();
		delay(1);
		y=mousey();
		delay(1);
		lineto(x,y);
	}
	system("pause");
	closegraph();
}


