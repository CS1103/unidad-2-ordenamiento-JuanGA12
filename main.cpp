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

    datos.open("Proyecto2.csv",ios::in);

    try {

        if (datos.is_open()) {

            vector<Country_Trade> cargados;
            string country_or_area;
            string year;
            string commodity;
            string flow;
            string trade_usa;

            while (datos.good()) {
                getline(datos, country_or_area, ',');
                getline(datos, year, ',');
                getline(datos, commodity, ',');
                getline(datos, flow, ',');
                getline(datos, trade_usa);
                cargados.emplace_back(Country_Trade(country_or_area, year, commodity, flow, trade_usa));
            }

            vector<string> COUNTRY;
            vector<double> YEAR;
            vector<string> COMMODITY;
            vector<string> FLOW;
            vector<double> TRADE_USD;

            for (auto i:cargados) {
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


            //SE USA 20 PORQUE PROBAMOS CON 20 FILAS
            vector<Country_Trade> VECTOR_COUNTRY_TRADE;
            for (int j = 0; j < 20; ++j) {
                auto *Country_Trade_fila = new Country_Trade(COUNTRY[j], YEAR[j], COMMODITY[j], FLOW[j], TRADE_USD[j]);
                VECTOR_COUNTRY_TRADE.push_back(*Country_Trade_fila);
            }


            //DESCOMENTAR SEGUN EL ALGORITMO QUE SE QUIERA UTILIZAR
            //ShellSort::ShellSort(VECTOR_COUNTRY_TRADE);
            //MergeSort::MergeSort(VECTOR_COUNTRY_TRADE);
            //QuickSort::QuickSort(VECTOR_COUNTRY_TRADE);
            //HeapSort::HeapSort(VECTOR_COUNTRY_TRADE);


            //IMPRIME EL VECTOR YA ORDENADO SI ES QUE SE ELIGE UN ALGORITMO DE ORDENAMIENTO, CASO CONTRARIO EL VECTOR NORMAL
            for (auto ITERADOR = VECTOR_COUNTRY_TRADE.begin(); ITERADOR != VECTOR_COUNTRY_TRADE.end(); advance(ITERADOR, 1)) {
                cout << *ITERADOR<<" ";
            }

            //LIBERAR MEMORIA
            VECTOR_COUNTRY_TRADE.clear();

        } else {
            throw logic_error("No se pudo abrir el archivo .csv");
        }
    }
    catch (std::exception& e){
        cout<<e.what()<<endl;
    }


    return 0;

}
