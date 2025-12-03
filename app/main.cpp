#include <iostream>
#include "crow.h"
#include <fstream>
#include "./Routes/requestAccess/requestAccess.hpp"
#include "./Middlewares/Auth/Auth.h"
#include "./cpp-dotenv/include/dotenv.h" 
using namespace std;
// using namespace dotenv;
string GLOBAL_EXPECTED_API_KEY;
const string env_path = "./.env";


int main(){
    try {
        env.load_dotenv(env_path); 
        
        GLOBAL_EXPECTED_API_KEY = env["API_KEY"];

        if (GLOBAL_EXPECTED_API_KEY.empty()) {
            cerr << "ERRO: A chave API_KEY não foi encontrada ou está vazia no arquivo .env" << endl;
        }
        else{
             cout << "Carregando .env do caminho absoluto: " << endl;
        }

    } catch (const exception& e) {
        cerr << "Erro ao carregar o arquivo .env: " << e.what() << endl;
        return 1; 
    }
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
