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
#include "Country_Trade.cpp"


namespace QuickSort{

    template <typename iterator>
    //iterator partition(iterator left, iterator right)
    auto partition(iterator left, iterator right)
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

    template <typename iterator>
    void QuickSort(iterator left, iterator right) {
        if (left < right) {
            if (std::distance(left, right) >= 1) {
                //iterator pivot = partition(left,right);
                auto pivot = partition(left, right);
                QuickSort(left, pivot - 1);
                QuickSort(pivot + 1, right);
            }
        }

    }
    template <typename Container>
    void QuickSort(Container &c) {
        QuickSort(c.begin(), c.end()-1);
    }


    /*
    template <typename iterator, typename Comp>
    auto partition(iterator left, iterator right, const Comp cmp)
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

    template <typename iterator, typename Comp>
    void QuickSort(iterator left, iterator right, const Comp cmp) {
        if (left < right) {
            if (std::distance(left, right) >= 1) {
                //iterator pivot = partition(left,right);
                auto pivot = partition(left, right);
                QuickSort(left, pivot - 1);
                QuickSort(pivot + 1, right);
            }
        }

    }
    template <typename Container, typename Comp>
    void QuickSort(Container &c, const Comp cmp) {
        QuickSort(c.begin(), c.end()-1, cmp);
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
*/
}


