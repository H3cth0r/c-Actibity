// Héctor Miranda García y Rodrigo García Estrada

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <vector>

using namespace std;

int main();

double addition(double a, double b){
  return a + b;
}
double subtraction(double a, double b){
  return a - b;
}
double multiplication(double a, double b){
  return a * b;
}

int operaNumeros(){
  char option; double x, y;

  cout << "Enter firts number: ";
  cin >> x;
  cout << "Enter second number: ";
  cin >> y; 
  cout << "\nSelect an option \nS) addition \nR) subtraction\nM) multiplication\nE) menu\n>> ";cin >> option;
  if (option == 'S'){
    cout << "Result: "<< addition(x, y)<< endl;
    main();
  }else if (option == 'R'){
    cout<< "Result: " << subtraction(x, y)<<endl;
    main();
  }else if (option == 'M'){
    cout<< "Result: " << multiplication(x, y)<<endl;
    main();
  }else if(option == 'E'){
    main();
    cout << endl;
  }else{
    cout << "Try again"<< endl;
    operaNumeros();
  }

  return 0;
}

int numeroImpar(){
  int oddNum = 3;
  while (oddNum % 2 != 0 ){
    cout << "Input odd number: ";
    cin >> oddNum;
    cout << endl;
  }
  main();
  return 0;
}

int sumaPares(){
  int sumador;

  for(int a = 0; a <= 100; a += 1 ){
    if(a%2 == 0){
      sumador += a;
    }
  }
  cout << "Addition of odd numbers from 0-100: "<< sumador<< endl;
  main();

  return 0;
}

int mediaAritmetica(){
  int times;
  double suma, numero;
  cout << "Input number of numbers to be calculated: ";
  cin >> times;
  cout<<endl;
  for (int i = 1; i <= times; i += 1){
    cout << "Enter number " << i <<": ";
    cin >> numero;
    cout<<endl;
    suma += numero;
  }
  cout << "Result: " << suma / times << endl;
  main();
  return 0;
}

int numeroMagico(){
  int aleatorio = rand() % 100 + 1;
  int searching;

  while (searching != aleatorio){
    cout << "Enter number: ";
    cin >> searching;
    cout<<endl;
    if (searching > aleatorio){
      cout << "Menos"<< endl;
    }else if(searching<aleatorio){
      cout<<"Mas"<<endl;
    }
  }
  main();

  return 0;
}

int conversionCelsiusFarenheit(){
  double initialCelsius, increment, farenheit;int numberConversions;

  cout << "Input Initial Celsius value: ";
  cin >> initialCelsius;
  cout<< endl;
  cout<<"Enter number of conversions: ";
  cin >> numberConversions;
  cout<<endl;
  cout << "Enter number intervals size: ";
  cin >> increment;
  cout << endl;

  vector <double> celsius, conversions;

  for (int i = 1; i <= numberConversions; i++){
    celsius.push_back(initialCelsius);

    farenheit = (9.0/5.0) * initialCelsius + 32;
    conversions.push_back(farenheit);

    initialCelsius += increment;
  }

  int x = 0;
  cout << "Celsius\t" <<"Farenheit"<< endl;
  while (x < conversions.size()){
    cout << celsius[x]<< "\t\t"<< conversions[x]<< endl;
    x++;
  }

  main();
  return 0;
}

int serieAritmetica(){
  int a=1,d=3,n=25,i=0,termino,suma;
 do{
   termino=a+(i*d);
   i++;
   suma+=termino;
   cout<<"Termino"<<i<<": "<<termino<<endl;
 }
 while (i<n);
 
 cout<<"Valor totoal de la serie: "<<suma<<endl;
 main();
 return 0;
}

int mediasGeometricaArmonica(){
  int x,n=0,dato=1;
float datoInv;
  cin>>x;
  
  while(x!=0){
    n++;
    datoInv+=float(1/float(x));
    dato*=x;
    cin>>x;
    

  }
  cout<<"n normal: "<<n<<endl;
  cout<<"1/n: "<<1/float(n)<<endl;
  cout<<"La media armonica es: "<<(float(n)/float(datoInv))<<endl;
  cout<<"La media geométrica es: "<<pow(dato,1/float(n))<<endl;
  main();
  return 0;
}
int main() {
  int optionNumber;
  cout << "Select number of function\n1) operaNumeros\n2) numeroImpar\n3) sumaPares\n4) mediaAritmetica\n5) numeroMagico\n6) conversionCelsiusFarenheit\n7) serieAritmetica\n8) mediasGeometricaArmonica\n9) exit\n>> ";
  cin >> optionNumber;
  if (optionNumber == 1){
    operaNumeros();
  }else if(optionNumber == 2){
    numeroImpar();
  }else if(optionNumber == 3){
    sumaPares();
  }else if(optionNumber == 4){
    mediaAritmetica();
  }else if(optionNumber == 5){
    numeroMagico();
  }else if (optionNumber == 6){
    conversionCelsiusFarenheit();
  }else if (optionNumber == 7){
    serieAritmetica();
  }else if (optionNumber == 8){
    mediasGeometricaArmonica();
  }else if (optionNumber == 9){
    exit(0);
}
}