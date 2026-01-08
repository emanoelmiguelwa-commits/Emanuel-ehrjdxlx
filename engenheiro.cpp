/* * ============================================================================
 * PROJETO: VillandOS
 * AUTOR ORIGINAL: Engenheiro Manoel (Engenheiro Chefe)
 * DATA: 2026-01-07
 * LICENÇA: LIBERDADE TOTAL. Faça o que quiser, mude o que quiser.
 * REQUISITO ÚNICO: Mantenha os créditos ao autor original em suas versões.
 * ============================================================================
 * "Se divirta e faça bem o que você quiser."
 */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
#include <chrono>
#include <thread>

// --- IDEIA: VOCÊ PODE TRANSFORMAR ESTA CLASSE NUM NÚCLEO DE IA OU NUM ANIME INTERATIVO ---
// --- IDEIA: PODE SER O MOTOR DE UM VÍRUS DE TESTE OU DE UM SITE ULTRA RÁPIDO ---
class HardwareInterface {
public:
    int cpu_load;
    HardwareInterface() : cpu_load(500) {} // Carga de injeção virtual
};

struct VirtualFile {
    std::string name;
    std::string content;
    std::string metadata;
};

class VillandOS {
private:
    std::map<std::string, VirtualFile> system_drive;
    bool is_running;
    HardwareInterface hardware;

    // --- IDEIA: ESTA FUNÇÃO PODE SER MODIFICADA PARA GERAR GRÁFICOS EM 3D ---
    void print_header() {
        std::cout << "\033[1;32m" << "########################################" << "\033[0m" << std::endl;
        std::cout << "\033[1;36m" << "          VILLAND OS - CORE 1.0         " << "\033[0m" << std::endl;
        std::cout << "\033[1;33m" << "      ENGENHEIRO CHEFE: MANOEL          " << "\033[0m" << std::endl;
        std::cout << "\033[1;32m" << "########################################" << "\033[0m" << std::endl;
        std::cout << "Status: Operacional | VPU Carga: " << hardware.cpu_load << std::endl;
        std::cout << "Dica: Digite 'ajuda' para explorar." << std::endl;
    }

public:
    VillandOS() : is_running(true) {}

    void process_command(std::string input) {
        std::stringstream ss(input);
        std::string action, target, data;
        ss >> action >> target;
        std::getline(ss, data);

        // --- IDEIA: AQUI VOCÊ PODE CRIAR COMANDOS PARA CONTROLAR SUA CASA OU ROBÔS ---
        if (action == "criar") {
            if (target.empty()) {
                std::cout << "[Villand] Erro: Defina um nome para a criacao." << std::endl;
            } else {
                system_drive[target] = {target, "", "v_file"};
                std::cout << "[Villand] '" << target << "' manifestado na memoria." << std::endl;
            }
        } 
        // --- IDEIA: TRANSFORME ESTE COMANDO NUM EDITOR DE TEXTO ESTILO VIM OU NOTEPAD ---
        else if (action == "modificar") {
            if (system_drive.count(target)) {
                system_drive[target].content = data;
                std::cout << "[Villand] Codigo/Dados alterados em '" << target << "'." << std::endl;
            } else {
                std::cout << "[Villand] Alvo inexistente." << std::endl;
            }
        }
        // --- IDEIA: PODE SER USADO PARA LER CÓDIGOS FONTE DE OUTRAS LINGUAGENS ---
        else if (action == "ler") {
            if (system_drive.count(target)) {
                std::cout << "\n>>> " << target << " <<<\n" << system_drive[target].content << "\n<<< END >>>\n" << std::endl;
            } else {
                std::cout << "[Villand] Nada para ler aqui." << std::endl;
            }
        }
        // --- IDEIA: VOCÊ PODE TRANSFORMAR O VPU NUM PROCESSADOR VIRTUAL QUE MINERA CRIPTO ---
        else if (action == "vpu") {
            std::cout << "[Villand] Injetando carga de calculo trigonométrico..." << std::endl;
            for(int i=0; i<3; i++) {
                std::cout << "... [VPU " << i << "] Otimizando para Core 2 Duo ..." << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(300));
            }
            std::cout << "[Villand] Kernel sincronizado com sucesso." << std::endl;
        }
        else if (action == "ls") {
            std::cout << "[Villand] Mapeamento de Arquivos:" << std::endl;
            for (auto const& [name, file] : system_drive) {
                std::cout << " [FILE] " << name << " | Size: " << file.content.length() << " bits" << std::endl;
            }
        }
        else if (action == "ajuda") {
            std::cout << "\nComandos de Criacao Villand:" << std::endl;
            std::cout << " criar [nome]          - Gera um novo espaco" << std::endl;
            std::cout << " modificar [nome] [txt]- Insere ou altera dados" << std::endl;
            std::cout << " ler [nome]            - Exibe o conteudo do arquivo" << std::endl;
            std::cout << " ls                    - Lista os processos e arquivos" << std::endl;
            std::cout << " vpu                   - Ativa o Processador Virtual" << std::endl;
            std::cout << " sair                  - Encerra a sessao Villand" << std::endl;
        }
        else if (action == "sair") {
            is_running = false;
            std::cout << "VillandOS: A Vitoria foi alcancada. Ate logo, Engenheiro." << std::endl;
        }
        else {
            std::cout << "[Villand] Comando invalido. Liberdade nao significa erro!" << std::endl;
        }
    }

    // --- IDEIA: VOCÊ PODE CRIAR UM SISTEMA DE LOGIN OU UMA TELA DE CARREGAMENTO DE ANIME ---
    void start_system() {
        print_header();
        std::
