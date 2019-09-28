//
// Created by Juan Galvez on 2019-09-27.
//

#include "Country_Trade.h"

Country_Trade::Country_Trade(const std::string &countryArea, double year, const std::string &commodity,
                             const std::string &flow, double tradeUsd) : Country_Area(countryArea), Year(year),
                                                                      Commodity(commodity), Flow(flow),
                                                                      Trade_usd(tradeUsd) {}

