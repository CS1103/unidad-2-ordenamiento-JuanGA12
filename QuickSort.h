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
#include <string>
#include "Country_Trade.h"
namespace QuickSort{


    template <typename iterator>
    iterator partition(iterator left, iterator right)
    {
        //iterator i = left - 1;
        auto i = left-1;

        //itr it=left;
        for(auto it = left; it < right ; std::advance(it,1) )
        {
            if(*it <= *right)
            {
                using std::swap;
                ++i;
                swap(*i,*it);
            }
        }

        std::swap(*(i+1),*right);
        return ++i;
    }

    template <typename iterator> // normalemnte para arrays
    void quicksort(iterator left, iterator right) {
        if (left < right) {
            if (std::distance(left, right) >= 1) {
                //iterator pivot = partition(left,right);
                auto pivot = partition(left, right);
                quicksort(left, pivot - 1);
                quicksort(pivot + 1, right);
            }
        }

    }
    template <typename Container> //normalmente para vectores
    void quicksort(Container &c) {
        quicksort(c.begin(), c.end()-1);
    }

    template <typename iterator, typename Container>
    void imprimir(Container &c, iterator begin, iterator end){//pasar el container como parametro no es importante aca
            std::copy( begin, end , std::ostream_iterator<float>(std::cout, " "));
            std::cout<<std::endl;
            std::cout<<std::endl;
        }




    template <typename Container>
    void imprimir_string(Container &c){//pasar el container como parametro no es importante aca
        for(auto i:c){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
        std::cout<<std::endl;
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