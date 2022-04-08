#include<conio.h>
 #include<iostream>
 using namespace std; 
 main() { int n,i=1; 
cout<<"Digite un número "; 
cin>>n;
 while(i<=n) //while = Mientras 
 { if(n%i==0) //if =si 
 cout<<i<<endl;
  i++; }
   getch(); 
   return(0);
}