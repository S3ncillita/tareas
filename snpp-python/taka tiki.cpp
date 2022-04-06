#include <stdio.h> 
#include <iostream>
#include <conio2.h>
 #include <ctype.h> 
 
 using namespace std; void Imprimir();  main() 
{ 
 	char mat[3][3],jp,pj; 
   int i,j,fil,col,num;    for(i=0;i<=2;i++) 
   { 
    	for(j=0;j<=2;j++) 
      { 
       	mat[i][j]=' '; 
      } 
   } 
   gotoxy(2,2);cout<<"1  |  2  |  3";    gotoxy(2,3);cout<<"--------------";    gotoxy(2,4);cout<<"4  |  5  |  6";    gotoxy(2,5);cout<<"--------------";    gotoxy(2,6);cout<<"7  |  8  |  9"; 
   gotoxy(20,2);cout<<"Elija la ficha para iniciar el juego X - O-->";    jp=getch();    pj=toupper(jp);    if(pj=='X' || pj=='O') 
   { 
     	gotoxy(20,4);cout<<"Ingrese del 1 al 9 o 0 para salir: ";       cin>>num;       clrscr();       Imprimir(); 
      while(num!=0) 
      { 
       	if(num==1 || num==2 || num==3) 
         {fil=0;} 
         if(num==4 || num== 5 ||num==6) 
         {fil=1;} 
         if(num==7 || num==8 || num==9) 
         {fil=2;} 
 
         if(num==1 || num==4 || num==7) 
         {col=0;} 
         if(num==2 || num==5 || num==8) 
         {col=1;} 
         if(num==3 || num==6 || num==9) 
         {col=2;} 
         if(mat[fil][col]!=' ') 
         { 
          gotoxy(1,9);cout<<"Ya existe la jugada, ingresa otro numero";             if(pj=='X' || pj=='x'){pj='O';}else{pj='X';} 
         }          else          {           mat[fil][col]=pj; gotoxy(1,9);cout<<"                                "; 
         } 
         gotoxy(20,14);cout<<" "<<mat[0][0]<<"  |  " <<mat[0][1]<<"  |  "<<mat[0][2];          gotoxy(20,15);cout<<"---------------"; 
         gotoxy(20,16);cout<<" "<<mat[1][0]<<"  |  " <<mat[1][1]<<"  |  "<<mat[1][2];          gotoxy(20,17);cout<<"---------------";          gotoxy(20,18);cout<<" "<<mat[2][0]<<"  |  "<<mat[2][1] <<"  |  "<<mat[2][2];          if((mat[0][0]==pj && mat[0][1]==pj && mat[0][2]==pj) || (mat[1][0]==pj && mat[1][1]==pj && mat[1][2]==pj) || (mat[2][0]==pj && mat[2][1]==pj && mat[2][2]==pj) || (mat[0][0]==pj && mat[1][0]==pj && mat[2][0]==pj) || (mat[0][1]==pj && mat[1][1]==pj && mat[2][1]==pj) || (mat[0][2]==pj && mat[1][2]==pj && mat[2][2]==pj) || (mat[0][0]==pj && mat[1][1]==pj && mat[2][2]==pj) || (mat[2][0]==pj && mat[1][1]==pj && mat[0][2]==pj)) 
         { 
          gotoxy(15,22);cout<<".....GANA LA FICHA.... "<<jp;             num=0; 
         }          else 
         { 
         gotoxy(20,6);cout<<fil<<" --"<<col<<"-- "<<mat[fil][col];          gotoxy(20,2);cout<<"Ingrese del 1-9 o 0 para salir: ";cin>>num;          if(pj=='X' || pj=='x') {pj='O';}else{pj='X';} 
         } 
      }    }    else 
   { 
    	gotoxy(10,21);cout<<"Elija bien la ficha y vuelva a ingresar al programa"; 
   }    getch(); } 
void Imprimir() 
{ 
 	gotoxy(2,2);cout<<"1  |  2  |  3";    gotoxy(2,3);cout<<"--------------";    gotoxy(2,4);cout<<"4  |  5  |  6";    gotoxy(2,5);cout<<"--------------";    gotoxy(2,6);cout<<"7  |  8  |  9"; 
   gotoxy(5,10);cout<<"Este programa fue hecho por Zulma Argüello";    gotoxy(44,15);cout<<"Guiese por el cuadro de la izquierda"; } 

