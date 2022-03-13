#include<iostream>
#include<conio.h>
using namespace std;
class Matriz
#define N 3
{
	int a[5][5];
	int filas,column;
	public: Matriz(int x,int y)
	{
		filas=x;
		column=y;
	}
		void leer();
		void dpy();
		void transpuesta();
		bool diagonalDominante
	};
	
void Matriz::leer()
{
	cout<<"introduce los elementos de la matriz:\n";
	for(int i=0;i<filas;i++)
	{	
		
		for(int j=0;j<column;j++){
		
			cout<<"["<<i<<"]"<<"[ "<<j<<"] :" ; 
			cin>>a[i][j];
		}
		
	}
}
void Matriz::dpy()
{
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
void Matriz::transpuesta()
{	
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<column;j++)
		cout<<a[j][i]<<" ";
		cout<<"\n";
	}
}
bool diagonalDominante(Matriz[N][N])
{
	for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = 0; j < n; j++) {
         if (i != j) {
            sum += abs(matrix[i][j]);
         }
      }
      if (abs(matrix[i][i]) < sum) {
         return false;
      }
   }
   return true;	
}
main()
{
	int m,n;
	cout<<"digita el numero de filas:"; cin>>m;
	cout<<"digita el numero de columnas:"; cin>>n;
	Matriz obj1(m,n);
	obj1.leer();
	cout<<"tu matriz es: \n";
	obj1.dpy();
	cout<<"la transouesta es: \n";
	obj1.transpuesta();
}
