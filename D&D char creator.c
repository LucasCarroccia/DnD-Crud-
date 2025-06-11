#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int criarPersonagem()
{
    //Função criar personagem, começa declarando as variáveis que serão as características do personagem a ser criado
    char personagem[100],sexo[10], raca[20], classe[20], alinhamento[35], lore[280];
    //Variáveis de opção ao navegar os menus
    int raca_op, classe_op, alinhamento_op;
    //ponteiro para controle dos arquivos
    FILE * fptr;

    //Pede nome do personagem
    printf("\n");
    printf("Insira o nome do personagem: ");

    fgets(personagem, 100, stdin);

    personagem[strcspn(personagem, "\n")] = 0;

    //Utilizando fopen, o programa cria um arquivo utilizando o nome do personagem
    fptr = fopen(personagem, "w");
        if (fptr == NULL){
            printf("Erro ao criar personagem!\n");
            return 1;
        }
    //Utiliza a função fprintf para imprimir o nome do personagem na ficha
    fprintf(fptr, "Nome: %s\n", personagem);


    printf("Insira o sexo do personagem: ");

    scanf("%s", sexo);

     //Imprime o sexo do personagem na ficha
    fprintf(fptr, "Sexo: %s\n", sexo);

    //Menu de visualização das raças e suas características, pede que o usuário digite o numero para mostrar mais informações
    //O programa faz isso até o usuário digitar 6, e pede a raça escolhida
    //utiliza switch case para organizar as opções do menu
    printf("\n");
    printf("Escolha a raca do personagem. Isso ira determinar suas caracteristicas fisicas e parte de seu background. Pressione o numero indicado para saber mais.\n ");
    printf("1 - Anao\n");
    printf("2 - Humano\n");
    printf("3 - Elfo\n");
    printf("4 - Meio-orc\n");
    printf("5 - Draconico\n");
    printf("6 - Prosseguir com a raca: \n");

    do
    {
        scanf("%i", &raca_op);
        switch(raca_op)
        {
        case 1:
            printf("- Anao\n ");
            printf("Esculpidos nas fundacoes rochosas do universo, os anoes suportaram uma era de servidao aos gigantes antes de conquistar sua liberdade."
                   "Suas poderosas cidades-fortalezas nas montanhas testemunharam o poder dos seus imperios ancestrais.\n");
            printf("\n");
            break;

        case 2:
            printf("- Humano\n ");
            printf("De todas as racas civilizadas, os humanos sao os mais adaptaveis e heterogeneos."
                   "E possivel encontrar povoados humanos em quase todo lugar, e a moral, costumes e interesses dessa raca variam amplamente.\n");
            printf("\n");
            break;

        case 3:
            printf("- Elfo\n ");
            printf("Livres e selvagens, os elfos protegem suas florestas utilizando furtividade e disparando flechas mortiferas em meio as arvores."
                   "Eles constroem seus lares em plena harmonia com a natureza,"
                   "com tanta perfeicao que os viajantes muitas vezes nao percebem que invadiram uma comunidade elfica ate ser tarde demais.\n");
            printf("\n");
            break;

        case 4:
            printf("- Meio-Orc\n ");
            printf("Uma lenda obscura afirma que, quando Corellon extirpou o olho de Grummsh em uma batalha muito antiga,"
                   "parte da essencia desse deus selvagem caiu a terra, onde transformou uma raça de humanos em temiveis meio-orcs. Meio-orcs tem o lado humano dominante em sua aparencia,"
                   "mas sao diferenciados por sua pele com tons de cinza, mandibulas largas e dentes caninos inferiores proeminentes.De forma geral, eles sao mais fortes e mais altos do que os humanos.\n");
            printf("\n");
            break;

        case 5:
            printf("- Draconico\n ");
            printf("Nascidos para lutar, os draconatos pertencem a uma raça de mercenarios, soldados e aventureiros. Parecem dragoes humanoides: sao cobertos de escamas de couro, mas nao possuem caudas."
                   "Tem um porte alto e forte, geralmente passando dos 1,80 m de altura e pesando 150 kg ou mais. Suas maos e patas possuem unhas fortes,"
                   "parecidas com garras, com tres dedos e um polegar em cada mao. Ha muito tempo, seu imperio batalhou para dominar o mundo,"
                   "mas agora restam somente alguns clas exilados destes guerreiros honrados para transmitir as lendas de sua glória ancestral.\n ");
            printf("\n");
            break;
        }
    }
    while(raca_op<=5);
    printf("Digite a raca: ");
    scanf("%s", raca);
    getchar();

    //Imprime a raça do personagem na ficha
    fprintf(fptr, "Raca: %s\n", raca);

    //Menu de escolha de classe, funciona da mesma forma que a escolha de raça
    printf("\n");
    printf("Escolha a classe do personagem. Isso ira determinar seu estilo de jogo e a progressao de suas habilidades. Pressione o numero indicado para saber mais.\n");
    printf("1 - Barbaro\n");
    printf("2 - Bardo\n");
    printf("3 - Clerigo\n");
    printf("4 - Guerreiro\n");
    printf("5 - Monge\n");
    printf("6 - Paladino\n");
    printf("7 - Ladino\n");
    printf("8 - Mago\n");
    printf("9 - Prosseguir com a classe: \n");


    do
    {
        scanf("%i", &classe_op);
        switch(classe_op)
        {
        case 1:
            printf("-Barbaro\n");
            printf("Bárbaros são guerreiros poderosos que confiam em sua força e incrível resistência,"
                   "caracterizados por uma fúria bestial alimentada por totens ancestrais e espíritos da natureza ou por uma paixão interior pela violência."
                   "Bárbaros são menos versáteis do que guerreiros, mas mais resistentes e capazes de causar grandes danos aos inimigos de forma muito mais rápida.\n");
            printf("\n");
            break;

        case 2:
            printf("-Bardo\n");
            printf("Bardos sao conjuradores arcanos versateis, habeis tanto em combate quanto em arte e magia. Bardos praticam magia como praticam arte ou musica, utilizando seus talentos artisticos para induzir "
                   "efeitos magicos que fortalecem seus aliados ou atrapalham seus inimigos, geralmente por meio de encantamentos e ilusoes. Alem de suas habilidades magicas,"
                   "bardos sao artisticamente talentosos e extraordinariamente instruidos, possuindo conhecimento em uma ampla variedade de areas.\n");
            printf("\n");
            break;

        case 3:
            printf("-Clerigo\n");
            printf("Clerigos sao servos divinos de um ou mais deuses, servindo-os com poder marcial e magia divina alimentada por sua propria forca de fe. Como agentes de uma autoridade divina,"
                   "clerigos sao fortalecidos tanto por treinamento ritual quanto pelo favor particular de seu deus. Relativamente raros, clerigos inspiram tanto reverencia quanto terror,"
                   "dependendo de seus objetivos e de quem servem.\n");
            printf("\n");
            break;

        case 4:
            printf("-Guerreiro\n");
            printf("Um lutador habilidoso que define a linha de frente de qualquer batalha, rompendo as fileiras inimigas e mantendo a posicao enquanto seus aliados manobram. Todos os Guerreiros sao treinados para"
                   "usar praticamente qualquer armadura ou arma que a situacao exigir; um Guerreiro pode usar um machado, uma rapieira ou uma espada longa com habilidade aproximadamente equivalente."
                   "Alem de serem generalistas em combate, a maioria dos Guerreiros tambem se especializa em um conjunto de habilidades especifico, como arquearia ou magia de combate.\n");
            printf("\n");
            break;

        case 5:
            printf("-Monge\n");
            printf("Monjes sao ascetas espirituais e praticantes de uma energia mistica conhecida como ki, a essencia magica que flui por todos os seres vivos. Monjes utilizam essa"
                   "energia para aumentar suas proprias habilidades fisicas, concedendo a eles velocidade e forca extraordinarias. Monjes tambem podem usar seu proprio ki para"
                   "alterar o fluxo de energia em outras criaturas vivas, tanto para fins defensivos quanto ofensivos.\n");
            printf("\n");
            break;

        case 6:
            printf("-Paladino\n");
            printf("Paladinos sao cruzados sagrados, juramentados a um voto de promover e lutar por suas crenças e valores. Como paragons de suas conviccoes, paladinos recebem a"
                   "habilidade de usar magia divina concedida por divindades ou poderes semelhantes. Enquanto um paladino permanecer fiel ao seu juramento, ele mantem a capacidade"
                   "de empunhar esses poderes.\n");
            printf("\n");
            break;

        case 7:
            printf("-Ladino\n");
            printf("Ladinos sao mestres versateis da furtividade, do combate agil e de diversos truques habilidosos. Enquanto outros aventureiros contam com poder para derrotar seus inimigos,"
                   "ladinos usam sua inteligencia e engenhosidade natural para explorar as vulnerabilidades dos adversarios, assim como para guiar seus aliados com seguranca por ambientes perigosos,"
                   "desarmando armadilhas e abrindo fechaduras pelo caminho.\n");
            printf("\n");
            break;

        case 8:
            printf("-Mago\n");
            printf("Magos sao conjuradores arcanos que aprendem a praticar a Arte por meio de pesquisa e estudo. Eles acessam a Trama por meio de uma ampla gama de magias"
                   "e outras habilidades magicas adquiridas ao longo de anos de pratica e treinamento. "
                   "Através das magias que preparam e memorizam, magos poderosos podem assumir o controle de um campo de batalha,"
                   "comandando fogo e raio com a mesma facilidade com que outros empunham espada e escudo.\n");
            printf("\n");
            break;
        }
    }
    while(classe_op<=8);

    printf("Digite a classe: ");
    scanf("%s", classe);
    getchar();

    //Imprime a classe na ficha
    fprintf(fptr, "Classe: %s\n", classe);

    //Pede ao usuário o background de seu personagem, limitando a história a 280 caracteres.
    printf("Escreva uma breve historia sobre seu personagem.\n");

    fgets(lore, 280, stdin);

    lore[strcspn(lore, "\n")] = 0;

    //Imprime na ficha a história do personagem
    fprintf(fptr, "Lore do personagem: %s\n", lore);

    //Menu de escolha do alinhamento
    printf("\n");
    printf("Escolha o alinhamento moral do personagem. Isso ira guiar suas decisoes e maneira de enxergar o mundo. Pressione o numero indicado para saber mais.\n");
    printf("1 - Leal e bom\n");
    printf("2 - Caotico e bom\n");
    printf("3 - Leal e maligno\n");
    printf("4 - Caotico e maligno\n");
    printf("5 - Prosseguir com o alinhamento:\n");

    do
    {
        scanf("%i", &alinhamento_op);

        switch(alinhamento_op)
        {
        case 1:
            printf("-Leal e bom\n");
            printf("Valorizam a ordem e a lei, buscando o bem e a justica.\n");
            printf("\n");
            break;

        case 2:
            printf("-Caotico e bom\n");
            printf("Valorizam a liberdade e a autossuficiencia, agindo de acordo com seus valores pessoais, mesmo que em contradicao com a ordem.\n");
            printf("\n");
            break;

        case 3:
            printf("-Leal e maligno\n");
            printf("Valorizam a ordem e a lei, mas são crueis e egoistas.\n");
            printf("\n");
            break;

        case 4:
            printf("-Caotico e maligno\n");
            printf("Valorizam a liberdade e o caos, agindo de forma egoista e destruidora.\n");
            printf("\n");
            break;

        }

    }
    while (alinhamento_op<5);

    getchar();

    //Pede que o usuário digite o alinhamento do personagem e imprime na ficha
    printf("Digite o alinhamento: ");

    fgets(alinhamento, 35, stdin);

    alinhamento[strcspn(alinhamento, "\n")] = 0;

    fprintf(fptr, "Alinhamento: %s\n", alinhamento);


    //Ao final da função, checa se a ficha foi criada:
    if (fptr == NULL)
        printf("Erro ao criar personagem\n.");
    else
        printf("Personagem criado com sucesso!\n");
    //fecha o arquivo
    fclose(fptr);



    return 0;
}

