#include <winbgim.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

main(){
    int color;
    const float pi = 3.1415;
    cout << "Presione una tecla numerica por favor: ";
    cin >> color;
    initwindow(255,255);
    for(int y=1;y<255;y++){
        for(int x=1;x<256;x++){
            putpixel(x,y,COLOR(x,y,0));
        }
    }
    system("pause");
    closegraph();
}



