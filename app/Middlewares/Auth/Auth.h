#include <iostream>
#include "crow.h"
#include "../cpp-dotenv/include/dotenv.h" 
#ifndef AUTH_H
#define AUTH_H
using namespace std;
using namespace dotenv;

extern string GLOBAL_EXPECTED_API_KEY;


bool verifyAccessPermission(crow::request& req)
{
    
    const string expectedKey = GLOBAL_EXPECTED_API_KEY;
    try{
        const string providedApiKey = req.get_header_value("X-API-Key");
        if(!providedApiKey.empty() && providedApiKey == expectedKey)
        {
            cout << "Acesso permitido." << endl;
            return true;
        }
    }
     catch(const exception& e)
    {
        cerr << "Erro ao verificar a chave API" << e.what() << endl;
        return false;
    }
};

struct AuthMiddleware
{
    struct context
    {
    };
    
    void before_handle(crow::request& req, crow::response& res, context& ctx)
    {
        if(!verifyAccessPermission(req))
        {
            res.code = 401;
            res.body = "Acesso negado: Chave API inválida.";
            res.end();
        }
        else{
            res.code = 200;
            res.body = "Acesso permitido.";
            res.end();
        }
    }
};
#endif