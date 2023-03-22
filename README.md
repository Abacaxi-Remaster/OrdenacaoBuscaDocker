#OrdenacaoBuscaDocker
Tarefa 04 - Container da tarefa 03

André Renato Fernandes Cano 
Lucas Fiuza Garcia 
João Gabriel de Campos Rosa 
Luis Felipe Ferreira Marrote 
Thiago Loureiro Kosciuk

##Como executar o código:

Para executar o código de maneira correta, é necessário ter o programa Docker instalado na máquina. Com esse programa, deve-se baixar a pasta do projeto, e abrí-la no terminal, da maneira que preferir. Com o terminal aberto, digitar os seguintes comandos:

    -> docker build . -t nome:<versão>
    -> docker run --rm -it nome:<versão>

Exemplo:

    -> docker build . -t ordenacao_busca:1
    
    -> docker run --rm -it ordenacao_busca:1

##Sobre o programa:

Esse programa cria cinco sequências com tamanhos entre 10000 e 1000000 e números aleatórios entre 20 e 2000000. 
No início da execução, são demonstrados os tamanhos das 5 sequencias e é aberto o menu.

No menu, o usuário pode escolher o que quer fazer, entre rodar os 5 algoritmos implementados(bubbleSort, mergeSort, quickSort, binarySearch, ternarySearch) e sair do programa.

A Ação selecionada será aplicada nas 5 sequências, e o tempo de execução de cada uma será apresentado.

O programa volta então para o menu e permite a escolha de outra ação, até que a opção 6 seja selecionada (neste caso o programa é encerrado).

Também existe uma sétima opção que roda todos os algorítmos e imprime uma tabela com todos os tempos de execução.
