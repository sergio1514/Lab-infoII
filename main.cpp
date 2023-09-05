#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int a, b, n, sum, may=0;
float r,pi=3.1416;
string suma;



void Ejercicio1()
{
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;
    cout<<"El residuo de la division A/B es: "<<a/b;
    cout<<endl;

}

void Ejercicio2()
{
    cout<<"Ingrese el numero N: ";
    cin>>n;
    if((n%2)==0)
    {
        cout<<"El numero es par"<<endl;
    }else{
        cout<<"El numero es impar"<<endl;
    }
    cout<<endl;
}

void Ejercicio3()
{
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;
    if(a==b)
    {
        cout<<"Los numeros son iguales"<<endl;
    }else if(a>b){
        cout<<"El numero : "<<a<<" es mayor"<<endl;
    } else{
        cout<<"El numero : "<<b<<" es mayor"<<endl;
    }
    cout<<endl;
}

void Ejercicio5()
{
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;
    cout<<"El residuo de la division A/B es: "<<a/b;
    cout<<endl;

}

void Ejercicio7()
{
    sum=0;
    suma="";
    cout<<"Ingrese el numero N: ";
    cin>>n;
    for(int i = 1 ; i<=n; i++)
    {
        if(i!=n){
            suma+=std::to_string(i)+" + ";
        }else{
            suma+=std::to_string(i)+" = ";
        }
        sum+=i;
    }
    cout<<suma<<sum<<endl;
}

void Ejercicio9()
{
    cout<<"Ingrese el radio del circulo: ";
    cin>>r;
    cout<<"El perimetro del circulo es: "<<2*pi*r<<endl;
    cout<<"El area del circulo es: "<<pi* pow(r, 2)<<endl;

    cout<<endl;
}

void Ejercicio11()
{
    cout<<"Ingrese el numero N: ";
    cin>>n;
    for(int i=1 ; i<=10 ; i++){
        cout<<i<<" x "<<n<<" = "<<n*i<<endl;
    }
    cout<<endl;
}

void Ejercicio13()
{
    cout<<"Ingrese el numero N: ";
    cin>>n;
    for(int i=1 ;i<=n;i++)
    {
        if((n%i)==0){
            cout<<i<<endl;
        }
    }
    cout<<endl;
}

void Ejercicio15()
{
    sum=0;
    do {
        cout<<"Ingrese un numero: ";
        cin>>n;
        sum+=n;
    }while(n!=0);
    cout<<"El resultado de la sumatoria es: "<<sum<<endl;
    cout<<endl;
}

void Ejercicio17()
{
    do {
        cout<<"Ingrese un numero: ";
        cin>>n;
        if(n>may){
            may=n;
        }
    }while(n!=0);
    cout<<"El numero mayor es: "<<may<<endl;
    cout<<endl;
}

void Ejercicio19()
{
    int cont=0;
    cout<<"Ingrese el numero N: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if((n%i)==0){
            cont+=1;
        }
    }
    if(cont>2)
    {
        cout<<n<<" No es un numero primo"<<endl;
    }else{
        cout<<n<<" Es un numero primo"<<endl;
    }
    cout<<endl;
}

void Ejercicio21()
{
    char l,lt;
    cout<<"Ingrese una letra: ";
    cin>>l;
    if(l>=65 && l<=90 )
    {
        lt=l+32;
        cout<<"La letra convertida: "<<lt<<endl;
    }else{
        lt=l-32;
        cout<<"La letra convertida: "<<lt<<endl;
    }
    cout<<endl;

}

void Ejercicio23()
{
    int A,B;
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;
    A=a; B=b;
    while (A != B) {
        if (A < B)
            A += a;
        else
            B += b;
    }
    cout<<"El MCM de "<<a<<" y "<<b<<" es: "<<A<<endl;
    cout<<endl;
}

void Ejercicio25()
{
    int cont=0;
    cout<<"Ingrese el numero N: ";
    cin>>n;
    while (n > 0) {
        n /= 10;
        cont++;
    }
    cout<<"El numero: "<<n<<" tiene "<<cont<<" digitos"<<endl;
    cout<<endl;
}

