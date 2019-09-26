//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <utility>
#include <string.h>
#include <vector>
#include "QuickSort.h"
#include "MergeSort.h"
#include "HeapSort.h"
#include "ShellSort.h"
#include <string.h>

using namespace std;

int main() {
    std::ifstream infile("data1.txt");
    std::vector<int> Numeros;
    int numero;
    while( infile >> numero)
    {
        Numeros.push_back(numero);
    }

    std::copy(Numeros.begin(),Numeros.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout << endl;
    std::cout << endl;

    QuickSort::quicksort(Numeros);
    QuickSort::imprimir(Numeros,Numeros.begin(),Numeros.end());
    std::cout << std::endl;
    std::cout << endl;


    int x[]={2,1};
    std::copy(begin(x),end(x),std::ostream_iterator<int>(std::cout," "));
    std::cout << endl;
    std::cout << endl;
    
    QuickSort::quicksort(begin(x),end(x)-1);
    QuickSort::imprimir(x,begin(x),end(x));
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
