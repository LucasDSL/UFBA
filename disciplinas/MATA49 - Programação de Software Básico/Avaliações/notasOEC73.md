## Assembler de duas etapas 
- Ocorrem em duas etapas para evitar referências antecipadas, onde um símbolo é utilizado antes de ser definido 
Como tratar a ref antecipada ? Duas formas 
1. Programa lido em duas etapas/passagens.
Na primeira passagem, os símbolos, rótulos e declarações são lidos e 
colocados numa tabela, assim na segunda passagem não haverá o erro de ref antecipada.
2. Ler o programa e convertê-lo numa forma intermediária e armazenar isso numa tabela, então a segunda passagem é feita pela tabela,
ao invés de pelo programa principal. Essa 
abordagem poupa tempo de E/S 
### Passagem um 
Principal função: montar uma tabela denominada tabela de símbolos, que contém o valor de todos os símbolos - rótulo ou valor ao qual é atribuído uma pseudoinstrução.

Algumas informações são necessárias para saber qual o valor de um símbolo na tabela, como: 
- Saber qual o endereço da instrução: ILC (Instruction Location Counter) definido como 0 no início da passagem e incrementada a cada tamanho de instrução processada 

A passagem um utiliza três tabelas internas:
1. Tabela de símbolos: contém o símbolo em si(ou referência pra ele), seu valor numérica e outras possíveis infos(comprimento do campo de dados associados, bits de relocação, se o símbolo é acessado ou não fora do procedimento)
2. Tabela de opcodes: guarda opcode simbólico, os dois operandos, o valor numérico do opcode, o comprimento da instrução e a classe da instrução(separados dos grupos de opcodes, que dependem dos tipos de operandos)
3. Tabela de pseudoinstruções

### Passagem dois 
Principal função: gerar o programa objeto e talvez imprimir a listagem de montagem.também produz certas informações que o linker necessita para ligar procedimentos montados em tempos diferentes 

Assemelha-se a passagem um, onde cada linha é lida e processada, onde será gerado um 
código binário para cada instrução.


obs: Outra tarefa da passagem 1 é salvar todas as definições de macro e expandí-las a
medida que são chamdas