void Ejercicio27()
{
    char op;
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;
    cout<<"Ingrese el operador: \n * para multiplicacion \n / para multiplicacion \n + para suma \n - para resta\n operado: ";
    cin>>op;
    switch (op) {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;
    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;
    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;
    case '/':
        if (b != 0) {
            cout<<a<<" / "<<b<<" = "<<a/b<<endl;;
        } else {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
        break;
    default:
        cout << "Operación no válida." << endl;
    }

    cout<<endl;
    cin>>op;
}

void Ejercicio29()
{
    char op;
    srand(time(0));
    int limInf=0, limSup=100, n;
    cout<<"Piense en un numero entre 0 y 100"<<endl;
    do {
    n = rand() % (limSup - limInf + 1) + limInf;
        cout << "Tu numero es " << n << " (> (mayor) , < (menor), = (igual)): ";
        cin >> op;

        if (op == '>') {
            cout << "Mi numero es mayor." << endl;
            limInf=n+1;
        } else if (op == '<') {
            cout << "Mi numero es menor." << endl;
            limSup=n-1;
        }
    } while (op != '=');

    cout << "Tu numero era el: " << n << endl;
    cout<<endl;

}

char validacionp1(char let){
    bool flag = true;
    while (flag) {
        if((let>64 && let <91) || (let>96 && let <123)  ){
            flag = false;
        }
        else{
            cout<<"el caracter ingresado no es valido\n Ingreselo nuevamente: ";
            cin>>let;
        }
    }
    return let;
}

void solucionp1(char let){
    string men;
    let=tolower( validacionp1(let));
    if ((let=='a') || (let=='e') || (let=='i') || (let=='o') || (let=='u')){
        men="Es una vocal";
    }else{
        men="No es una vocal";
    }
    cout<<men;
    cout<<endl;
}

void Problema1(){
    char let;
    cout<<"Ingrese un caracter: ";
    cin>>let;
    solucionp1(let);

}

void Problema3(){
    cout<<"Ingrese el mes: ";
    cin>>a;
    if (a <1 || a>12){
        cout<< a<<" es un mes no valido"<<endl;
    }else{
        cout<<"Ingrese el dia: ";
        cin>>b;
        if(b<1 || b>31){
            cout<<b<< " es un dia no valido"<<endl;
        }else{
            if(a == 2 && b == 29){
                cout<< b<<"/"<<a<<" es posiblemente un año bisiesto";
            }else{
                if(((a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12) && ( b <32)) || ((a==4 || a==6 || a==9 || a==11 || a== 2) && (b<31)) )
                {
                    cout<<b<<"/"<<a<<" es una fecha valida"<<endl;
                }
                else{
                    cout<<b<<"/"<<a<<" es una fecha invalida"<<endl;
                }
            }
        }
    }

}

void Problema5(){
    cout<<"Ingrese el valor de la base: ";
    cin>>a;

    if(a%2 == 0){  //validacion de la base
        cout<<"Debe de ingresar una base impar"<<endl;
        Problema5();
    }

    for (int i = 1; i < a; i++) {
        if(i<=a/2){ //parte superior
            if(i>=a/2+1){ //parte inferior
                for(int j=1;j<a/2-i;j++){
                    cout<<" ";
                }
                cout<<"*"<<endl;
        }else{

            }
        }
    }
}

void Problema7(){
    int ant= 1, sig= 1;
    sum=0;
    cout<<"Ingrese un numero: ";
    cin>>a;
    while (sig < n) {
        if (sig % 2 == 0) {
            sum += sig; // Si el número es par, lo sumamos a 'sum'
        }

        // Calculamos el siguiente número de Fibonacci
        int re = ant + sig;
        ant = sig;
        sig = re;
    }
    cout << "El resultado de la suma es: " << sum << endl;
}

void Problema9(){
    sum=0;
    cout<<"Ingrese un numero: ";
    cin>>a;

    while (a > 0) {
        sum += pow(a % 10, a % 10);
        a /= 10;
    }

    cout << "El resultado de la suma es: " << sum << endl;
    cout<<endl;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void Problema11(){
    cout<<"Ingrese un numero: ";
    cin>>a;

    int aux = 1;

    for (int i = 2; i <= n; i++) {
        aux = lcm(aux, i);
    }

    cout << "El mínimo común múltiplo es: " << aux << endl;
}

bool numPrimo(int n){
    int cont=0;
    for (int i=1; i<=n; i++){
        if(n%i==0){
            cont++;
        }
    }

    if(cont>2){
        return false;
    }else{
        return true;
    }
}

void Problema13(){
    sum=0;
    cout<<"Ingrese un numero: ";
    cin>>a;
    for (int i = 1; i < a; i++) {
        if(numPrimo(i)){
            sum+=i;
        }
    }
    cout<<"El resultado de la suma es: "<<sum<<endl;
    cout<<endl;

}

void Problema15(){

}

int contDivisores(int n) {
    int cont = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cont++;
        }
    }
    return cont;
}

void Problema17(){
    cout<<"Ingrese el valor de k: ";
    cin>>a;

    int numIn = 1;
    int n = 1;

    while (true) {
        int div = contDivisores(numIn);
        if (div > a) {
            cout << "El número es: " << numIn << " que tiene " << div << " divisores." << endl;
                break;
        }
        n++;
        numIn = n * (n + 1) / 2; // Hallar el siguiente número triangular
    }
}


