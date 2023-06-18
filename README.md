# Criptografia-e-Descriptografia.

Criptografia 

Eu e meus amigos, Iaman Lagares, Guilherme Araujo e Arisson Santos desenvolvemos juntos este projeto de criptografia em linguagem C. Optamos por utilizar a linguagem C como base para demonstrar o funcionamento dos algoritmos de criptografia de forma simples e didática, com o objetivo específico de fins de estudo. Nosso objetivo principal foi explorar os conceitos teóricos e aplicar os algoritmos de criptografia de maneira prática, utilizando a linguagem C como uma ferramenta de aprendizado. É importante ressaltar que, embora tenhamos criado esse projeto, ele é apenas uma implementação básica com fins educacionais e não deve ser considerado como uma solução de criptografia robusta e segura para uso em ambientes reais.


Introdução
A criptografia é uma técnica antiga e fundamental para garantir a segurança das informações. Em sua essência, a criptografia é o processo de transformar dados legíveis em uma forma ilegível e ininteligível, chamada de "criptograma", usando algoritmos matemáticos específicos. Essa transformação torna os dados inacessíveis e compreensíveis apenas para aqueles que possuem a chave correta para decifrá-los.Ao longo da história, a criptografia tem sido utilizada para proteger informações confidenciais, como mensagens militares, transações financeiras, segredos comerciais e comunicações pessoais. Seu objetivo é garantir a confidencialidade, integridade e autenticidade dos dados, evitando que sejam interceptados, modificados ou falsificados por pessoas não autorizadas.
Existem dois tipos principais de criptografia: a criptografia simétrica e a criptografia assimétrica (ou de chave pública).
Na criptografia simétrica, uma única chave é usada tanto para criptografar quanto para descriptografar a mensagem. Tanto o remetente quanto o destinatário devem compartilhar essa chave secreta antes da comunicação. A criptografia simétrica é rápida e eficiente, mas exige um canal seguro para a troca de chaves.
Já na criptografia assimétrica, são utilizadas duas chaves diferentes e complementares: uma chave pública para criptografar a mensagem e uma chave privada correspondente para descriptografá-la. A chave pública é amplamente distribuída e pode ser conhecida por todos, enquanto a chave privada é mantida em segredo pelo proprietário. A criptografia assimétrica é mais segura em termos de compartilhamento de chaves, mas pode ser mais lenta e exigir mais recursos computacionais.
A criptografia desempenha um papel fundamental na segurança da informação em várias áreas, como comunicações online, transações bancárias, proteção de dados pessoais e até mesmo no armazenamento em nuvem. Ela desempenha um papel importante na garantia da privacidade e na confiança em ambientes digitais cada vez mais conectados.
É importante ressaltar que a criptografia não é invulnerável e sempre há o desafio de acompanhar o desenvolvimento de técnicas de criptoanálise que buscam quebrar a segurança dos algoritmos. Portanto, a pesquisa contínua e aprimoramento dos algoritmos de criptografia são essenciais para garantir a segurança da informação no mundo digital.
Espero que essa introdução tenha ajudado a entender o conceito básico da criptografia. É um campo fascinante e em constante evolução, com aplicações vitais para a proteção de informações sensíveis.

ASCII (American Standard Code for Information Interchange)

Sabe, quando você lida com computadores e textos, é importante ter uma maneira padrão de representar os caracteres, como letras, números e símbolos. E é aí que entra o ASCII, que é um sistema de codificação de caracteres muito utilizado.
ASCII significa "American Standard Code for Information Interchange" (Código Padrão Americano para Intercâmbio de Informações, em tradução livre). É um conjunto de regras que atribui um número único a cada caractere que pode ser usado em um computador.
Imagine que existem 128 caracteres no conjunto ASCII, incluindo letras maiúsculas e minúsculas, números, símbolos de pontuação e caracteres especiais, como o símbolo do dólar ($), o sinal de mais (+), o ponto de exclamação (!), entre outros.
Cada caractere é representado por um número inteiro que varia de 0 a 127. Por exemplo, a letra "A" maiúscula tem o valor 65, a letra "a" minúscula tem o valor 97 e o número "1" tem o valor 49.
Esses valores numéricos são chamados de "valores ASCII" ou "códigos ASCII". Eles são úteis porque os computadores entendem apenas números binários, ou seja, sequências de 0s e 1s. Então, quando você digita um caractere no seu teclado, ele é convertido para o seu valor ASCII correspondente antes de ser armazenado ou processado pelo computador.
A tabela ASCII é uma referência que associa cada valor numérico a um caractere específico. Por exemplo, o valor 65 está associado ao caractere "A", o valor 97 ao caractere "a" e o valor 49 ao caractere "1". Essa tabela facilita a comunicação entre sistemas diferentes, pois todos seguem o mesmo padrão.
Agora, com base nesse sistema de codificação, é possível realizar diversas operações, como a criptografia que vimos no código. A criptografia funciona deslocando os valores ASCII dos caracteres usando uma chave numérica. Esse deslocamento faz com que os caracteres originais sejam substituídos por novos caracteres, tornando a mensagem criptografada.
Então, o ASCII é uma forma padronizada de representar caracteres em computadores, atribuindo a cada caractere um valor numérico único. Ele permite a comunicação e o processamento de textos de forma consistente em diferentes sistemas.


