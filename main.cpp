#include <iostream>

using namespace std;
static char celdaDeJuego[10] = { 'o','1','2','3','4','5','6','7','8','9' };

void DibujarTablero() {
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "jugador 1 (X)  -  jugador 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << celdaDeJuego[1] << "  |  " << celdaDeJuego[2] << "  |  " << celdaDeJuego[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << celdaDeJuego[4] << "  |  " << celdaDeJuego[5] << "  |  " << celdaDeJuego[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << celdaDeJuego[7] << "  |  " << celdaDeJuego[8] << "  |  " << celdaDeJuego[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int verificarReslutados(int& i) {
    if (celdaDeJuego[1] == celdaDeJuego[2] && celdaDeJuego[2] == celdaDeJuego[3])

        i = 1;
    else if (celdaDeJuego[4] == celdaDeJuego[5] && celdaDeJuego[5] == celdaDeJuego[6])

        i = 1;
    else if (celdaDeJuego[7] == celdaDeJuego[8] && celdaDeJuego[8] == celdaDeJuego[9])

        i = 1;
    else if (celdaDeJuego[1] == celdaDeJuego[4] && celdaDeJuego[4] == celdaDeJuego[7])

        i = 1;
    else if (celdaDeJuego[2] == celdaDeJuego[5] && celdaDeJuego[5] == celdaDeJuego[8])

        i = 1;
    else if (celdaDeJuego[3] == celdaDeJuego[6] && celdaDeJuego[6] == celdaDeJuego[9])

        i = 1;
    else if (celdaDeJuego[1] == celdaDeJuego[5] && celdaDeJuego[5] == celdaDeJuego[9])

        i = 1;
    else if (celdaDeJuego[3] == celdaDeJuego[5] && celdaDeJuego[5] == celdaDeJuego[7])

        i = 1;
    else if (celdaDeJuego[1] != '1' && celdaDeJuego[2] != '2' && celdaDeJuego[3] != '3'
        && celdaDeJuego[4] != '4' && celdaDeJuego[5] != '5' && celdaDeJuego[6] != '6'
        && celdaDeJuego[7] != '7' && celdaDeJuego[8] != '8' && celdaDeJuego[9] != '9')

        i = 0;
    else
        i = -1;
    return i;
}

void Jugar(char& marcaDelJugador, int& jugador, int& opcionDeJugador) {

    if (opcionDeJugador == 1 && celdaDeJuego[1] == '1')

        celdaDeJuego[1] = marcaDelJugador;
    else if (opcionDeJugador == 2 && celdaDeJuego[2] == '2')

        celdaDeJuego[2] = marcaDelJugador;
    else if (opcionDeJugador == 3 && celdaDeJuego[3] == '3')

        celdaDeJuego[3] = marcaDelJugador;
    else if (opcionDeJugador == 4 && celdaDeJuego[4] == '4')

        celdaDeJuego[4] = marcaDelJugador;
    else if (opcionDeJugador == 5 && celdaDeJuego[5] == '5')

        celdaDeJuego[5] = marcaDelJugador;
    else if (opcionDeJugador == 6 && celdaDeJuego[6] == '6')

        celdaDeJuego[6] = marcaDelJugador;
    else if (opcionDeJugador == 7 && celdaDeJuego[7] == '7')

        celdaDeJuego[7] = marcaDelJugador;
    else if (opcionDeJugador == 8 && celdaDeJuego[8] == '8')

        celdaDeJuego[8] = marcaDelJugador;
    else if (opcionDeJugador == 9 && celdaDeJuego[9] == '9')

        celdaDeJuego[9] = marcaDelJugador;
    else
    {
        cout << "Invalid move ";
        jugador--;
        cin.ignore();
        cin.get();
    }
}

void Game()
{
    int jugador = 1, i, opcionDeJugador;
    char marcaDelJugador;

    do
    {
        DibujarTablero();
        jugador = (jugador % 2) ? 1 : 2;
        cout << "jugador " << jugador << ", enter a number:  ";
        cin >> opcionDeJugador;
        marcaDelJugador = (jugador == 1) ? 'X' : 'O';
        Jugar(marcaDelJugador, jugador, opcionDeJugador);
        verificarReslutados(i);
        jugador++;
    } while (i == -1);
    DibujarTablero();
    if (i == 1)

        cout << "==>\ajugador " << --jugador << " win ";
    else
        cout << "==>\aGame draw";
    cin.ignore();
    cin.get();
}


int main() {

    Game();

}