void menuE(int op){
    switch(op) {
    case 1:
        cout<<"   EJERCICIO 1   "<<endl;
        cout<<endl;
        Ejercicio1();
        break;
    case 2:
        cout<<"   EJERCICIO 2   "<<endl;
        cout<<endl;
        Ejercicio2();
        break;

    case 3:
        cout<<"   EJERCICIO 3   "<<endl;
        cout<<endl;
        Ejercicio3();
        break;

    case 5:
        cout<<"   EJERCICIO 5   "<<endl;
        cout<<endl;
        Ejercicio5();
        break;

    case 7:
        cout<<"   EJERCICIO 7   "<<endl;
        cout<<endl;
        Ejercicio7();
        break;

    case 9:
        cout<<"   EJERCICIO 9   "<<endl;
        cout<<endl;
        Ejercicio9();
        break;

    case 11:
        cout<<"   EJERCICIO 11   "<<endl;
        cout<<endl;
        Ejercicio11();
        break;

    case 13:
        cout<<"   EJERCICIO 13   "<<endl;
        cout<<endl;
        Ejercicio13();
        break;

    case 15:
        cout<<"   EJERCICIO 15   "<<endl;
        cout<<endl;
        Ejercicio15();
        break;

    case 17:
        cout<<"   EJERCICIO 17   "<<endl;
        cout<<endl;
        Ejercicio17();
        break;

    case 19:
        cout<<"   EJERCICIO 19   "<<endl;
        cout<<endl;
        Ejercicio19();
        break;

    case 21:
        cout<<"   EJERCICIO 21   "<<endl;
        cout<<endl;
        Ejercicio21();
        break;

    case 23:
        cout<<"   EJERCICIO 23   "<<endl;
        cout<<endl;
        Ejercicio23();
        break;

    case 25:
        cout<<"   EJERCICIO 25   "<<endl;
        cout<<endl;
        Ejercicio25();
        break;

    case 27:
        cout<<"   EJERCICIO 27   "<<endl;
        cout<<endl;
        Ejercicio27();
        break;

    case 29:
        cout<<"   EJERCICIO 29   "<<endl;
        cout<<endl;
        Ejercicio29();
        break;

    default:
        cout<<"Ha finalizado la tarea"<<endl;
    }

}

void menuP(int op){
    switch(op) {
    case 1:
        cout<<"   PROBLEMA 1   "<<endl;
        cout<<endl;
        Problema1();
        break;

    case 3:
        cout<<"   PROBLEMA 3   "<<endl;
        cout<<endl;
        Problema3();
        break;

    case 5:
        cout<<"   PROBLEMA 5   "<<endl;
        cout<<endl;
        Problema5();
        break;

    case 7:
        cout<<"   PROBLEMA 7   "<<endl;
        cout<<endl;
        Problema7();
        break;

    case 9:
        cout<<"   PROBLEMA 9   "<<endl;
        cout<<endl;
        Problema9();
        break;

    case 11:
        cout<<"   PROBLEMA 11   "<<endl;
        cout<<endl;
        Problema11();
        break;

    case 13:
        cout<<"   PROBLEMA 13   "<<endl;
        cout<<endl;
        Problema13();
        break;

    case 15:
        cout<<"   PROBLEMA 15   "<<endl;
        cout<<endl;
        Problema15();
        break;

    case 17:
        cout<<"   PROBLEMA 17   "<<endl;
        cout<<endl;
        Problema17();
        break;
    default:
        cout<<"Ha finalizado la tarea"<<endl;
    }
}

int main()
{

    int op;
    string menu ="     SELECIONE QUE DESEA REALIZAR \n 1. Ejercicios \n 2. Problemas \n 0. Para finalizar el programa \n Seleccion: ";
    string menuEjer="    SELECCIONE UN EJERCICIO    \n 0. Finalizar \n 1. Ejercicio 1 \n 2. Ejercicio 2 \n 3. Ejercicio 3 \n 5. Ejercicio 5 \n 7. Ejercicio 7 \n 9. Ejercicio 9 \n 11. Ejercicio 11 \n 13. Ejercicio 13 \n "
                  "15. Ejercicio 15 \n 17. Ejercicio 17 \n 19. Ejercicio 19 \n 21. Ejercicio 21 \n 23. Ejercicio 23 \n 25. Ejercicio 25 \n 27. Ejercicio 27 \n 29. Ejercicio 29 \n "
                  " \n Seleccion: ";
    string menuPro ="SELECIONE QUE DESEA REALIZAR \n 1. Problema 1\n 3. Problema 3 \n 5. Problema 5 \n 7. Problema 7 \n 9. Problema 9"
                     "\n 11. Problema 11 \n 13. Problema 13 \n 15. Problema 15 \n 17. Problema 17 \n 0. Terminar  \n Seleccion: ";
    do {
        cout<<menu;
        cin>>op;
        if(op==1){
            cout<<"Usted ha seleccionado EJERCICIOS "<<endl;
            cout<<menuEjer;
            cin>>op;
            menuE(op);
        }else{
            if(op==2){
                cout<<"Usted ha seleccionado PROBLEMAS"<<endl;
                cout<<menuPro;
                cin>>op;
                menuP(op);
            }else{
                cout<<"Ha concluido el proceso";;
            }
        }

    }
    while (op!=0);

    return 0;
}
