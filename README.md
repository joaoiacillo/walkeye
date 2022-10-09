# 👨‍🦯 WalkEYE - Projeto Final FAETEC
Esse repositório contêm o código fonte para Arduino do projeto
WalkEYE, um projeto de finalização de curso. Os códigos do aplicativo
para Android usando Flutter podem ser encontrados
[aqui](https://github.com/Projeto-WalkEYE/walkeye-app).


## Manual
Existem dois tipos de manual os quais você pode baixar na tabela
abaixo. O manual de utilização aborda as principais funcionalidades
do dispositivo e como configurá-lo. O manual de replicação é um
documento técnico contendo todas as especificações de como recriar
o mesmo projeto.

 **Manual** | **Download** 
------------|--------------
 Utilização | Indisponível 
 Replicação | Indisponível 






## Atalhos de Código
Essa seção guarda os atalhos definidos para o VS Code e o editor web
do GitHub.

### Documentação

#### Comentário de múltiplas linhas (`doc`)

```cpp
/**
 * 
 */
```

#### Documentação de um arquivo (`fdoc`)

```cpp
/**
 * 
 *
 * @author Autor <user@email.com>
 * @version X.Y.Z
 */
```

#### Cabeçalho de Seção (`head`)

```cpp
////////////////////////////////////////////////////////
// 
////////////////////////////////////////////////////////
```

### Estruturas

#### Variável (`var`)

```cpp
int name = 0;
```

#### Constante de pino (`pin`)

```cpp
const uint8_t name = 0;
```

#### Função (`func`)

```cpp
void name()
{

}
```

#### Namespace WalkEYE (`pnmsp`)

```cpp
namespace WE_name
{

}
```

#### Namespace (`nmsp`)

```cpp
namespace name
{
    
}
```


Estilo de Código
---

### Arquivos

Os arquivos que pertecem a biblioteca padrão do WalkEYE devem ter
seus nomes prefixados por "*we_*" para fácil identificação.

O arquivo principal do projeto (`walkeye.ino`) não precisa estar com
seu nome prefixado.

```bash
# Arquivo principal
touch walkeye.ino

# Arquivo da biblioteca padrão
touch ./include/we_serial.cpp

# Arquivo externo à biblioteca
touch ./include/random.cpp
```

### Escopos

As chaves que cercam as instruções de um escopo devem estar presentes
em linhas vazias, e não do lado da declaração do escopo.

```cpp
void setup()
{
    /* ... */
}

if (x >= 10)
{
    /* ... */
}

for (int i = 0; i < 10; i++)
{
    /* ... */
}
```

### Namespaces

#### 1. Estilo de Escrita

Namespaces devem ter seu nome escritos no estilo _PascalCase_,
prefixados por `WE_`.

Para reter o estilo do nome do projeto, a namespace `WalkEYE` é a
única que pode ir contra essas regras.

```cpp
namespace WE_Sensor { /* ... */ }

namespace WE_Connection { /* ... */ }

namespace WalkEYE { /* ... */ }
```

#### 2. Quantidade em um arquivo

Namespaces devem estar presentes em seus próprios arquivos para fácil
identificação.

```
WalkEYE/
|    walkeye.ino
└─── include/
     |    we_actions.cpp      # Contêm a namespace WE_Actions.
     |    we_serial.cpp       # Contêm a namespace WE_Serial.
     |    we_connection.cpp   # Contêm a namespace WE_Connection.
     |    ...
```

### Documentação de Funções

Documentações simples de funções devem usar `///`.

Documentações complexas devem usar `/** */`, com cada nova
linha começando com `*`. Parágrafos devem ser separados por linhas
vazias para aumentar a legibilidade.

```cpp
/// Soma a com b
void add(int a, int b) { /* ... */ }

/**
 * Tenta uma conexão USB entre o Arduino e o dispositivo.
 *
 * Explicação, explicação, explicação...
 *
 * @version 1.0.0
 * @deprecated
 */
void tryConnection() { /* ... */ }
```

### Pinos

Identificadores para pinos do Arduino devem ser escritos com o estilo _camelCase_, prefixados por `pin_`.

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
