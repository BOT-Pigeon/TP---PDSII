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
    Se contra um elemento superior: Ataque -3
    Se contra um elemento inferior: Ataque +3
    Se contra um elemento igual: Ataque permanece 

### Pré-estabelecido o nível Ataque e a Vida de cada pokémon;
### Possibilidade da efetividade do ataque (dano) -> De 1 a 10;
### Possibilidade de vida -> De 1 a 100;
#
# Definifição dos Pokémons:
### Pokémon 1 - Água
- Vida: 45
- Ataques:
    - Ataque 1: 10
    - Ataque 2: 6
    - Ataque 3: 3
### Pokémon 2 - Água
- Vida: 50
- Ataque
    - Ataque 1: 7
    - Ataque 2: 4
    - Ataque 3: 1
### Pokémon 3 - Água
- Vida: 75
- Ataque
    - Ataque 1: 4
    - Ataque 2: 2
    - Ataque 3: 1
### Pokémon 4 - Fogo
- Vida: 45
- Ataque 	
    - Ataque 1: 10
    - Ataque 2: 7
    - Ataque 3: 2
### Pokémon 5  - Fogo
- Vida: 68
- Ataque 
    - Ataque 1:6
    - Ataque 2:5
    - Ataque 3:2
### Pokémon 6 - Fogo
- Vida: 87
- Ataque 
    - Ataque 1: 4
    - Ataque 2: 3
    - Ataque 3: 3
### Pokémon 7 - Neve
- Vida: 49
- Ataque 
    - Ataque 1: 10
    - Ataque 2: 4
    - Ataque 3: 1
### Pokémon 8 - Neve
- Vida: 99
- Ataque
    - Ataque 1:4
    - Ataque 2:3
    - Ataque 3:2
### Pokémon 9 - Neve
- Vida : 21
- Ataque 
    - Ataque 1:10
    - Ataque 2: 8 
    - Ataque 3: 6

#
# USER STORIES 

    1. Como jogador, eu quero escolher o elemento do meu pokémon e a sua espécie em específico, assim, o adequando ao meu estilo de jogo.

    2. Como jogador, eu quero em cada rodada definir o ataque a ser usado, utilizando de uma estratégia e esperando o tempo de cooldown de cada habilidade.

    3. Como jogador, eu quero que haja a lógica de percentual de dano do meu pokémon sobre o do meu oponente - e vice-versa - perante a superioridade de um elemento em relação ao outro, com o intuito de estabelecer uma coerência entre os elementos.
    
    4. Como jogador, eu quero que cada partida tenha duração de no máximo 10 minutos e, caso nenhum jogador tenha tido sua barra de vida zerada, a partida se encerrará e o ganhador será o com a maior barra de vida, para que as partidas sejam dinâmicas

    5. Como jogador, eu quero que cada ataque que o oponente der eu tenha uma porcentagem de chance de desviar, dessa forma, aumentando a competitividade do jogo. (Probabilidade de desviar = ataque50)

    6. Como jogador, eu quero conseguir vencer meu oponente quando sua barra de vida chegar a zero ou perder quando a minha chegar a zero para se ter um elemento competitivo no jogo.
