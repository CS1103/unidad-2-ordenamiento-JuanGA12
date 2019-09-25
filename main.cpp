//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <iterator>
#include <string.h>
#include <vector>
#include "QuickSort.h"

using namespace std;
using namespace QuickSort;

int main(){
    /*std::ifstream infile("data1.txt");
    std::vector<int> Numeros;
    int numero;
    while( infile >> numero)
    {
        Numeros.push_back(numero);
    }

    std::copy(Numeros.begin(),Numeros.end(),
              std::ostream_iterator<int>(std::cout," "));
    std::cout << '\n';
    Numeros.push_back(13);
    std::copy(Numeros.begin(),Numeros.end(),
              std::ostream_iterator<int>(std::cout," "));
    std::cout << '\n';

    string si("Hello");
    string s2("Hello World");
    string s3("Hiya");
    for(auto &c:s3)
        c=toupper(c);
    cout<<s3<<endl;
    string d= si + ", " + s2 + '\n';
    if(s3<s2)
        return 1;

    vector<string> v6{10};
    vector<string> svec{10, "null"};

    for (int i = 0; i < 9 ; ++i) {
        cout <<1<<endl;
    }
    unsigned buf_size = 1024;
    int ia[4 * 7 - 14];
    char st[12] = "fundamental";
    string sa[10];
    for (int j = 0; j <10 ; ++j) {
        cout<<sa[j]<<endl;
    }
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *p = &arr[0];
    int *q = arr;
*/

    vector<int> v={3,6,2,4,7};
    QuickSort::quicksort(v.begin(),v.end());

    return EXIT_SUCCESS;
}