int editarPersonagem()
{
    //Função editar personagem adiciona informações a ficha de personagens já existentes

    char personagem[100];
    char anotacao[300];
    int edit_op;

    //Pede o nome do personagem para localizar o arquivo no diretório
    printf("\n");
    printf("Digite o nome do personagem que deseja editar: ");
    fgets(personagem, 100, stdin);
    personagem[strcspn(personagem, "\n")] = 0;

    //Fopen na função "a" para adicionar informações na ficha do personagem
    FILE * fptr = fopen(personagem, "a");
    if (fptr == NULL)
    {
        printf("Erro ao abrir o arquivo. Verifique se o nome está correto.\n");
        return 1;
    }
    //Da duas opções de edição ao usuário: continuacao da historia ou adição de algum item
    printf("Digite a anotacao que deseja adicionar a ficha de '%s'\n", personagem);
    printf("A anotacao pode ser a continuacao de sua aventura ou itens obtidos\n");
    printf("O que deseja inserir?\n");
    printf("1 - Continuar aventura\n");
    printf("2 - Adicionar item ao inventario\n");

    //edit_op é uma variável de controle para navegar o menu
    scanf("%i", &edit_op);
    getchar();

    switch(edit_op)
    {
    case 1:
        //Caso 1 insere a informação que o usuário digitou na ficha como "Aventura", indicando continuação da aventura do personagem
        printf("Digite a continuacao da aventura de seu personagem: ");
        fgets(anotacao, sizeof(anotacao), stdin);
        anotacao[strcspn(anotacao, "\n")] = 0;

        fprintf(fptr, "\n[Aventura]: %s\n", anotacao);
        fclose(fptr);
        break;
    case 2:
        //Caso 2 insere a informação que o usuário digitou como "Inventário", indicando um item obtido ao longo da aventura
        printf("Digite o item obtido: ");
        fgets(anotacao, sizeof(anotacao), stdin);
        anotacao[strcspn(anotacao, "\n")] = 0;

        fprintf(fptr, "\n[Inventario]: %s\n", anotacao);
        fclose(fptr);
        break;
    }
    //confirma a anotação
    printf("Anotacao adicionada com sucesso ao personagem '%s'.\n", personagem);
    return 0;
}

