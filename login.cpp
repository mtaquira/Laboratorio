#include <iostream>
using namespace std;

int main() 
{
	int a=0, b=3, j;
	string nombre[5]; 
	string pass[5];
	string user, password;
	string info;
	
	nombre[0]="lcs"; pass[0] = "lcs";
	nombre[1]="lcc"; pass[1] = "lcc";
	nombre[2]="lcp"; pass[2] = "lcp";
	nombre[3]="lcr"; pass[3] = "lcr";
	nombre[4]="lcb"; pass[4] = "lcb";

	while (a<=2)
	{
		cout<<"Ingrese su usuario"<<endl;
		cin>>user;
		cout<<"Ingrese su contraseña"<<endl;
		cin>>password;
		//-----------------------------------------------
		for( j=0; j<=4;j++)
		{
			if(user == nombre[j] and password == pass[j])
			{
				info = "Encontrado";
			}
		}
		//--------------------------------------------
		if (info=="Encontrado")
		{
			cout<<"Bienvenido al sistema"<<endl;
			a = 3;
		}else
		{
			cout<<"El usuario o la contraseña es incorrecto"<<endl;
			a= a + 1;
			cout<<"Intentos restantes "<<b-a<<endl;
			cout<<"-------------------------"<<endl;
		}
		
	};
	return 0;
}
