#include <cstdlib>
#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>


#define ABAJO 80
#define IZQUIERDA 75
#define DERECHA 77
#define ARRIBA 72


void gotoxy(int x,int y){
    HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
    SetConsoleCursorPosition(hcon,dwPos);
}

void ocultarCursor(){
    HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize=50;
	cci.bVisible = TRUE;

	SetConsoleCursorInfo(hcon,&cci);

}
//Declaramos los limites donde se movera la pieza
void PintarLimites(){
 for(int i=0;i<19;i++){
	   gotoxy(i,0);printf("%c",205);
	   gotoxy(i,23);printf("%c",205);
	   
}

 for(int i=1;i<23;i++){
		gotoxy(0,i);printf("%c",186);
		gotoxy(18,i);printf("%c",186);
		
}
//Incertamos el nivel,la siguiente pieza y la puntuacion
 for(int i=19;i<44;i++){
	   gotoxy(i,9);printf("%c",205);
	   gotoxy(i,23);printf("%c",205);

}
 for(int i=10;i<23;i++){

		gotoxy(44,i);printf("%c",186);
		gotoxy(20,14);printf("Nivel 1");
		gotoxy(20,15);printf("Puntuacion:0");
		gotoxy(20,17);printf("La siguente pieza es:");
		gotoxy(20,18);
	 printf("%c%c",254,254);
	 gotoxy(20,19);
	 printf("%c%c",254,254);
		

}
}
//Declaramos la clase caudro para la pieza cuadrada
class Pieza1{

   int x,y;
   
   public:
	  Pieza1(int _x,int _y):x(_x),y(_y){}

	  void pintar();
      void borrar();
	  void mover();

	  
};

//creamos la pieza cuadrada
void Pieza1::pintar(){
	 gotoxy(x,y);
	 printf("%c%c",254,254);
	 gotoxy(x,y+1);
	 printf("%c%c",254,254);
	 
	}


 void Pieza1::borrar(){
		gotoxy(x,y);
		printf("      ");
		gotoxy(x,y+1);
		printf("      ");
		
	}
//Permite que la pieza baje por si misma y declaramos el movimiento con las flechas
 void Pieza1::mover(){

		   gotoxy(x,y);
		   for(y=1;y<21;y++){

           pintar();
		   Sleep(500);
		   borrar();

		 if(kbhit()){

		 char tecla = getch();

			if(tecla==IZQUIERDA && x>1 )x--;
			if(tecla==DERECHA && x+2<14 )x++;
            if(tecla==ABAJO && y+2<30)y++;
            gotoxy(x,y);
            pintar();
            borrar();
            
}
}
pintar();
}
//Declaramos la calse letra l para la pieza l
class Pieza2{

   int x,y;

   public:
	  Pieza2(int _x,int _y):x(_x),y(_y){}
	  void pintar();
      void borrar();
	  void mover();


};

//Iniciamos la pieza
void Pieza2::pintar(){
	 gotoxy(x,y);
	 printf("%c",254);
	 gotoxy(x,y+1);
	 printf("%c",254);
	 gotoxy(x,y+2);
	 printf("%c%c",254,254);
	 

	}


 void Pieza2::borrar(){
		gotoxy(x,y);
		 gotoxy(x,y);
	 printf(" ");
	 gotoxy(x,y+1);
	 printf(" ");
	 gotoxy(x,y+2);
	 printf("   ");

	}
//Movemos la pieza con el teclado
 void Pieza2::mover(){

		   gotoxy(x,y);
		   for(y=1;y<20;y++){

           pintar();
		   Sleep(500);
		   borrar();

		 if(kbhit()){

		 char tecla = getch();

			if(tecla==IZQUIERDA && x>1 )x--;
			if(tecla==DERECHA && x+2<14 )x++;
            if(tecla==ABAJO && y+2<30)y++;
            gotoxy(x,y);
            pintar();
            borrar();

}
}
pintar();
}

class Pieza3{

   int x,y;

