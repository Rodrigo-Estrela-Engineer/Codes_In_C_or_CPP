#include <iostream>
#include "crow.h"
#include <fstream>
#include "./Routes/requestAccess/requestAccess.hpp"
using namespace std;


int main(){
    crow::SimpleApp app; // criando uma instância do aplicativo
        try{
            mainRoute(app);
            cout << "Servidor iniciado na porta 18080" << endl;
        }
        catch(const exception& e){
            cerr << "erro ao carregar a página: " << e.what() << endl;
            runtime_error("Erro ao carregar a página.");
        }
    app.port(18080).multithreaded().run(); // iniciando o servidor na porta 18080
}
