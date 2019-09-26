//
// Created by Juan Galvez on 2019-09-25.
//

#ifndef SORTMETHODS_QUICKSORT_H
#define SORTMETHODS_QUICKSORT_H

#endif //SORTMETHODS_QUICKSORT_H

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

namespace QuickSort{
    template <typename itr>
    itr partition(itr left,itr right)
    {

        itr i=left-1;

        //itr it=left;
        for(auto it = left; it < right ; std::advance(it,1) )
        {
            if(*it<=*right)
            {
                using std::swap;
                ++i;
                swap(*i,*it);
            }
        }

        std::swap(*(i+1),*right);
        return ++i;
    }

    template <class itr> // normalemnte para arrays
    void quicksort(itr left, itr right) {
        if (left < right) {
            if (std::distance(left, right) >= 1) {
                itr pivot = partition(left, right);
                quicksort(left, pivot - 1);
                quicksort(pivot + 1, right);
            }
        }

    }
    template <class Container> //normalmente para vectores
    void quicksort(Container &c) {
        quicksort(c.begin(), c.end()-1);
    }

    template <class itr, class Container>
    void imprimir(Container &c, itr iz, itr dr){//pasar el container como parametro no es importante aca
            std::copy( iz, dr , std::ostream_iterator<int>(std::cout, " "));
        }

}


/*
 * template <class Itr>
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




    while(it<right)
        {
            if(*it<=*right)
            {
                using std::swap;
                ++i;
                swap(*i,*it);
            }
            std::advance(it,1);
        }

        std::swap(*(i+1),*right);
        return i++;


 */