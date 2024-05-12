#include <iostream>
//1. Ejercicio Punto de Silla
using namespace std;
int main(){
	int matriz[3][8]={{2, 3, 4,5,1,9,7,1}, {5, 6, 7,3,2,4,3,2}, {8, 9, 10,5,3,1,8,9,}};
  int maximos[3]={-999,-999,-999};
  int minimus[8]={999,999,999,999,999,999,999,999};
	bool band=true;
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
            if (matriz[i][j]>maximos[i]){
            	 maximos[i]=matriz[i][j];
            	 
            	 if (matriz[i][j]<minimus[j]){
            	 minimus[j]=matriz[i][j];
			}
			 }
			 for(int i=0;i<3;i++){
			 	for(int j=0;j<8;j++){
			 		 if (maximos[i]==minimus[j]){
        
                   cout<<"punto de silla en la pocion "<<i<<j;
    }
				 }
			 	
			 	
			 }
	
}

}
        return 0;
}
