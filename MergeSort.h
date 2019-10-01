 //
// Created by Juan Galvez on 2019-09-25.
//

#ifndef SORTMETHODS_MERGESORT_H
#define SORTMETHODS_MERGESORT_H

#endif //SORTMETHODS_MERGESORT_H

#include <iostream>
#include <vector>
#include <iterator>
#include "Country_Trade.h"
#include <algorithm>
using namespace std;

namespace MergeSort {

    template<typename Contenedor>
    void Sort(vector<Contenedor> &left, vector<Contenedor> &right, vector<Contenedor> &bars) {
        int nL = left.size();
        int nR = right.size();
        int i = 0, j = 0, k = 0;

        while (j < nL && k < nR) {
            if (left[j] < right[k]) {
                bars[i] = left[j];
                j++;
            } else {
                bars[i] = right[k];
                k++;
            }
            i++;
        }
        while (j < nL) {
            bars[i] = left[j];
            j++;
            i++;
        }
        while (k < nR) {
            bars[i] = right[k];
            k++;
            i++;
        }
    }

    template<typename Contenedor>
    void MergeSort(vector<Contenedor> &bar) {
        if (bar.size() <= 1) return;

        int mid = bar.size() / 2;
        vector<Contenedor> left;
        vector<Contenedor> right;

        for (size_t j = 0; j < mid; j++)
            left.push_back(bar[j]);
        for (size_t j = 0; j < (bar.size()) - mid; j++)
            right.push_back(bar[mid + j]);

        MergeSort(left);
        MergeSort(right);
        Sort(left, right, bar);
    }


    /*


    template<typename Contenedor, typename Comp>
    void Sort(vector<Contenedor> &left, vector<Contenedor> &right, vector<Contenedor> &bars, const Comp cmp) {
        int nL = left.size();
        int nR = right.size();
        int i = 0, j = 0, k = 0;

        while (j < nL && k < nR) {
            if (left[j] < right[k]) {
                bars[i] = left[j];
                j++;
            } else {
                bars[i] = right[k];
                k++;
            }
            i++;
        }
        while (j < nL) {
            bars[i] = left[j];
            j++;
            i++;
        }
        while (k < nR) {
            bars[i] = right[k];
            k++;
            i++;
        }
    }

    template<typename Contenedor, typename Comp>
    void MergeSort(vector<Contenedor> &bar, const Comp cmp) {
        if (bar.size() <= 1) return;

        int mid = bar.size() / 2;
        vector<Contenedor> left;
        vector<Contenedor> right;

        for (size_t j = 0; j < mid; j++)
            left.push_back(bar[j]);
        for (size_t j = 0; j < (bar.size()) - mid; j++)
            right.push_back(bar[mid + j]);

        MergeSort(left, cmp);
        MergeSort(right, cmp);
        Sort(left, right, bar, cmp);
    }
     */
}