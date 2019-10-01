//
// Created by Juan Galvez on 2019-09-25.
//

#ifndef SORTMETHODS_HEAPSORT_H
#define SORTMETHODS_HEAPSORT_H

#endif //SORTMETHODS_HEAPSORT_H

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

namespace HeapSort{


    template<typename ContainerType>
    void heap(ContainerType &cnt, int size, int root)
    {

        int mayor = root;
        int l = 2*root + 1;
        int r = 2*root + 2;
        if (l < size && cnt.at(l) > cnt.at(mayor))
            mayor = l;
        if (r < size && cnt.at(r) > cnt.at(mayor))
            mayor = r;
        if (mayor != root)
        {
            swap(cnt.at(root), cnt.at(mayor));
            heap(cnt, size, mayor);
        }

    }

    template <typename ContainerType>
    void HeapSort(ContainerType &cnt)
    {
        int size = cnt.size();
        for (int i = size / 2 - 1; i >= 0; i--)
            heap(cnt, size, i);

        for (int i=size-1; i>=0; i--)
        {
            swap(cnt.at(0), cnt.at(i));
            heap(cnt, i, 0);
        }

    }



    /*

    template<typename Container, typename Comp>
    void heap(Container &cnt, int size, int root, const Comp cmp)
    {

        int mayor = root;
        int l = 2*root + 1;
        int r = 2*root + 2;
        if (l < size && cnt.at(l) > cnt.at(mayor))
            mayor = l;
        if (r < size && cnt.at(r) > cnt.at(mayor))
            mayor = r;
        if (mayor != root)
        {
            swap(cnt.at(root), cnt.at(mayor));
            heap(cnt, size, mayor, cmp);
        }

    }

    template <typename Container, typename Comp>
    void HeapSort(Container &cnt, const Comp cmp)
    {
        int size = cnt.size();
        for (int i = size / 2 - 1; i >= 0; i--)
            heap(cnt, size, i,cmp);

        for (int i=size-1; i>=0; i--)
        {
            swap(cnt.at(0), cnt.at(i));
            heap(cnt, i, 0,cmp);
        }

    }
     */
}