int verPersonagem()
{
    //Função verPersonagem inicia declarando variáveis necessárias
    //Ch é variável de controle para imprimir a ficha no terminal
    char personagem[100];
    char ch;

    //Pede o nome do personagem para localizar o arquivo no diretório
    printf("\n");
    printf("Digite o nome do personagem que deseja visualizar: ");
    fgets(personagem, 100, stdin);
    personagem[strcspn(personagem, "\n")] = 0;
    printf("\n");

    //fopen no modo "r" apenas lê a ficha
    FILE * fptr = fopen(personagem, "r");
    if (fptr == NULL)
    {
        printf("Erro ao abrir o arquivo. Verifique se o nome esta correto.\n");
        return 1;
    }
    //uso da função while para imprimir os dados da ficha no terminal
    //fgetc pega os caracteres do arquivo (fptr) até o final do arquivo (!=EOF)
    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }
    //fecha arquivo apos leitura
    fclose(fptr);

    return 0;
}

int deletarPersonagem()
{
    //Função "deletarPersonagem" inicia declarando variavel do nome do personagem
    char personagem[100];

    //Pede ao usuario o nome do personagem
    printf("Digite o nome do personagem que deseja deletar: ");
    fgets(personagem, 100, stdin);
    personagem[strcspn(personagem, "\n")] = 0;
    printf("\n");

    //Remove personagem e checa se foi bem sucedido
    //Utiliza a função "remove()" e recebe o nome do personagem para encontrar o arquivo no diretório
    if (remove(personagem) == 0)
    {
        printf("Personagem deletado.\n");
    }
    else
    {
        printf("Erro ao deletar personagem. Verifique se o nome esta correto!\n");
        return 1;
    }

    return 0;
}

int main ()
{

    int opcao;

    //Programa inicia dando boas vindas ao usuário
    printf("\n");
    printf("Bem vindo ao criador de personagens D&D!\n");
    printf("Esse e um programa para criar, e inserir informacoes basicas nas fichas de personagens para uma tradicional campanha D&D.\n");

    //Laço do-while que permite que o usuario continue utilizando o programa por quanto tempo quiser.
    do
    {
        //Menu principal do programa. Utiliza switch case para chamar as funções do character creator.
        printf("\n");
        printf("Escolha a opcao desejada:\n");

        printf("1 - Criar personagem\n");
        printf("2 - Editar personagem\n");
        printf("3 - Ver personagem\n");
        printf("4 - Deletar personagem\n");
        printf("5 - Encerrar programa\n");
        scanf("%d", &opcao);
        getchar();
        switch(opcao)
        {
        case 1:
            criarPersonagem();
            break;

        case 2:
            editarPersonagem();
            break;

        case 3:
            verPersonagem();
            break;

        case 4:
            deletarPersonagem();
            break;
        }

    }
    //Programa encerra
    while (opcao <5);
    printf("Programa encerrado! Obrigado por usar o criador de personagens D&D!\n");




    return 0;
}
