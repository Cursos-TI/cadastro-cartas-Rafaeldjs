## Instruções rápidas para agentes (PT-BR)

Este repositório contém um exercício em C para cadastro de cartas do tipo "Super Trunfo".
O objetivo deste arquivo é dar ao agente a informação mínima e específica para ser produtivo aqui.

Resumo do projeto
- Projeto pequeno: programa C mono-arquivo `CartasSuperTrunfo.c` e documentação em `README.md`.
- Entrada: interativa via stdin (scanf). Saída: stdout (printf).

Por onde começar
- Leia `README.md` para entender o propósito (níveis: Novato/Aventureiro/Mestre).
- Abra `CartasSuperTrunfo.c`: é o ponto central do trabalho — todas as funcionalidades atuais estão lá.

Padrões e convenções do repositório
- Interação via terminal usando `scanf`/`printf` (sem framework de testes nem arquivos auxiliares).
- Nome das variáveis segue estilo simples e descritivo (ex.: `populacao`, `area`, `pib`).
- Não há Makefile; use o compilador GCC como mostrado abaixo.

Comandos úteis (exatos)
- Compilar (linha única):
  `gcc -fdiagnostics-color=always -g CartasSuperTrunfo.c -o CartasSuperTrunfo`
- Executar o programa:
  `./CartasSuperTrunfo` (o programa solicita entradas interativas).
- VSCode: há uma task gerada para compilar com label "C/C++: gcc arquivo de build ativo" que usa a mesma linha de comando via ${file}.

Pontos críticos descobertos (inspecionáveis programaticamente)
- `CartasSuperTrunfo.c` calcula `superPoder` incorretamente usando `nome_cidade` (array de char) em soma aritmética. Isso causa comportamento inválido e impede uso correto do campo. Procure substituir por uma soma apenas de valores numéricos.
- Entrada atual usa `scanf(" %s", nome_cidade);` o que não aceita nomes com espaços e tem risco de overflow. Considere `fgets` ou `scanf` com limite (`%29s`) ao propor mudanças.
- Possíveis divisões por zero: quando `area == 0` (densidade) ou `populacao == 0` (PIB per capita). Valide antes de dividir.

Exemplos de melhorias pequenas e seguras que o agente pode propor/implementar
- Corrigir cálculo de `superPoder` para algo como: soma de `area + pontos_turisticos + populacao + pib + pibpercapita` (usar apenas valores numéricos).
- Adicionar checagens: `if (area <= 0) area = 1;` ou imprimir mensagem de erro e pedir reentrada.
- Proteger leitura de nome: `scanf("%29s", nome_cidade);` ou `fgets(nome_cidade, sizeof nome_cidade, stdin);` e remover nova linha.

Testes rápidos locais
- Teste manual: compile e execute; insira valores válidos. Para teste não-interativo (útil em PRs), use here-doc:
  `./CartasSuperTrunfo <<EOF\nCidadeX\n100000\n50\n1000000\n5\nEOF`

O que NÃO modificar sem checagem humana
- Não reestruture para múltiplos arquivos ou adicionar bibliotecas grandes sem abrir issue/PR — o exercício é intencionalmente simples e didático.

Referências no repositório
- `CartasSuperTrunfo.c` — implementação atual e principal fonte de verdade.
- `README.md` — descrição do desafio e critérios por nível.

Se algo estiver incompleto aqui ou você quiser diretrizes sobre estilo (ex.: formatação de código, políticas de commit), peça e eu atualizo este arquivo com exemplos concretos.