   public:
	  Pieza3(int _x,int _y):x(_x),y(_y){}
	  void pintar();
      void borrar();
	  void mover();


};

//Iniciamos la pieza I
void Pieza3::pintar(){
	 gotoxy(x,y);
	 printf("%c",254);
	 gotoxy(x,y+1);
	 printf("%c",254);
	 gotoxy(x,y+2);
	 printf("%c",254);
	 gotoxy(x,y+3);
	 printf("%c",254);
	 
	 

	}


 void Pieza3::borrar(){
		gotoxy(x,y);
		 gotoxy(x,y);
	 printf(" ");
	 gotoxy(x,y+1);
	 printf(" ");
	 gotoxy(x,y+2);
	 printf(" ");
	 gotoxy(x,y+3);
	 printf(" ");

	}
//Movemos la pieza con el teclado
 void Pieza3::mover(){

		   gotoxy(x,y);
		   for(y=1;y<19;y++){

           pintar();
		   Sleep(500);
		   borrar();

		 if(kbhit()){

		 char tecla = getch();

			if(tecla==IZQUIERDA && x>1 )x--;
			if(tecla==DERECHA && x+2<14 )x++;
            if(tecla==ABAJO && y+2<30)y++;
            gotoxy(x,y);
            pintar();
            borrar();

}
}
pintar();
}

class Pieza4{

   int x,y;

   public:
	  Pieza4(int _x,int _y):x(_x),y(_y){}
	  void pintar();
      void borrar();
	  void mover();


};

//Iniciamos la pieza Z
void Pieza4::pintar(){
	 gotoxy(x,y);
	 printf("%c",254);
	 gotoxy(x+1,y);
	 printf("%c",254);
	 gotoxy(x+1,y+1);
	 printf("%c",254);
	 gotoxy(x+2,y+1);
	 printf("%c",254);



	}


 void Pieza4::borrar(){
		gotoxy(x,y);
		 gotoxy(x,y);
	 printf(" ");
	 gotoxy(x+1,y);
	 printf(" ");
	 gotoxy(x+1,y+2);
	 printf(" ");
	 gotoxy(x+2,y+1);
	 printf(" ");

	}
//Movemos la pieza con el teclado
 void Pieza4::mover(){

		   gotoxy(x,y);
		   for(y=1;y<21;y++){

           pintar();
		   Sleep(500);
		   borrar();

		 if(kbhit()){

		 char tecla = getch();

			if(tecla==IZQUIERDA && x>1 )x--;
			if(tecla==DERECHA && x+2<14 )x++;
            if(tecla==ABAJO && y+2<30)y++;
            gotoxy(x,y);
            pintar();
            borrar();

}
}
pintar();
}

class Pieza5{

   int x,y;

   public:
	  Pieza5(int _x,int _y):x(_x),y(_y){}
	  void pintar();
      void borrar();
	  void mover();


};

//Iniciamos la pieza
void Pieza5::pintar(){
	 gotoxy(x+1,y);
	 printf("%c",254);
	 gotoxy(x,y+1);
	 printf("%c",254);
	 gotoxy(x+1,y+1);
	 printf("%c",254);
     gotoxy(x+2,y+1);
	 printf("%c",254);



	}


 void Pieza5::borrar(){
	 gotoxy(x,y);
	 gotoxy(x+1,y);
	 printf(" ");
	 gotoxy(x,y+1);
	 printf(" ");
	 gotoxy(x+1,y+1);
	 printf("   ");
	 gotoxy(x+2,y+1);
	 printf("   ");
	}
//Movemos la pieza con el teclado
 void Pieza5::mover(){

		   gotoxy(x,y);
		   for(y=1;y<20;y++){

           pintar();
		   Sleep(500);
		   borrar();

		 if(kbhit()){

		 char tecla = getch();

			if(tecla==IZQUIERDA && x>1 )x--;
			if(tecla==DERECHA && x+2<14 )x++;
            if(tecla==ABAJO && y+2<30)y++;
            gotoxy(x,y);
            pintar();
            borrar();

}
}
pintar();
}

