#include <cstdlib>
#include <ctime>
#include <iostream>
 
using namespace std;

int main (int argc, char const* argv[])
{
    char opc;
    int jogador, maior = 3, menor = 1, continuar, score = 0;

    cout << "Deseja jogar?\n";
    cout << "(S) = Sim\n";
    cout << "(N) = Não\n";
    cin >> opc;

    switch (opc)
    {
        case 'S' | 's':

            do
            {
                cout << "\n\n\n1 = Pedra\n";
                cout << "2 = Papel\n";
                cout << "3 = Tesoura\n";
                cin >> jogador;

                srand((unsigned)time(0)); 
                int aleatorio = rand()%(maior-menor+1) + menor;
    
                if(aleatorio == 2 && jogador == 1){
                                
                    cout << "Você escolheu pedra...\nO computador escolheu papel...\n";
                    cout << "\nVocê perdeu\n";

                    cout << "\nSeu score é: " << score << endl;

                } else if(aleatorio == 1 && jogador == 2){

                    cout << "Você escolheu papel... \nO computador escolheu pedra...\n";
                    cout << "\nVocê ganhou\n";
                    score++;

                    cout << "\nSeu score é: " << score << endl;

                } else if(aleatorio == 3 && jogador == 2){

                    cout << "Você escolheu papel...\nO computador escolheu tesoura...\n";
                    cout << "\nVocê perdeu\n";
                    
                    cout << "\nSeu score é: " << score << endl;

                } else if(aleatorio == 2 && jogador == 3){

                    cout << "Você escolheu tesoura... \nO computador escolheu papel...\n";
                    cout << "\nVocê ganhou\n";
                    score++;

                    cout << "\nSeu score é: " << score << endl;

                } else if(aleatorio == 1 && jogador == 3){

                    cout << "Você escolheu tesoura... \nO computador escolheu pedra...\n";
                    cout << "\nVocê perdeu\n";

                    cout << "\nSeu score é: " << score << endl;

                } else if(aleatorio == 3 && jogador == 1){

                    cout << "Você escolheu pedra... \nO computador escolheu tesoura...\n";
                    cout << "\nVocê ganhou\n";
                    score++;

                    cout << "\nSeu score é: " << score << endl;

                } else if(aleatorio == jogador){

                    cout << "Você e o computador escolheram a mesma coisa...\n";
                    cout << "\nVocê empatou\n";

                    cout << "\nSeu score é: " << score << endl;

                }

                    cout << "\n\nDeseja continuar jogando?\n";
                    cout << "1 = Sim\n";
                    cout << "2 = Não\n";
                    cin >> continuar;

            } while (continuar != 2);

        break;

        default:

            cout << "Saindo...\n";

        break;

    }   

    return 0;

}