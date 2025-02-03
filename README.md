# CCP230/CC2632 - Desenvolvimento de algoritmos

## Introdução

Este repositório contém o material usado nas aulas de Desenvolvimento de Algoritmos (CCP230 e CC2632) no Centro Universitário FEI. Atualmente a disciplina consiste em aulas de teoria em que são explicados os princípios da linguagem C.

Todo o material foi escrito em markdown para ser visualizado usando o [marp](https://marp.app/) durante as aulas.

## Organização do repositório

O repositório contém os seguintes arquivos e pastas:
- `README.md`: este arquivo, explicando o repositório e o funcionamendo da disciplina;
- `cronogramas`: pasta contendo os cronogramas para todas as turmas atualmente cursando a disciplina;
- `aulas`: pasta com os arquivos em markdown sobre os conteúdos das aulas. Atualmente possuem os arquivos:
    - `exercicios.md`: arquivo com exercícios de provas passadas que podem ser usados para estudar;
    - `teoria.md`: assuntos que serão tratados na teoria. Os códigos com exemplos para cada assunto estão na pasta `src`;
- `src`: pasta com os códigos desenvolvidos para os assuntos tratados nas aulas. Dentro desta pasta também estão os arquivos:
    - `shell.nix`: para usar com o [Nix ou NixOS](https://nixos.org/)
    - `.envrc`: para carregar os pacotes listados em `shell.nix` assim que entrar na pasta
    - `Dockerfile`: pode ser usado para criar um container que possui tudo o que será usando na disciplina. [Uma imagem construída está disponível no container registry deste repositório](https://gitlab.com/laferreira/fei/cc2632/container_registry)


## Funcionamento da disciplina

- Primeira parte (12 aulas): o que precisa para passar de semestre
- Segunda parte: desenvolvimento de projetos
- Terceira parte (últimas 3 semanas): aprofundamento da matéria + desenvolvimento de projetos

## Avaliações

### Avaliações - projetos

- Todos os projetos possuem prazo para entrega
- Todos os projetos devem usar sistema de versionamento (i.e., git)
- Teremos aulas para desenvolvimento dos projetos, mas podem ser feitos em qualquer horário
- A nota de projetos será a média das notas dos projetos
$$ Projetos = \frac{\sum \textrm{nota dos projetos}}{\textrm{quantidade de projetos}} $$


### Avaliações - prova

- Marcada pela secretaria na semana de avaliações finais
- Feita no papel e sem consulta
- Sem exercícios de desenvolvimento de código
- Exercícios de fundamentos da linguagem, interpretação de código e perguntas sobre o desenvolvimento do projeto (exemplos no arquivo de exercícios)


### Critério de avaliação

$$ \textrm{Média} = \sqrt{\textrm{Projetos} \cdot \textrm{Prova}} $$

- Projetos: média das notas de todos os projetos
- Prova: nota da prova feita na semana de avaliações finais
- A avaliação substitutiva só substitui a prova e **NÃO** substitui notas de projeto ou média dos projetos


## Outras ferramentas...

- ChatGPT, Gemini/Bard, Bing Chat,...
- Copilot, Codeium...
- Ollama,...
- etc...

podem ser usadas sem nenhum problema, só tomar cuidado com a forma como são usadas

## Nas palavras de outros desenvolvedores...

>You copied that function without understanding why it does what it does, and as a result your code IS GARBAGE.
>
>AGAIN.

Linus Torvalds no Linux Kernel Mailing List em 26/01/2024
