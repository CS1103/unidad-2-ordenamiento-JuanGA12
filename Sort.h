//
// Created by rudri on 9/17/2019.
//

#ifndef SORT_METHODS_SORT_H
#define SORT_METHODS_SORT_H

#include <iostream>
using namespace std;

class quickSort {
public:
    //template <typename T, template <typename ...> class ContainerType>

    /*template <typename iterator, typename Container>
    void imprimir(Container &c, iterator begin, iterator end){//pasar el container como parametro no es importante aca
        std::copy( begin, end , std::ostream_iterator<float>(std::cout, " "));
        cout<<endl;
        cout<<endl;
    }
     */
    template <typename iterator>
    iterator partition(iterator left, iterator right){
        //iterator i = left - 1;
        auto i = left-1;

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

    template <typename iterator> // normalemnte para arrays
    void sort( iterator left, iterator right) {
        if (left < right) {
            if (std::distance(left, right) >= 1) {
                //iterator pivot = partition(left,right);
                auto pivot = partition(left, right);
                sort(left, pivot - 1);
                sort(pivot + 1, right);
            }
        }
    }
    template <typename Container>
    void sort(Container& cnt) {
        sort(cnt.begin(), cnt.end()-1);
        //imprimir(cnt, cnt.begin(), cnt.end());
    }


};


template <typename SortMethod>
class Sorter: private SortMethod {
public:
    template <typename Container>
    void operator()(Container cnt) {
        this->sort(cnt);
    }
    template <typename Container, typename Compare>
    void operator()(Container cnt, Compare cmp) {
        this->sort(cnt, cmp);
    }
};



#endif //SORT_METHODS_SORT_H
