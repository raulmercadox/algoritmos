#include <iostream>
#include <vector>

using namespace std;

vector<int> insertion_sort(vector<int> lista)
{
    int aux;
    if (lista.size() > 1)
    {
        for (int i = 1; i < lista.size(); i++)
        {
            int indice_referencia = i;
            aux = lista.at(i);
            int indice_caminante = i - 1;
            while (indice_caminante >= 0)
            {
                if (lista.at(indice_caminante) > aux)
                {
                    lista.at(indice_referencia) = lista.at(indice_caminante);
                }
                else
                {
                    break;
                }
                indice_caminante--;
                indice_referencia--;
            }
            lista.at(indice_caminante + 1) = aux;
        }
    }
    else
    {
        return lista;
    }
    return lista;
}

void imprimir_vector(vector<int> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista.at(i) << endl;
    }
}

int main()
{
    // vector<int> lista = {4, 2, 7, 1, 3};
    //  vector<int> lista = {98,74,97,29,96,3,72,72,26,47,54,1,100,59,81,48,7,32,28,63,83,60,8,81,84,45,84,58,19,60,91,49,3,16,56,29,13,91,20,50,58,37,81,22,57,73,50,35,88};
    // vector<int> lista = {4, 2};
    vector<int> lista = {};
    vector<int> ordenado = insertion_sort(lista);
    imprimir_vector(ordenado);
    return 0;
}
