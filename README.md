# CC2632 - Desenvolvimento de algoritmos

Este repositório contém o material usado nas aulas de Desenvolvimento de Algoritmos (CC2632) no Centro Universitário FEI. Atualmente a disciplina consiste em aulas de teoria em que são explicados os princípios da linguagem C e laboratórios com explicações sobre versionamento de código (atualmente usando git) e containers para ambientes de desenvolvimento (docker).

Todo o material foi escrito em markdown para ser visualizado usando o [marp](https://marp.app/) durante as aulas.

O repositório contém os seguintes arquivos e pastas:
- `README.md`: este arquivo;
- `cronogramas`: pasta com os cronogramas para cada turma que pode fazer a disciplina.
- `aulas`: pasta contendo o material usados nas aulas:
    - `teoria.md`: os slides de teoria usados durante as aulas. Nestes slides não estão as explicações do conteúdo pois estes serão desenvolvidos durante as aulas, mas apenas os tópicos que serão apresentados nas aulas;
    - `lab.md`: assim como os slides da teoria, também só apresentam o conteúdo que será abordado em cada aula;
    - `exercicios.md`: contém a lista de exercícios que devem ser entregues até o final do semetre;
- `src/`: pasta com os códigos que serão desenvolvidos ao longo das aulas de teoria gravadas em vídeo, além do que pode ser utilizado para arquivos que podem ser utilizados para o desenvolvimento dos exercícios e projetos:
    - `Dockerfile`: arquivo usado para a criação da imagem que é usada durante o curso. [A imagem construída está disponível no container registry deste repositório](https://gitlab.com/laferreira/fei/cc2632/container_registry)
    - `shell.nix`: uma alternativa ao Dockerfile para ter um ambiente reprodutível para o desenvolvimento da disciplina;
    - `.envrc`: arquivo usado para carregar o `shell.nix` ao entrar na pasta;
- `provas`: PDFs com as provas aplicadas em semestres anteriores, sendo a primeira disponível a prova substitutiva do 2° semestre de 2023 (a prova final não foi em outro formato).
