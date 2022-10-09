# 👨‍🦯 WalkEYE - Projeto Final FAETEC
Esse repositório contêm o código fonte para Arduino do projeto WalkEYE

O projeto WalkEYE visa facilitar a locomoção de deficientes visuais. 

**Esse repositório contêm o código para o Arduino incluído na bengala.**
O código do aplicativo de celular, que usa a tecnologia Flutter, pode
ser encontrado [aqui](https://github.com/Projeto-WalkEYE/walkeye-app).


## Manual
Você pode acessar o manual de utilização aqui: _Em construção._

Caso esteja interessado no manual de replicação do projeto, voccê pode acessá-lo aqui: _Em construção._


## Atalhos de Código
Essa seção guarda os atalhos definidos para o VS Code e o editor web do GitHub para um rápido desenvolvimento.

### Documentação

- `doc` → Criação de uma documentação geral de estrutura

```cpp
/**
 * 
 */
```

- `fdoc` → Criação de uma documentação de arquivo

```cpp
/**
 * 
 *
 * @author Autor <user@email.com>
 * @version X.Y.Z
 */
```

- `head` → Criação de um cabeçalho para organização

```cpp
////////////////////////////////////////////////////////
// Título
////////////////////////////////////////////////////////
```

### Estruturas

- `var` → Criação de variável

```cpp
int name = 0;
```

- `pin` → Criação de constante de pino

```cpp
const uint8_t name = 0;
```

- `func` → Criação de uma função

```cpp
void name()
{

}
```

- `nmsp` → Criação de uma namespace

```cpp
namespace name
{
    
}
```

- `pnmsp` → Criação de uma namespace prefixada

```cpp
namespace WE_name
{

}
```


Estilo de Código
---

### Arquivos

Arquivos pertencentes a biblioteca do WalkEYE deverão começar com o prefixo `we_` para fácil identificação.

Apenas o arquivo principal `walkeye.ino` nao precisa seguir essa regra.

```bash
touch walkeye.ino # Arquivo principal
touch we_actions.ino # Parte da biblioteca

touch random.ino # Código externo incluído no projeto
```

### Escopos

Blocos de escopo devem ter as chaves em novas linhas. Não do lado de sua declaração:

```cpp
void setup()
{
    /* ... */
}

if (/* condição */)
{
    /* ... */
}

for (int i = 0; i < 10; i++)
{
    /* ... */
}
```

### Namespaces

Namespaces devem ter seu identificador iniciado pelo prefixo `WE_`. O resto do identificador deverá utilizar o estilo `PascalCase`.

Para reter o estilo do nome do projeto, a namespace `WalkEYE` é a única que pode ir contra essas regras.

```cpp
namespace WE_Sensor { /* ... */ }

namespace WE_Connection { /* ... */ }

namespace WalkEYE { /* ... */ }
```

### Descrição de Funções

Descrições simples de funções devem ser iniciados com `///` para não sujar o código.

Descrições que necessitam múltiplas linhas devem estar encapsuladas dentro de `/** */`.
Parágrafos devem ser separados por linhas vazias para aumentar a legibilidade.

```cpp
/// Faz uma tarefa simples.
void mySimpleFunction() { /* ... */ }

/**
 * Faz uma tarefa complexa.
 *
 * Explicação, explicação, explicação...
 *
 * @version 1.0.0
 * @deprecated
 */
void myComplexFunction() { /* ... */ }
```

### Pinos

Identificadores para pinos do Arduino precisam começar com o prefixo `pin_`. O resto do identificador deverá utilizar o estilo `camelCase`.

O tipo de dado padrão para esse tipo de informação deverá ser `uint8_t`, que é equivalente ao `byte` do Arduino.

É obrigatório que o pino seja armazenado como uma constante para evitar possíveis erros durante a execução ou depuração.

```cpp
const uint8_t pin_powerBtn;
const uint8_t pin_assistantBtn;
```

Contribuições
---

Todo tipo de contribuição é bem vindo! Estamos fazendo esse projeto com a finalidade de terminar o nosso curso técnico. Requisições pull são sempre bem-vindas!

Licença
---

[MIT](https://github.com/Projeto-WalkEYE/walkeye/blob/main/LICENSE)