


## Projeto Principal: SecureRequest Gateway (Segurança e Comunicação)

Este é um projeto focado na criação de uma API que atua em **segurança e comunicação entre sistemas**.

Estou utilizando este projeto como um laboratório para explorar práticas modernas de desenvolvimento, integração contínua, alto desempenho e escalabilidade, alinhando a teoria com a prática do mercado de engenharia de software.

### 🔧 Tecnologias Envolvidas:

*   **C++:** A linguagem principal, explorando recursos modernos e eficientes.
*   **CMake:** Um poderoso sistema de automação de *build* que facilita a organização de projetos e a compatibilidade multiplataforma.
*   **Crow:** Um *framework* moderno e extremamente rápido para criação de serviços web HTTP e WebSocket em C++, com uma sintaxe de roteamento intuitiva.
*   **Estrutura Modular de APIs:** Foco na organização e manutenção do código.
*   **Integração com Redes e Sistemas Distribuídos:** Aplicação prática de conceitos de comunicação e segurança.

⚠️ *Esta API ainda está em fase de estudo e experimentação, sendo utilizada como ambiente de aprendizado e aprimoramento contínuo.*

---

### 🚀 Como Iniciar a API (Instruções de Build)

Para compilar e executar o projeto localmente, utilize os seguintes comandos a partir da raiz do repositório:

```bash
# 1. Configura o ambiente de build com o CMake
cmake -S . -B build

# 2. Compila o projeto
cmake --build build

# 3. Executa o aplicativo compilado (o caminho pode variar dependendo da estrutura exata do seu projeto)
./build/app/app
