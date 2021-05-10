//Javiera Naranjo
//Scarlett Ojeda
//Rodolfo Seguel

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, numero;
  int i = 1; 

  while(cin >> n){
    vector <int> numeros(n);
    cin >> numero;
    numeros[0] = abs(numero);
    for(i = 1; i <= n; i++){
      cin >> numero;
      numeros[i] = abs(numero);
      if ((abs(numeros[i] - numeros[i-1]) > n-1) || (abs(numeros[i] - numeros[i-1]) == 0)){
        cout << "Not jolly\n";
        break;
      }
    }
    if(i==n+1){
      cout << "Jolly\n";
    }
  }

return 0;
}
