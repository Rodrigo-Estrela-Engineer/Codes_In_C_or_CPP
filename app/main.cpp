#include <iostream>
#include "crow.h"
using namespace std;


int main(){
    crow::SimpleApp app; // criando uma instância do aplicativo
    CROW_ROUTE(app, "/")([]() {
        return "Hello, World!";
    });
    app.port(18080).multithreaded().run(); // iniciando o servidor na porta 18080
}
