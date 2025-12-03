#include <iostream>
#include "crow.h"
#include <stdexcept>
#include "./receiveJson/receiveJson.hpp"
#ifndef REQUEST_ACCESS_HPP
#define REQUEST_ACCESS_HPP
using namespace std;
void mainRoute(crow::SimpleApp& app);
#endif // ROUTES_HPP