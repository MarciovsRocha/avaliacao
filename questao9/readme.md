SO: Debian Buster (10.7)

Code Editor: Visual Studio Code

gcc version 8.3.0

---

for each para cada int dentro da vetor informado, o tamanho do vetor é calculado ao invés de informado para evitar erros, para calcular o tamanho de um vetor em c++ utilizei a função sizeof() que quando operada em cima do vetor retorna quantos bytes o mesmo ocupa, e quando operada em cima de um elemento do vetor retorna quantos bytes possui o elemento, dividindo o total de bytes do array pelo total de bytes de um elemento é encontrado o numero de elementos dentro deste vetor. Neste caso o vetor possui 20 bytes, cada elemento do vetor possui 4 bytes. 

$$\frac{20}{4}=5$$


para testar com outros valores, declarar os elementos a serem passados como parâmetro manualmente,
de preferência, caso alterar o nome do vetor, favor alterá-lo também dentro das funções **sizeof()**