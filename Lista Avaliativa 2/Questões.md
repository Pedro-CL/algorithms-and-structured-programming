# Questão-01

Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:

- Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
- Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
- Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.

Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário. Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, quantos funcionários existem nesta empresa, ou seja, o número de funcionários não será fornecido.
<br><br><br>
Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos específicos, devendo pelo menos os seguintes sub-algoritmos:

a) `validaQuantidade` que validará o número de peças fabricadas por cada funcionário

b) `calculaSalario` que efetuará o cálculo do salário total para cada funcionário.

<br>

>[!NOTE]
> **Observação:**
> O resultado **final** será mostrado ao usuário por meio de um procedimento ` mostrarFinal() `

<br>

# Questão-02

Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país.

Elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00).

1. #### Especificações:
   
   - deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo nacional ( R$ 1400,00 ).
   -  Após a leitura dos dados de cada assalariado cadastrado pelo ministério, os dados deverá ser apresentado por extenso em relação ao salário mínimo e o sexo (Masculino ou Feminino).

 2. #### Sub-Algoritmos:
    
    a) A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo `classificaSalario`.

    b) os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado `mostraClassifica`.

<br>

Você deverá fazer a entrada de dados para TODOS os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em **sub-algoritmos específicos**. Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.

<br>

>[!NOTE]
> **Observação:**
> Após a leitura dos dados de todos os assalariados pesquisados, o algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo.