EXPLICACÃO DO CODIGO (criptografia)

Esse código que temos aqui é um programa em C que realiza uma criptografia simples de mensagens utilizando uma chave numérica. O objetivo é tornar a mensagem ilegível para quem não conhece a chave.

Vamos entender passo a passo como ele funciona. Primeiro, o programa inclui algumas bibliotecas importantes para o seu funcionamento, como stdio.h, stdlib.h e string.h. Essas bibliotecas fornecem funcionalidades para entrada/saída, alocação dinâmica de memória e manipulação de strings.

Em seguida, temos uma função chamada criptografar. Essa função é responsável por receber uma mensagem e uma chave como parâmetros e realizar a criptografia.

Dentro da função criptografar, uma variável chamada mensagem_criptografada é criada. Ela é um ponteiro para caracteres (char*) e é alocada dinamicamente na memória usando a função malloc. O tamanho dessa alocação é igual ao comprimento da mensagem original.

Agora vem a parte principal da criptografia. Um loop for é utilizado para percorrer cada caractere da mensagem original. A cada iteração, o caractere é deslocado na tabela ASCII somando o valor da chave numérica fornecida. Isso significa que cada caractere da mensagem original é substituído por um novo caractere resultante desse deslocamento.

Depois que todos os caracteres da mensagem original são criptografados, a mensagem criptografada é impressa na tela usando a função printf. Em seguida, a memória alocada dinamicamente para a mensagem criptografada é liberada usando a função free.

Na função main, temos um loop do-while que apresenta um menu de opções ao usuário. Eu vou explicar o menu para você. Ele mostra duas opções: "1. Criptografar mensagem" e "2. Sair". Você precisa digitar o número correspondente à opção que você deseja.

Dependendo da opção selecionada, o programa executa a ação apropriada. Se você escolher a opção 1, o programa pede para você digitar a mensagem que deseja criptografar e a chave numérica para realizar a criptografia. Em seguida, a função criptografar é chamada com a mensagem e a chave como argumentos para realizar a criptografia.

Se você escolher a opção 2, o programa exibe uma mensagem de saída e encerra a execução.

Agora, se você digitar uma opção inválida, o programa exibe uma mensagem de erro e continua no loop, solicitando uma nova entrada válida do usuário.

É importante ressaltar que esse código é apenas um exemplo básico de criptografia usando deslocamento de caracteres na tabela ASCII. No entanto, essa forma de criptografia não é considerada segura para proteger informações sensíveis, pois é facilmente reversível e vulnerável a ataques de força bruta e análise de frequência.

EXPLICAÇÃO DO CODIGO (Descriptografia)

Esse código em linguagem C é um exemplo de descriptografia de uma mensagem criptografada. Vamos entender como ele funciona passo a passo.

Primeiro, declaramos algumas variáveis necessárias para o processo de descriptografia. Temos a variável "mensagem_criptografada", que é um array de caracteres onde vamos armazenar a mensagem criptografada. A variável "chave" é um número inteiro que representa a chave necessária para descriptografar a mensagem. E a variável "senha" é um array de caracteres onde o usuário digita a senha para acessar a descriptografia.

Em seguida, usamos a função "printf" para exibir uma mensagem pedindo ao usuário que digite a mensagem criptografada. A função "fgets" é usada para ler a entrada do usuário e armazená-la na variável "mensagem_criptografada".

Depois, solicitamos ao usuário que digite a senha para descriptografar a mensagem usando a função "printf". Em seguida, usamos a função "scanf" para ler a senha digitada pelo usuário e armazená-la na variável "senha".

Aqui vem a parte de verificação da senha. Utilizamos a função "strcmp" para comparar a senha digitada pelo usuário com uma senha pré-definida (no código, a senha é representada por "####"). Se as senhas forem iguais, o programa entra no bloco "if" e permite que o usuário digite a chave para descriptografar a mensagem.

Dentro do bloco "if", usamos novamente a função "printf" para solicitar ao usuário que digite a chave para descriptografar a mensagem. Em seguida, usamos a função "scanf" para ler a chave digitada pelo usuário e armazená-la na variável "chave".

Criamos um ponteiro chamado "mensagem_descriptografada" e alocamos memória para ele usando a função "malloc". O tamanho da memória alocada é determinado pela função "strlen", que retorna o comprimento da mensagem criptografada. Em seguida, percorremos a mensagem criptografada em um loop, descriptografando cada caractere subtraindo a chave.

Por fim, usamos a função "printf" para exibir a mensagem descriptografada na tela.

É importante ressaltar que, se a senha digitada pelo usuário estiver incorreta, o programa entrará no bloco "else" e exibirá uma mensagem informando que a senha está incorreta.

Espero que essa explicação tenha ajudado a entender o funcionamento do código!
