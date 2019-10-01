//
// Created by Juan Galvez on 2019-09-25.
//

#ifndef SORTMETHODS_SHELLSORT_H
#define SORTMETHODS_SHELLSORT_H

#endif //SORTMETHODS_SHELLSORT_H

#include <iostream>
#include <vector>
#include <iterator>
#include "Country_Trade.h"

using namespace std;

namespace ShellSort{


    template <typename Container>

    auto ShellSort(Container & cnt){
        auto n = distance(cnt.begin(),cnt.end());

        for (int gap = n/2; gap > 0; gap /= 2){

            for (int i = gap; i < n; i++){

                auto temp = *(cnt.begin() + i);

                int j;
                for (j = i; j >= gap && *(cnt.begin() + j - gap) > temp; j -= gap){
                    //int x = j - gap;
                    *(cnt.begin() + j) = *(cnt.begin() + j - gap);
                }
                *(cnt.begin() + j ) = temp;
            }
        }

    }


    /*
    //ORDENAMIENTO PARA LOS CINCO ATRIBUTOS A LA VEZ
    template <typename Container, typename Comp>

    auto ShellSort(Container & cnt, const Comp cmp){
        auto n = distance(cnt.begin(),cnt.end());

        for (int gap = n/2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < n; i++)
            {
                auto temp = *(cnt.begin() + i);

                int j;
                for (j = i; j >= gap && *(cnt.begin() + j - gap) > temp; j -= gap) {
                    int x = j - gap;
                    *(cnt.begin() + j) = *(cnt.begin() + x);
                }
                *(cnt.begin() + j ) = temp;
            }
        }

    }


    template <typename iterator>
    void imprimir(iterator begin, iterator end){//pasar el container como parametro no es importante aca
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
    }*/
}