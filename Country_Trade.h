//
// Created by Juan Galvez on 2019-09-27.
//

#ifndef SORTMETHODS_COUNTRY_TRADE_H
#define SORTMETHODS_COUNTRY_TRADE_H

#include <iostream>
#include <string>


class Country_Trade {
public:
    std::string Country_Area;
    double Year;
    std::string Commodity;
    std::string Flow;
    double Trade_usd;


    Country_Trade(const std::string &countryArea, double year, const std::string &commodity, const std::string &flow, double tradeUsd);

    //PARA LECTURA DEL ARCHIVO
    Country_Trade (std::string v, std::string Year_ , std::string c, std::string f, std::string Trade_usd_){
        Country_Area = v;
        Year = std::stod(Year_);
        Commodity = c;
        Flow = f;
        Trade_usd = std::stod(Trade_usd_);
    };

    bool operator <=(const Country_Trade & ct);
    bool operator >(const Country_Trade & ct);
    bool operator <(const Country_Trade & ct);

    // PARA PODER "IMPRIMIR" OBJETOS
    friend std::ostream& operator << (std::ostream & out, const Country_Trade & ct);

   /* const std::string &getCountryArea() const;

    void setCountryArea(const std::string &countryArea);

    double getYear() const;

    void setYear(double year);

    const std::string &getCommodity() const;

    void setCommodity(const std::string &commodity);

    const std::string &getFlow() const;

    void setFlow(const std::string &flow);

    double getTradeUsd() const;

    void setTradeUsd(double tradeUsd);

    Country_Trade operator <= (const Country_Trade& j);
*/
   // GETTERS Y SETTERS NO NECESARIOS
};


#endif //SORTMETHODS_COUNTRY_TRADE_H
