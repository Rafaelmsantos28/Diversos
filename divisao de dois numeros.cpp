#include <iostream>

using namespace std;

int main() {
    int x, y, D;
    
    //Aqui o operador coloca o numerador e depois o denominador
    
	cout << "Digite o numerador: " << endl;
	cin >> x;
	cout << "Entendi. Digite o denominador agora: " << endl;
	cin >> y;
	
	//Caso o denominador seja zero, � exibido uma mensagem de erro
		if(y==0){
			cout << "Impossivel dividir por zero" << endl;
			return 1;
		}
		
	//Aqui � realizado a opera��o de divis�o e exibido o resultado
	D = x/y;
	cout << "Seu numero: " << D << endl;
	return 0;
		
		}
		
	

