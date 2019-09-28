 //
// Created by Juan Galvez on 2019-09-25.
//

#ifndef SORTMETHODS_MERGESORT_H
#define SORTMETHODS_MERGESORT_H

#endif //SORTMETHODS_MERGESORT_H

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

namespace MergeSort{

    template<typename T>
    //Funcion imprimir
    void printArray(const T &a) {
        for (auto i: a) {
            cout << i << " ";
        }
        cout << endl;
    }

    template<typename T>
    T mergeSort(typename T::iterator begin, typename T::iterator end) {
        //Tengo la mitad del vector
        auto n = end - begin;
        if (n < 2) {
            return T(begin, end);
        }
        auto Primera_mitad = mergeSort<T>(begin, begin + n / 2);
        auto Segunda_mitad = mergeSort<T>(begin + n / 2, end);
        auto It1 = Primera_mitad.begin();
        auto It2 = Segunda_mitad.begin();
        T merged;
        while (It1 != Primera_mitad.end() && It2 != Segunda_mitad.end()) {
            if (*It1 < It2) {
                merged.push_back(It1);
                ++It1;
            } else {
                merged.push_back(It2);
                ++It2;
            }
        }
        while (It1 != Primera_mitad.end()) {
            merged.push_back(It1);
            ++It1;
        }
        while (It2 != Segunda_mitad.end()) {
            merged.push_back(*It2);
            ++It2;
        }
        return merged;
    }
}
 /*esta solo para vectores
 //voy a dormir y continuo bien temprano
 //int main() {
     vector<int> a = {3, 0, 7, 5, 7, 8, 3, 1};
     Mergue_Sort::printArray(Mergue_Sort::mergeSort<vector<int>>(a.begin(), a.end()));
     return 0;
 }
}
  */