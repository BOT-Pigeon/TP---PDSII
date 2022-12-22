#
# TP---PDSII

## Tema: Batalha de RPG - Estilo Pokémon
## Integrantes:
    -Felipe Meireles Leonel - 2022055483

    -Hiago Matheus Celestino da Silva - 2019029817

    -Max Pedro Candido de Araujo - 2020028047

    -Luzianne Aihzu Sung de Araújo - 2021020066

#

# Funcionamento do Jogo
### Player 1 e Player 2
    Os dois sendo necessariamente usuários
### 3 elementos
    Água, Fogo e Neve
### 3 Pokémons de cada elemento
    Água > Fogo
    Fogo > Neve
    Neve > Água 
    Relação entre elementos
    Se contra um elemento inferior: Ataque x1.25
    Se contra um elemento igual: Ataque permanece 

### Pré-estabelecido o nível Ataque e a Vida de cada pokémon;
### Possibilidade da efetividade do ataque (dano) -> De 1 a 10;
### Possibilidade de vida -> De 1 a 100;
#
# Definifição dos Pokémons:
### Mbappe - Água
- Vida: 25
- Ataques:
    - Ataque 1: 29
    - Ataque 2: 20
    - Ataque 3: 15
### Kratos - Água
- Vida: 48
- Ataque
    - Ataque 1: 13
    - Ataque 2: 9
    - Ataque 3: 5
### Zé Gotinha - Água
- Vida: 77
- Ataque
    - Ataque 1: 9
    - Ataque 2: 7
    - Ataque 3: 3
### Monark - Fogo
- Vida: 29
- Ataque 	
    - Ataque 1: 19
    - Ataque 2: 13
    - Ataque 3: 10
### Charizard  - Fogo
- Vida: 52
- Ataque 
    - Ataque 1:17
    - Ataque 2:7
    - Ataque 3:4
### Esquentadinho - Fogo
- Vida: 76
- Ataque 
    - Ataque 1: 8
    - Ataque 2: 6
    - Ataque 3: 2
### Mandaloriano - Neve
- Vida: 32
- Ataque 
    - Ataque 1: 20
    - Ataque 2: 14
    - Ataque 3: 8
### Rei Gelado - Neve
- Vida: 46
- Ataque
    - Ataque 1:15
    - Ataque 2:8
    - Ataque 3:5
### Nevasca - Neve
- Vida : 80
- Ataque 
    - Ataque 1:10
    - Ataque 2: 6
    - Ataque 3: 3

#
# COMO RODAR O CÓDIGO
    Para rodar o código deve-se usar os seguintes comandosvno terminal dentro da pasta do jogo:
        make run -> Compila e roda o jogo.
        make tests -> Compila e roda os testes.
        make -> apenas compila.
    
# USER STORIES 

    1. Como jogador, eu quero escolher o elemento do meu pokémon e a sua espécie em específico, assim, o adequando ao meu estilo de jogo.
        - Critérios de aceitação:
            - Exibir elemento de cada pokémon;
            - Exibir a espécie do pokémon;
            - Conseguir escolher um pokémon.
            
    2. Como jogador, eu quero em cada rodada definir o ataque a ser usado, utilizando de uma estratégia e esperando o tempo de cooldown de cada habilidade.
        - Critérios de aceitação:
            - Exibir os ataques do pokémon;
            - Exibir o dano dos ataques;
            - Exibir se o ataque pode ser usado no momento ou não;
            - Conseguir escolher o ataque.

    3. Como jogador, eu quero que haja a lógica de percentual de dano do meu pokémon sobre o do meu oponente - e vice-versa - perante a superioridade de um elemento em relação ao outro, com o intuito de estabelecer uma coerência entre os elementos.
        -Critérios de aceitação:
            - O programa deve conseguir analisar qual elemento é superior;
            - Também deve conseguir incrementar ou decrementar o dano do pokémon;
            - Exibir o decremento e incremento dos danos.

    4. Como jogador, eu quero conseguir jogar mais de uma partida sem ter que abrir e fechar o jogo.
        - Critérios de aceitação:
            - Exibir opção para jogar novamente;
            - Conseguir executar toda a rotina do jogo várias vezes;
            - Exibir na tela que essa funcionalidade funcionou corretamente.

    5. Como jogador, eu quero que cada ataque que o oponente der eu tenha uma porcentagem de chance de desviar, dessa forma, aumentando a competitividade do jogo. (Probabilidade de desviar = ataque/50)
        - Critérios de aceitação:
            - Exibir a chance de desviar de cada ataque;
            - Exibir se o pokémon desviou;
            - Exibir o dano que o pokémon deixou de receber.

    6. Como jogador, eu quero conseguir vencer meu oponente quando sua barra de vida chegar a zero ou perder quando a minha chegar a zero para se ter um elemento competitivo no jogo.
        - Critérios de aceitação:
            - Exibir a vida dos pokémon;
            - Exibir o quanto de vida o pokémon perde a cada ataque sofrido;
            - Exibir o vencedor.
