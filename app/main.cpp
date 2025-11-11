#include <iostream>
#include "crow.h"
#include <fstream>
using namespace std;


int main(){
    crow::SimpleApp app; // criando uma instância do aplicativo
    CROW_ROUTE(app, "/")([]() {
        try{
            cout << "Página inicial carregada..." << endl;
            return "Olá, bem vindo a minha página inicial!";
        }
        catch(...){
            runtime_error("Erro ao carregar a página.");
            cout << "Erro ao carregar a página." << endl;
        }
    });
    app.port(18080).multithreaded().run(); // iniciando o servidor na porta 18080
}
