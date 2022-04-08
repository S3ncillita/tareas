#include <winbgim.h>
#include <math.h>

#define pi 3.1416/180

int main(){
    initwindow(850,400);
    const float conv = pi;
    float desplazamientoX,angulo,x,y;

    for(angulo = 0, desplazamientoX =0;angulo <= 360*3; angulo++, desplazamientoX+=0.5)
    {
        x = 40 + desplazamientoX; //coordenada X del circulo
        y = 300; // coordenada Y del circulo
        
        setcolor(6);

        circle(int(x),int(y),30); //hacemos que el circulo se mueva
        line(int(x),int(y),int(x)+int(30*cos(angulo*conv)),int(y)+int(30*sin(angulo*conv)));

        /*linea que va del centro del circulo (40+int(velocidad,300)) a un punto
        en la circunferencia con el desplazamiento;
        correspondiente que tendra el centro del circulo y las componentes polares
        correspondientes a cada coordenada(x,y)
        haciendo variar el angulo qpara que de el efecto deseado*/

        delay(1);

        setcolor(0);
        circle(int(x),int(y),30);
        line(int(x),int(y),int(x)+int(30*cos(angulo*conv)),int(y)+int(30*sin(angulo*conv)));

        /*A continuacion haremos que se dibuje la trayectoria del punto sobre el circulo
        en movimiento, pero por encima del circulo ya tendremos problemas pues el circulo
        borraria la trayectoria*/

        putpixel(int(40+desplazamientoX)+int(30*cos(angulo*conv)),200+int(30*sin(angulo*conv)),7);
    }
    
    setcolor(6); //dibujamos el circulo y la linea en su posicion final
    circle(int(x),int(y),30);
    line(int(x),int(y),int(x)+int(30*cos(angulo*conv)),int(30*sin(angulo*conv)));

    while(!kbhit());
    return 0;
}