class Pieza6{

   int x,y;

   public:
	  Pieza6(int _x,int _y):x(_x),y(_y){}
	  void pintar();
      void borrar();
	  void mover();


};

//Iniciamos la pieza
void Pieza6::pintar(){
	 gotoxy(x,y);
	 printf("%c",254);
	 gotoxy(x,y+1);
	 printf("%c",254);
	 gotoxy(x-1,y+2);
	 printf("%c%c",254,254);


	}


 void Pieza6::borrar(){
		gotoxy(x,y);
		 gotoxy(x,y);
	 printf(" ");
	 gotoxy(x,y+1);
	 printf(" ");
	 gotoxy(x-1,y+2);
	 printf("   ");

	}
//Movemos la pieza con el teclado
 void Pieza6::mover(){

		   gotoxy(x,y);
		   for(y=1;y<20;y++){

           pintar();
		   Sleep(500);
		   borrar();

		 if(kbhit()){

		 char tecla = getch();

			if(tecla==IZQUIERDA && x>1 )x--;
			if(tecla==DERECHA && x+2<14 )x++;
            if(tecla==ABAJO && y+2<30)y++;
            gotoxy(x,y);
            pintar();
            borrar();

}
}
pintar();
}

class Pieza7{

   int x,y;

   public:
	  Pieza7(int _x,int _y):x(_x),y(_y){}
	  void pintar();
      void borrar();
	  void mover();


};

//Iniciamos la pieza Z
void Pieza7::pintar(){
	 gotoxy(x+2,y);
	 printf("%c",254);
	 gotoxy(x+3,y);
	 printf("%c",254);
	 gotoxy(x+1,y+1);
	 printf("%c",254);
	 gotoxy(x+2,y+1);
	 printf("%c",254);



	}


 void Pieza7::borrar(){
	 gotoxy(x,y);
	 gotoxy(x+2,y);
	 printf(" ");
	 gotoxy(x+3,y);
	 printf(" ");
	 gotoxy(x+1,y+1);
	 printf(" ");
	 gotoxy(x+2,y+1);
	 printf(" ");

	}
//Movemos la pieza con el teclado
 void Pieza7::mover(){

		   gotoxy(x,y);
		   for(y=1;y<21;y++){

           pintar();
		   Sleep(500);
		   borrar();

		 if(kbhit()){

		 char tecla = getch();

			if(tecla==IZQUIERDA && x>1 )x--;
			if(tecla==DERECHA && x+2<14 )x++;
            if(tecla==ABAJO && y+2<30)y++;
            gotoxy(x,y);
            pintar();
            borrar();

}
}
pintar();
}
int main(int argc, char *argv[])
{

    system("color C6");
	ocultarCursor();
	PintarLimites();
	Pieza1 C(1,1);
	C.pintar();
	C.borrar();

    ocultarCursor();
	PintarLimites();
	Pieza2 L(1,1);
	L.pintar();
	L.borrar();
	
	ocultarCursor();
	PintarLimites();
	Pieza3 I(1,1);
	I.pintar();
	I.borrar();
	
	ocultarCursor();
	PintarLimites();
	Pieza4 Z(1,1);
	Z.pintar();
	Z.borrar();
	
	ocultarCursor();
	PintarLimites();
	Pieza5 T(1,1);
	T.pintar();
	T.borrar();
	
	ocultarCursor();
	PintarLimites();
	Pieza6 J(2,1);
	J.pintar();
	J.borrar();
	
	ocultarCursor();
	PintarLimites();
	Pieza7 M(2,1);
	M.pintar();
	M.borrar();



    
	 
	 bool game_over = false;
	 while(!game_over){

		   C.mover();
		   Sleep(500);
		   L.mover();
           Sleep(500);
           I.mover();
           Sleep(500);
           Z.mover();
           Sleep(500);
           T.mover();
           Sleep(500);
           J.mover();
           Sleep(500);
           M.mover();
           Sleep(500);

		}

	system("pause");

	return 0;

}
