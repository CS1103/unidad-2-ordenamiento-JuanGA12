//
// Created by Juan Galvez on 2019-09-27.
//

#include "Country_Trade.h"

Country_Trade::Country_Trade(const std::string &countryArea, double year, const std::string &commodity,
                             const std::string &flow, double tradeUsd) : Country_Area(countryArea), Year(year),
                                                                      Commodity(commodity), Flow(flow),
                                                                      Trade_usd(tradeUsd) {}

bool Country_Trade::operator<=(const Country_Trade &ct) {
    return (Trade_usd <= ct.Trade_usd);
}


bool Country_Trade::operator>(const Country_Trade &ct) {
    return (Trade_usd > ct.Trade_usd);
}


std::ostream& operator<< (std::ostream& out, const Country_Trade& ct){
    out<<ct.Country_Area<<" "<<ct.Year<<" "<<ct.Commodity<<" "<<ct.Flow<<" "<<ct.Trade_usd<<std::endl;
    return out;
}


