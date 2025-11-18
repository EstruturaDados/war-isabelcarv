#include <stdio.h>

int main() {
    // Vetor estático com 5 elementos para armazenar os nomes dos territórios
    char territorios[5][30] = {
        "Território do Norte",
        "Território do Sul",
        "Território do Leste",
        "Território do Oeste",
        "Território Central"
    };

    // Exibindo os territórios que foram criados
    printf("Lista de Territórios:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, territorios[i]);
    }

    return 0;
}
#include <stdio.h>

#define QTDE_TERRITORIOS 5

// Estrutura do território
typedef struct {
    char nome[30];
    char corExercito[20];
    int numeroTropas;
} Territorio;

int main() {
    Territorio territorios[QTDE_TERRITORIOS];

    // Cadastrando os territórios
    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i + 1);

        printf("Nome do território: ");
        fgets(territorios[i].nome, 30, stdin);

        printf("Cor do exército: ");
        fgets(territorios[i].corExercito, 20, stdin);

        printf("Número de tropas: ");
        scanf("%d", &territorios[i].numeroTropas);
        getchar();
    }

    // Exibição dos dados que já estão cadastrados
    printf("\n===== TERRITÓRIOS CADASTRADOS =====\n");
    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s", territorios[i].nome);
        printf("Cor do exército: %s", territorios[i].corExercito);
        printf("Número de tropas: %d\n", territorios[i].numeroTropas);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define MAX_NOME 30
#define MAX_COR 20

typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int numeroTropas;
} Territorio;

int main() {
    // Exemplo de dados cadastrados
    Territorio territorios[MAX_TERRITORIOS] = {
        {"Território do Norte", "Azul", 120},
        {"Território do Sul", "Vermelho", 95},
        {"Território do Leste", "Verde", 80},
        {"Território do Oeste", "Amarelo", 110},
        {"Território Central", "Preto", 150}
    };

    printf("Estado Atual do Mapa:\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf(" Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].corExercito);
        printf("Número de Tropas: %d\n", territorios[i].numeroTropas);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    int tropas;

    printf("Digite o nome do território: ");
    fgets(nome, sizeof(nome), stdin);
   
    printf("Digite o número de tropas: ");
    scanf("%d", &tropas);

    printf("\n Território: %s\n", nome);
    printf(" Tropas: %d\n", tropas);

    return 0;
}
#include <stdio.h>

#define QTDE_TERRITORIOS 5

typedef struct {
    char nome[30];
    char corExercito[20];
    int tropas;
} Territorio;

int main() {
    Territorio territ[QTDE_TERRITORIOS];

    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        printf("Nome do território: ");
        fgets(territ[i].nome, sizeof(territ[i].nome), stdin);

        printf("Cor do exército dominante: ");
        fgets(territ[i].corExercito, sizeof(territ[i].corExercito), stdin);

        printf("Número de tropas: ");
        scanf("%d", &territ[i].tropas);
        
    }

    printf("\n===== DADOS DOS TERRITÓRIOS =====\n");
    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s", territ[i].nome);
        printf("Cor do exército: %s", territ[i].corExercito);
        printf("Tropas: %d\n", territ[i].tropas);
    }

    return 0;
}
// Nivel aventureiro
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define MAX_NOME 30
#define MAX_COR 20

typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int numeroTropas;
} Territorio;

