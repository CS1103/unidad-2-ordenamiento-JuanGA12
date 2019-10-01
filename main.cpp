//#define CATCH_CONFIG_MAIN
//#include "catch.hpp"
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <vector>
#include "QuickSort.h"
#include "MergeSort.h"
#include "HeapSort.h"
#include "ShellSort.h"
#include <string.h>
#include "Country_Trade.h"
#include <stdlib.h>
#include <string.h>

using namespace std;
int main() {

    ifstream datos;
    vector<Country_Trade> cargados;
    string country_or_area;
    string year;
    string commodity;
    string flow;
    string trade_usa;
    datos.open("Proyecto2.csv",ios::in);
    while(datos.good()){
        getline(datos,country_or_area,',');
        getline(datos,year,',');
        getline(datos,commodity,',');
        getline(datos,flow, ',');
        getline(datos,trade_usa);
        cargados.emplace_back(Country_Trade(country_or_area,year,commodity,flow,trade_usa));
    }

    vector<string> COUNTRY;
    vector<double> YEAR;
    vector<string> COMMODITY;
    vector<string> FLOW;
    vector<double> TRADE_USD;

    for(auto i:cargados){
        COUNTRY.push_back(i.Country_Area);
        YEAR.push_back(i.Year);
        COMMODITY.push_back(i.Commodity);
        FLOW.push_back(i.Flow);
        TRADE_USD.push_back(i.Trade_usd);
    }
    /*
    for(auto x = country.begin(); x != country.end(); advance(x,1)){
        cout << *x<<" ";
    }
    cout << endl;
    for(auto x = yearr.begin(); x != yearr.end(); advance(x,1)){
        cout << *x<<" ";
    }
    cout << endl;
    for(auto x = como.begin(); x != como.end(); advance(x,1)){
        cout << *x<<" ";
    }
    cout << endl;
    for(auto x = floww.begin(); x != floww.end(); advance(x,1)){
        cout << *x<<" ";
    }
    cout << endl;
    for(auto x = TRADE_USD.begin(); x != TRADE_USD.end(); advance(x,1)){
        cout << *x<<" ";
    }
    */
    Country_Trade fila1(COUNTRY[0], YEAR[0], COMMODITY[0], FLOW[0], TRADE_USD[0]);
    Country_Trade fila2(COUNTRY[1], YEAR[1], COMMODITY[1], FLOW[1], TRADE_USD[1]);
    Country_Trade fila3(COUNTRY[2], YEAR[2], COMMODITY[2], FLOW[2], TRADE_USD[2]);
    Country_Trade fila4(COUNTRY[3], YEAR[3], COMMODITY[3], FLOW[3], TRADE_USD[3]);
    Country_Trade fila5(COUNTRY[4], YEAR[4], COMMODITY[4], FLOW[4], TRADE_USD[4]);
    Country_Trade fila6(COUNTRY[5], YEAR[5], COMMODITY[5], FLOW[5], TRADE_USD[5]);
    Country_Trade fila7(COUNTRY[6], YEAR[6], COMMODITY[6], FLOW[6], TRADE_USD[6]);
    Country_Trade fila8(COUNTRY[7], YEAR[7], COMMODITY[7], FLOW[7], TRADE_USD[7]);
    Country_Trade fila9(COUNTRY[8], YEAR[8], COMMODITY[8], FLOW[8], TRADE_USD[8]);
    Country_Trade fila10(COUNTRY[9], YEAR[9], COMMODITY[9], FLOW[9], TRADE_USD[9]);
    Country_Trade fila11(COUNTRY[10], YEAR[1], COMMODITY[10], FLOW[10], TRADE_USD[10]);
    Country_Trade fila12(COUNTRY[11], YEAR[11], COMMODITY[11], FLOW[11], TRADE_USD[11]);
    Country_Trade fila13(COUNTRY[12], YEAR[12], COMMODITY[12], FLOW[12], TRADE_USD[12]);
    Country_Trade fila14(COUNTRY[13], YEAR[13], COMMODITY[13], FLOW[13], TRADE_USD[13]);
    Country_Trade fila15(COUNTRY[14], YEAR[14], COMMODITY[14], FLOW[14], TRADE_USD[14]);
    Country_Trade fila16(COUNTRY[15], YEAR[15], COMMODITY[15], FLOW[15], TRADE_USD[15]);
    Country_Trade fila17(COUNTRY[16], YEAR[16], COMMODITY[16], FLOW[16], TRADE_USD[16]);
    Country_Trade fila18(COUNTRY[17], YEAR[17], COMMODITY[17], FLOW[17], TRADE_USD[17]);
    Country_Trade fila19(COUNTRY[18], YEAR[18], COMMODITY[18], FLOW[18], TRADE_USD[18]);
    Country_Trade fila20(COUNTRY[19], YEAR[19], COMMODITY[19], FLOW[19], TRADE_USD[19]);

    vector<Country_Trade>VECTOR_COUNTRY_TRADE;
    VECTOR_COUNTRY_TRADE.push_back(fila1);
    VECTOR_COUNTRY_TRADE.push_back(fila2);
    VECTOR_COUNTRY_TRADE.push_back(fila3);
    VECTOR_COUNTRY_TRADE.push_back(fila4);
    VECTOR_COUNTRY_TRADE.push_back(fila5);
    VECTOR_COUNTRY_TRADE.push_back(fila6);
    VECTOR_COUNTRY_TRADE.push_back(fila7);
    VECTOR_COUNTRY_TRADE.push_back(fila8);
    VECTOR_COUNTRY_TRADE.push_back(fila9);
    VECTOR_COUNTRY_TRADE.push_back(fila10);
    VECTOR_COUNTRY_TRADE.push_back(fila11);
    VECTOR_COUNTRY_TRADE.push_back(fila12);
    VECTOR_COUNTRY_TRADE.push_back(fila13);
    VECTOR_COUNTRY_TRADE.push_back(fila14);
    VECTOR_COUNTRY_TRADE.push_back(fila15);
    VECTOR_COUNTRY_TRADE.push_back(fila16);
    VECTOR_COUNTRY_TRADE.push_back(fila17);
    VECTOR_COUNTRY_TRADE.push_back(fila18);
    VECTOR_COUNTRY_TRADE.push_back(fila19);
    VECTOR_COUNTRY_TRADE.push_back(fila20);

    //DESCOMENTAR SEGUN EL ALGORITMO QUE SE QUIERA UTILIZAR

    //PARA UN ATRIBUTO (TRADE_USD)
    //ShellSort::ShellSort(VECTOR_COUNTRY_TRADE);
    //MergeSort::MergeSort(VECTOR_COUNTRY_TRADE);
    //QuickSort::QuickSort(VECTOR_COUNTRY_TRADE);
    //HeapSort::HeapSort(VECTOR_COUNTRY_TRADE);



    //IMPRIME EL VECTOR YA ORDENADO

    for (auto ITERADOR = VECTOR_COUNTRY_TRADE.begin(); ITERADOR != VECTOR_COUNTRY_TRADE.end(); advance(ITERADOR,1)){
        cout << *ITERADOR <<" ";
    }


    return 0;

}
