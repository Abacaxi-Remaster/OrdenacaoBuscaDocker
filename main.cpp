#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <chrono>

#include "sort.hpp"
#include "search.hpp"
#include "randomArray.hpp"

#define numdeFunc 5    // numero de fucoes a serem comparadas (sorts e searchs)
#define qntdeSeq 5     // numero de sequencias analisadas
#define numMin 20      // menor numero possivel da sequencia
#define numMax 2000000 // maior numero possivel da sequencia

using namespace std;
using namespace std::chrono;

double meDeUmNumero()
{ // retorna um numero aleatório
    double numProcurado = numMin + rand() % (numMax - numMin);
    cout << "O número procurado será: " << numProcurado << endl;
    return numProcurado;
}

string calculaTempo(double crono)
{ // transforma tempo em string em segundos
    return to_string(crono / 1000000.0);
}

void printTemposMedidos(double temposMedidos[])
{ // Função que printa a tabela de tempos medidos.
    cout << temposMedidos[0] << "; " << temposMedidos[1] << "; " << temposMedidos[2] << "; " << temposMedidos[3] << "; " << temposMedidos[4] << "; " << endl;
}

int main()
{
    int **vetorAleatorio;
    vetorAleatorio = new int *[qntdeSeq];
    int tamanhos[qntdeSeq] = {0};
    int numeroProcurado = 0;
    int k, opcao;
    double cronometro = 0;
    bool saida = false;
    double temposMedidos[numdeFunc][qntdeSeq] = {0};

    srand(time(0));
    /// Preenche a matriz com números aleatórios e guarda os tamanhos de cada array.
    for (k = 0; k < qntdeSeq; k++)
    {
        tamanhos[k] = 10000 + rand() % 990000;
        vetorAleatorio[k] = new int[tamanhos[k]];
        randomArray(&(vetorAleatorio[k]), tamanhos[k], numMin, numMax);
    }

    /// Um menu para o usuário escolher qual função ele quer executar.
    do
    {
        cout << endl
             << "Voce quer fazer qual opcao?" << endl
             << "1. Bubble" << endl
             << "2. Quick" << endl
             << "3. Merge" << endl
             << "4. Binary" << endl
             << "5. Ternary" << endl
             << "6. Saida" << endl;
        fflush(stdin);
        cin >> opcao;

        switch (opcao)
        {

        case 1:
            for (k = 0; k <= 4; k++)
            {
                cronometro = bubbleSort(vetorAleatorio[k], tamanhos[k]);
                cout << calculaTempo(cronometro) << endl;
            }
            break;

        case 2:
            for (k = 0; k <= 4; k++)
            {
                cronometro = quickSort(vetorAleatorio[k], tamanhos[k]);
                cout << calculaTempo(cronometro) << endl;
            }
            break;

        case 3:
            for (k = 0; k <= 4; k++)
            {
                cronometro = mergeSort(vetorAleatorio[k], tamanhos[k]);
                cout << calculaTempo(cronometro) << endl;
            }
            break;

        case 4:
            numeroProcurado = meDeUmNumero();
            for (k = 0; k <= 4; k++)
            {
                cronometro = binarySearch(vetorAleatorio[k], numeroProcurado, tamanhos[k]);
                cout << calculaTempo(cronometro) << endl;
            }
            break;

        case 5:
            numeroProcurado = meDeUmNumero();
            for (k = 0; k <= 4; k++)
            {
                cronometro = ternarySearch(vetorAleatorio[k], numeroProcurado, tamanhos[k]);
                cout << calculaTempo(cronometro) << endl;
            }
            break;

        case 6:
            saida = true;
            break;

        case 7:
            numeroProcurado = meDeUmNumero();
            for (int j = 0; j < qntdeSeq; j++)
            {
                temposMedidos[1][j] = quickSort(vetorAleatorio[j], tamanhos[j]);
            }
            for (int j = 0; j < qntdeSeq; j++)
            {
                temposMedidos[2][j] = mergeSort(vetorAleatorio[j], tamanhos[j]);
            }
            for (int j = 0; j < qntdeSeq; j++)
            {
                temposMedidos[3][j] = binarySearch(vetorAleatorio[j], numeroProcurado, tamanhos[j]);
            }
            for (int j = 0; j < qntdeSeq; j++)
            {
                printTemposMedidos(temposMedidos[j]);
            }

            break;
        }
    } while (!saida);

    /// Libera o espaço alocado acima.
    for (int i = 0; i <= 4; i++)
    {
        delete[] vetorAleatorio[i];
    }

    return 0;
}