#include <iostream>
using namespace std;

int main() {
  int n, promedio, resto, total, libres, movidos;
  cin >> n;
  int costos[n];
  float resultado, monto;
  while(n!=0){
    total = 0;
    for(int i=0; i<n; i++){
      cin >> monto;
      total += monto*100;
      costos[i] = monto*100;
    }

    promedio = total/n;
    resto = total % n;
    resultado = 0;
    
    libres = n - resto;
    movidos = 0;

    for(int i=0; i<n; i++){
      if(costos[i] < promedio){
        resultado += promedio - costos[i];
        movidos += 1;
      }
    }

    if(movidos > libres){
      resultado += movidos - libres;
    }

    if(resultado/100 - (int) resultado/100 == 0){
      cout << "$" << resultado/100 << ".00" << endl;
    } else {
      cout << "$" << resultado/100 << endl;
    }

    cin >> n;
  }
  return 0;
}
