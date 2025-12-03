#include <iostream>
#include "crow.h"
#include "./requestAccess.hpp"
#include <stdexcept>

using namespace std;

void mainRoute(crow::SimpleApp& app)
{
    CROW_ROUTE(app, "/")([](){
        try{
            cout << "Pagina inicial" << endl;
            return "Voce esta na inicial";
        }
        catch(const exception& e){
            cerr << "erro ao carregar a página: " << e.what() << endl;
            return "Erro ao carregar a página";
        }
    });
}