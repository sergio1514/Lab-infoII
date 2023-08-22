#include <iostream>
#include <math.h>

using namespace std;


void Ejercicio1()
{
    int a, b;
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;
    cout<<"El residuo de la division A/B es: "<<a/b;
    cout<<endl;

}

void Ejercicio2()
{
    int n;
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
    int a, b;
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
    int a, b;
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;
    cout<<"El residuo de la division A/B es: "<<a/b;
    cout<<endl;

}

void Ejercicio7()
{
    int n, sum=0;
    string suma="";
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
    float n,pi=3.1416;
    cout<<"Ingrese el radio del circulo: ";
    cin>>n;
    cout<<"El perimetro del circulo es: "<<2*pi*n<<endl;
    cout<<"El area del circulo es: "<<pi* pow(n, 2)<<endl;

    cout<<endl;
}

void Ejercicio11()
{
    int n;
    cout<<"Ingrese el numero N: ";
    cin>>n;
    for(int i=1 ; i<=10 ; i++){
        cout<<i<<" x "<<n<<" = "<<n*i<<endl;
    }
    cout<<endl;
}

void Ejercicio13()
{
    int n;
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
    int n, sum=0;
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
    int n,may=0;
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
    int n,cont=0;
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
    int a, b;
    cout<<"Ingrese el numero A: ";
    cin>>a;
    cout<<"Ingrese el numero B: ";
    cin>>b;

    cout<<endl;
}

void menus(int op){
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

    default:
        cout<<"Ha finalizado la tarea"<<endl;
    }

}

int main()
{
    int op;
    string menu="    SELECCIONE UN EJERCICIO    \n 0. Finalizar \n 1. Ejercicio 1 \n 2. Ejercicio 2 \n 3. Ejercicio 3 \n 5. Ejercicio 5 \n 7. Ejercicio 7 \n 9. Ejercicio 9 \n 11. Ejercicio 11 \n 13. Ejercicio 13 \n "
                  "15. Ejercicio 15 \n 17. Ejercicio 17 \n 19. Ejercicio 19 \n 21. Ejercicio 21 \n 23. Ejercicio 23  \n Seleccion: ";
    do {
        cout<<menu;
        cin>>op;
        menus(op);
    }
    while (op!=0);

    return 0;
}