int main() {
    // Alocação dinâmica com calloc
    Territorio *territorios = calloc(MAX_TERRITORIOS,);
    if (territorios == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf(" Cadastrando 5 Territórios:\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n Território %d:\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, MAX_NOME, stdin);
        territorios[i].nome[(territorios[i].nome, "\n")] = '\0';

        printf("Cor do Exército atual: ");
        fgets(territorios[i].corExercito, MAX_COR, stdin);
        territorios[i].corExercito[(territorios[i].corExercito, "\n")] = '\0';

        printf("Número de Tropas: ");
        scanf("%d", &territorios[i].numeroTropas);
        
    }

    printf("\n Estado Atual do Mapa:\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf(" Nome: %s\n", territorios[i].nome);
        printf(" Cor do Exército: %s\n", territorios[i].corExercito);
        printf(" Número de Tropas: %d\n", territorios[i].numeroTropas);
    }

    // Liberando a memória já alocada
    free(territorios);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char nome[30];
    char corExercito[20];
    int tropas;
} Territorio;

// Criando função para simular o ataque entre dois territórios
void simularAtaque(Territorio *atacante, Territorio *defensor) {
    printf("\n=== INICIANDO A BATALHA ===\n");
    printf("%s (%d tropas) ATACA %s (%d tropas)\n\n",
           atacante->nome, atacante->tropas,
           defensor->nome, defensor->tropas);

    srand(time(NULL));

    while (atacante->tropas > 1 && defensor->tropas > 0) {
        int dadoAtacante = rand() % 6 + 1;  // 1 a 6
        int dadoDefensor = rand() % 6 + 1;  // 1 a 6

        printf("Dado atacante: %d | Dado defensor: %d\n", dadoAtacante, dadoDefensor);

        if (dadoAtacante > dadoDefensor) {
            defensor->tropas--;
            printf("Defensor perdeu 1 tropa! Tropas restantes: %d\n", defensor->tropas);
        } else {
            atacante->tropas--;
            printf("Atacante perdeu 1 tropa! Tropas restantes: %d\n", atacante->tropas);
        }

        printf("------------------------------------\n");
    }

    printf("\n=== FIM DA BATALHA ===\n");

    if (defensor->tropas == 0) {
        printf("%s Conseguiu conquistar o território de %s!\n",
               atacante->nome, defensor->nome);
    } else {
        printf("%s NÃO houve sucesso ao conquistar o território %s.\n",
               atacante->nome, defensor->nome);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char nome[30];
    char corExercito[20];
    int tropas;
} Territorio;

int rolarDado() {
    return rand() % 6 + 1; // Número entre 1 e 6
}

// Simula ataques entre dois territórios usando os dados 
void batalha(Territorio *atacante, Territorio *defensor) {
    printf("\n=== BATALHA INICIADA ===\n");

    srand(time(NULL));

    while (atacante->tropas > 1 && defensor->tropas > 0) {
        int dadoA = rolarDado();
        int dadoD = rolarDado();

        printf("%s rolou: %d | %s rolou: %d\n",
               atacante->nome, dadoA,
               defensor->nome, dadoD);

        if (dadoA > dadoD) {
            defensor->tropas--;
            printf("Defensor perdeu 1 tropa! Tropas restantes: %d\n", defensor->tropas);
        } else {
            atacante->tropas--;
            printf("Atacante perdeu 1 tropa! Tropas restantes: %d\n", atacante->tropas);
        }
    }

    printf("\n=== RESULTADO ===\n");

    if (defensor->tropas == 0) {
        printf("%s conquistou o território de %s!\n",
               atacante->nome, defensor->nome);
    } else {
        printf("%s não conseguiu conquistar o território %s.\n",
               atacante->nome, defensor->nome);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 30
#define MAX_COR 20

typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int numeroTropas;
} Territorio;

simularBatalha(Territorio *atacante, Territorio *defensor) {
    if (atacante->numeroTropas <= 0) {
        printf(" %s não tem tropas suficientes para atacar.\n", atacante->nome);
        return;
    }
    if (defensor->numeroTropas <= 0) {
        printf(" %s já foi derrotado.\n", defensor->nome);
        return;
    }

    printf("\n Batalha entre %s (atacante) e %s (defensor):\n", atacante->nome, defensor->nome);

    // Gerar força de ataque e defesa aleatórias
    int forcaAtaque = rand() % 50 + 1;   // 1 a 50
    int forcaDefesa = rand() % 50 + 1;   // 1 a 50

    printf(" Força de Ataque: %d\n", forcaAtaque);
    printf(" Força de Defesa: %d\n", forcaDefesa);

    // Calculando o  resultado da batalha atual
    if (forcaAtaque > forcaDefesa) {
        int perdas = rand() % 20 + 5; // defensor perde 5 a 25 tropas
        defensor->numeroTropas -= perdas;
        if (defensor->numeroTropas < 0) defensor->numeroTropas = 0;
        printf(" %s perdeu %d tropas!\n", defensor->nome, perdas);
    } else {
        int perdas = rand() % 15 + 5; // atacante perde 5 a 20 tropas
        atacante->numeroTropas -= perdas;
        if (atacante->numeroTropas < 0) atacante->numeroTropas = 0;
        printf(" %s resistiu! %s perdeu %d tropas.\n", defensor->nome, atacante->nome, perdas);
    }

    // Estado atual da batalha
    printf("\n Tropas restantes:\n");
    printf("- %s: %d tropas\n", atacante->nome, atacante->numeroTropas);
    printf("- %s: %d tropas\n", defensor->nome, defensor->numeroTropas);
}

int main() {
    srand(time(NULL)); // Inicializa números aleatórios

    // Exemplo de territórios
    Territorio 1 = {"Território Norte", "Azul", 100};
    Territorio 2 = {"Território Sul", "Vermelho", 90};

    // Simular batalha
    simularBatalha(&1, &2);

    return 0;
}
//nivel mestre
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 30
#define MAX_COR 20

typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int numeroTropas;
} Territorio;

Territorio* criarTerritorios(int qtd) {
    Territorio* t = calloc(qtd, sizeof(Territorio));
    if (t) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    return t;
}
void cadastrarTerritorios(Territorio* t, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\n Território %d:\n", i + 1);

        printf("Nome: ");
        fgets(t[i].nome, MAX_NOME, stdin);
        t[i].nome[(t[i].nome, "\n")] = '\0';

        printf("Cor do Exército: ");
        fgets(t[i].corExercito, MAX_COR, stdin);
        t[i].corExercito[(t[i].corExercito, "\n")] = '\0';

        printf("Número de Tropas: ");
        scanf("%d", &t[i].numeroTropas);
        getchar();
    }
}

// Exibe o estado atual do mapa
void exibirMapa(Territorio* t, int qtd) {
    printf("\n Estado Atual do Mapa:\n");
    for (int i = 0; i < qtd; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf(" Nome: %s\n", t[i].nome);
        printf(" Cor do Exército: %s\n", t[i].corExercito);
        printf("Tropas: %d\n", t[i].numeroTropas);
    }
}

// Simulando uma batalha entre dois territórios
void simularBatalha(Territorio* atacante, Territorio* defensor) {
    if (atacante->numeroTropas <= 0) {
        printf(" %s não existe alvos de ataque.\n", atacante->nome);
        return;
    }
    if (defensor->numeroTropas <= 0) {
        printf(" %s território já foi derrotado.\n", defensor->nome);
        return;
    }

    int forcaAtaque = rand() % 50 + 1;
    int forcaDefesa = rand() % 50 + 1;

    printf("\n Batalha: %s vs %s\n", atacante->nome, defensor->nome);
    printf(" Ataque: %d  Defesa: %d\n", forcaAtaque, forcaDefesa);

    if (forcaAtaque > forcaDefesa) {
        int perdas = rand() % 20 + 5;
        defensor->numeroTropas -= perdas;
        if (defensor->numeroTropas < 0) defensor->numeroTropas = 0;
        printf(" %s perdeu %d tropas!\n", defensor->nome, perdas);
    } else {
        int perdas = rand() % 15 + 5;
        atacante->numeroTropas -= perdas;
        if (atacante->numeroTropas < 0) atacante->numeroTropas = 0;
        printf(" %s resistiu! %s perdeu %d tropas.\n", defensor->nome, atacante->nome, perdas);
    }
}

int main() {
    int qtd = 5;

    Territorio* territorios = criarTerritorios(qtd);
    cadastrarTerritorios(territorios, qtd);
    exibirMapa(territorios, qtd);

    // Exemplo de batalha entre território 1 e 2
    simularBatalha(&territorios[0], &territorios[1]);

    free(territorios);
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX_NOME 30
#define MAX_COR 20

typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int numeroTropas;
} Territorio;

// Função que destoí todas as tropas do exército verde
void destruirExercitoVerde(Territorio* t, int qtd) {
    for (int i = 0; i < qtd; i++) {
        if (strcmp(t[i].corExercito, "Verde") == 0 || strcmp(t[i].corExercito, "verde") == 0) {
            printf(" Exército verde destruído em %s!\n", t[i].nome);
            t[i].numeroTropas = 0;
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NOME 30
#define MAX_COR 20
#define TOTAL_TERRITORIOS 5

typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int numeroTropas;
} Territorio;

void simularBatalha(Territorio *atacante, Territorio *defensor) {
    if (atacante->numeroTropas <= 0 || defensor->numeroTropas <= 0) return;

    int forcaAtaque = rand() % 50 + 1;
    int forcaDefesa = rand() % 50 + 1;

    if (forcaAtaque > forcaDefesa) {
        int perdas = rand() % 20 + 10;
        defensor->numeroTropas -= perdas;
        if (defensor->numeroTropas < 0) defensor->numeroTropas = 0;
    } else {
        int perdas = rand() % 15 + 5;
        atacante->numeroTropas -= perdas;
        if (atacante->numeroTropas < 0) atacante->numeroTropas = 0;
    }
}

void conquistarTerritorio(Territorio *atacante, Territorio *defensor) {
    if (defensor->numeroTropas == 0) {
        printf("🏴 Território %s foi conquistado por %s!\n", defensor->nome, atacante->nome);
        strcpy(defensor->corExercito, atacante->corExercito);
        defensor->numeroTropas = atacante->numeroTropas / 2; // transfere metade das tropas
    }
}

int main() {
    srand(time(NULL));

    Territorio territorios[TOTAL_TERRITORIOS] = {
        {"Território do Norte", "Azul", 100},
        {"Território do Sul", "Verde", 80},
        {"Território doLeste", "Vermelho", 90},
        {"Território do Oeste", "Amarelo", 70},
        {"Território Central", "Preto", 60}
    };

    Territorio *atacante = &territorios[0]; // Norte como atacante

    // Atacar 3 territórios
    for (int i = 1; i <= 3; i+) {
        printf("\n Ataque de %s contra %s\n", atacante->nome, territorios[i].nome);
        simularBatalha(atacante, &territorios[i]);
        conquistarTerritorio(atacante, &territorios[i]);
    }

    printf("\n Estado Final do Mapa:\n");
    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("%s - Cor: %s - Tropas: %d\n", territorios[i].nome, territorios[i].corExercito, territorios[i].numeroTropas);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTDE_TERRITORIOS 5

typedef struct {
    char nome[30];
    char corExercito[20];
    int tropas;
} Territorio;

// Função para rolar dados de 1 a 5
int rolarDado() {
    return rand() % 5 + 1;
}

// Função para cadastrar territórios
void cadastrarTerritorios(Territorio t[]) {
    getchar(); // limpar buffer antes de fgets

    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i + 1);

        printf("Nome: ");
        fgets(t[i].nome, 30, stdin);

        printf("Cor do Exército: ");
        fgets(t[i].corExercito, 20, stdin);

        printf("Número de tropas: ");
        scanf("%d", &t[i].tropas);
        getchar(); // limpar ENTER
    }
}

// Função para mostrar os territórios cadastrados
void mostrarTerritorios(Territorio t[]) {
    printf("\n===== TERRITÓRIOS =====\n");

    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s", t[i].nome);
        printf("Cor do Exército: %s", t[i].corExercito);
        printf("Tropas: %d\n", t[i].tropas);
    }
}

// Função para simular batalha
void batalha(Territorio *atacante, Territorio *defensor) {
    printf("\n=== BATALHA INICIADA ===\n");

    while (atacante->tropas > 1 && defensor->tropas > 0) {
        int dadoA = rolarDado();
        int dadoD = rolarDado();

        printf("%s rolou %d | %s rolou %d\n",
               atacante->nome, dadoA,
               defensor->nome, dadoD);

        if (dadoA > dadoD) {
            defensor->tropas--;
            printf("Defensor perdeu 1 tropa! (%d restantes)\n", defensor->tropas);
        } else {
            atacante->tropas--;
            printf("Atacante perdeu 1 tropa! (%d restantes)\n", atacante->tropas);
        }

        printf("-----------------------------\n");
    }

    if (defensor->tropas == 0) {
        printf("\n%s CONQUISTOU o território de %s!\n",
               atacante->nome, defensor->nome);
    } else {
        printf("\n%s NÃO conquistou o território %s.\n",
               atacante->nome, defensor->nome);
    }
}

// Menu de ataque
void menuAtaque(Territorio t[]) {
    int a, d;

    printf("\nEscolha o número do território ATACANTE (1 a 5): ");
    scanf("%d", &a);

    printf("Escolha o número do território DEFENSOR (1 a 5): ");
    scanf("%d", &d);

    if (a < 1 || a > 5 || d < 1 || d > 5 || a == d) {
        printf("\n Opção inválida!\n");
        return;
    }

}

int main() {
    srand(time(NULL));

    Territorio territorios[QTDE_TERRITORIOS];
    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar os territórios\n");
        printf("2 - Mostrar ps territórios\n");
        printf("3 - Simular ataque nas tropas\n");
        printf("4 - Sair da página atual\n");
        printf("Faça sua Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarTerritorios(territorios);
                break;
            case 2:
                mostrarTerritorios(territorios);
                break;
            case 3:
                menuAtaque(territorios);
                break;
            case 4:
                printf("\nEncerrando programa...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
        }

    } while (opcao != 4);

    return 0;
}
void inicializarTerritorios(Territorio t[]) {

    // Nomes pré-definidos
    char nomes[5][30] = {
        "Tropa dos Wildcats\n",
        "Tropa dos semideuses\n",
        "Tropas dos tributos\n",
        "Tropas dos heróis\n",
        "Tropa de terabitía\n"
    };

    // Cores do exército
    char cores[5][20] = {
        "Vermelho\n",
        "Azul\n",
        "Verde\n",
        "Amarelo\n",
        "Preto\n"
    };

    // Tropas iniciais
    int tropasIniciais[5] = {10, 8, 12, 9, 11};

    for (int i = 0; i < QTDE_TERRITORIOS; i++) {
    
        snprintf(t[i].nome, 30, "%s", nomes[i]);
        snprintf(t[i].corExercito, 20, "%s", cores[i]);
        t[i].tropas = tropasIniciais[i];
    }

    printf("\nTerritórios inicializados automaticamente com êxito!\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para simular ataque
void atacar() {
    int forcaAtaque = rand() % 50 + 1;
    int forcaDefesa = rand() % 50 + 1;

    printf("\Simulando o ataque...\n");
    printf("Força de Ataque: %d\n", forcaAtaque);
    printf("Força de Defesa: %d\n", forcaDefesa);

    if (forcaAtaque > forcaDefesa) {
        printf(" Ataque bem-sucedido!\n");
    } else {
        printf("Ataque falhou. Coloque mais gente nessa tropa!\n");
    }
}

// Função para verificar como está sendo a missão
void verificarMissao() {
    printf("\n Missão atual:\n");
    printf("- Conquistar 3 territórios inimigos.\n");
    printf("- Eliminar o exército verde.\n");
    printf("- Defender o território central.\n");
}

// Menu principal
void menuPrincipal() {
    int opcao;
    do {
        printf("\nMENU PRINCIPAL:\n");
        printf("1. Atacar\n");
        printf("2. Verificar a Missão\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // limpa buffer

        switch (opcao) {
            case 1:
                atacar();
                break;
            case 2:
                verificarMissao();
                break;
            case 3:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);
}

int main() {
    srand(time(NULL)); // Inicializa números aleatórios
    menuPrincipal();
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX_NOME 30
#define MAX_COR 20
#define TOTAL_TERRITORIOS 5

typedef struct {
    char nome[MAX_NOME];
    char corExercito[MAX_COR];
    int numeroTropas;
    int conquistado; // 1 se foi conquistado, 0 se não
} Territorio;

// Verifica se a missão foi vencida
int verificarVitoria(Territorio* t, int qtd) {
    int conquistados = 0;
    int verdeEliminado = 1;
    int centralDefendido = 0;

    for (int i = 0; i < qtd; i++) {
        if (t[i].conquistado) {
            conquistados++;
        }

        if (strcmp(t[i].corExercito, "Verde") == 0 || strcmp(t[i].corExercito, "verde") == 0) {
            if (t[i].numeroTropas > 0) {
                verdeEliminado = 0;
            }
        }

        if (strcmp(t[i].nome, "Território Central") == 0) {
            if (t[i].numeroTropas > 0) {
                centralDefendido = 1;
            }
        }
    }

    if (conquistados >= 3 && verdeEliminado && centralDefendido) {
        return 1; // Missão vencida
    } else {
        return 0; // Missão não cumprida
    }
}
int main() {
    Territorio territorios[TOTAL_TERRITORIOS] = {
        {"Território do Norte", "Azul", 100, 1},
        {"Território do Sul", "Verde", 0, 1},
        {"Território do Leste", "Vermelho", 90, 1},
        {"Território do Oeste", "Amarelo", 70, 0},
        {"Território Central", "Preto", 120, 0}
    };

    if (verificarVitoria(territorios, TOTAL_TERRITORIOS)) {
        printf("\n Missão cumprida! Você venceu!\n");
    } else {
        printf("\n Missão ainda não foi concluída.\n");
    }

    return 0;
}