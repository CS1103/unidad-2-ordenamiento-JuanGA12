//
// Created by Juan Galvez on 2019-09-25.
//

#ifndef SORTMETHODS_QUICKSORT_H
#define SORTMETHODS_QUICKSORT_H

#endif //SORTMETHODS_QUICKSORT_H

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

namespace QuickSort{

    template <class Itr>
    void quicksort(Itr b, Itr e) {
        if (std::distance(b, e) > 1) {
            Itr pivot = b + (e-b)/2;
            quicksort(b, pivot);
            quicksort(pivot, e);

        }
    }

// Version to sort a whole container
    template <class Container>
    void quicksort(Container &c) {
        quicksort(c.begin(), c.end());
    }
}