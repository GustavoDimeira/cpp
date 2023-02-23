#include <iostream>
#include <locale.h>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    //cout << "Hello world!" << endl;
    float n1,n2,n3,n4,n5,r; //vari�veis
    int op=-1;
    while(op!=0){
        system("cls");
        cout <<"\n::Menu::\n0-Sair\n1-Soma\n2-Subtra��o\n";
        cout <<"3-Multiplica��o\n4-Divis�o\n";
        cout <<"5-Raiz Quadrada\n6-Pot�ncia\n";
        cout <<"7-Receber 5 n�meros e calcular a m�dia\n";
        cout <<"Op: ";
        cin >>op;
        if (op == 5) {
            cout <<"Informe um n�mero:"<<endl;
            cout <<"N1: ";
            cin >> n1;
        } else if (op == 7) {
            cout <<"Informe cinco n�meros:"<<endl;
            cout <<"N1: ";
            cin >> n1;
            cout <<"N2: ";
            cin >> n2;
            cout <<"N3: ";
            cin >> n3;
            cout <<"N4: ";
            cin >> n4;
            cout <<"N5: ";
            cin >> n5;
        } else if(op > 0 && op <7){
            cout <<"Informe dois n�meros:"<<endl;
            cout <<"N1: ";
            cin >> n1;
            cout <<"N2: ";
            cin >> n2;
        }
        switch(op){
        case 0 :
            cout<<"Obrigado por utilizar a calculadora!";
            break;
        case 1 :
            r=n1+n2;
            cout <<"Soma = "<< r;
            //getch();
            break;
        case 2:
             r=n1-n2;
            cout <<"Subtracao = "<< r;
            break;
        case 3:
            r=n1*n2;
            cout<<"Multiplica��o = "<<r;
            break;
        case 4:
            if(n2 == 0){
                cout << "Erro!\n";
            }
            else{
                r=n1/n2;
                cout<<"Divis�o = "<<r;
            }
            break;
        case 5:
            //Raiz quadrada: sqrt(n1)
            r=sqrt(n1);
            cout<<"Raiz quadrada: "<<r<<endl;
            break;
        case 6:
            //Port�ncia: pow(n1,n2)
            //n1 elevado a n2
            r=pow(n1,n2);
            cout <<n1<<"^"<<n2<<" = "<<r<<endl;
            break;
        case 7:
            r=(n1+n2+n3+n4+n5)/5;
            break;
        default:
            cout << "Opcao inv�lida!!";
            break;
        }
        getch();
    }//fim while
    /*
    if(op == 1){
        r=n1+n2;
        cout <<"Soma = "<< r;
    }
    else if (op == 2){
        r=n1-n2;
        cout <<"Subtracao = "<< r;
    }
    else{
        cout <<"Opcao inv�lida!!";
    }
    */
}
