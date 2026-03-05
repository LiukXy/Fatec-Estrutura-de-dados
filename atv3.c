1-O que e um Tipo Abstrato de Dados (TAD) e qual a caracterıstica fundamental na sua
utilização?

O tad é um tipo de dado que é definido pelo usuario. Sua caracteristica fundamental é que o usuario não precisa saver se os dados estão numa array, lista ou arquivo. 

2. Quais as vantagens de se programar com TADs?

modularidade, facildiade de manutenção e reutilização. 

3. Crie um TAD que implemente o controle de uma conta bancaria, implemente funções para inicializar, deposito, sacar e imprimir o saldo.

#include <stdio.h>
#include <stdlib.h> 

typedef struct {
int numero;
double saldo;
} contabanco;

contabanco* criarcontadina(int numero, double saldoini) {
    contabanco *novaconta = (contabanco*) malloc(sizeof(contabanco));
    if (novaconta != NULL) {
        novaconta->numero = numero;
        novaconta->saldo = saldoini;
        printf("conta %d criada.\n", numero);
        } else {
        printf("erro na memoria.\n");
    }
    return novaconta;
}
void depositar(contabanco*conta, double valor) {
    if (conta != NULL && valor > 0) {
        conta->saldo += valor;
        printf("deposito: r$ %.2f.\n", valor);
        } else {
        printf("erro no deposito.\n");
    }
}
void sacar(contabanco *conta, double valor) {
    if (conta != NULL && valor > 0 && conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("saque: r$ %.2f.\n", valor);
        } else {
        printf("saldo insuficiente.\n");
    }
}

void saldosaldo(const contabanco *conta) {
    if (conta != NULL) {
        printf("conta: %d | saldo: r$ %.2f\n", conta->numero, conta->saldo);
    }
}
int main() {
    contabanco *minhaconta = criarcontadina(412, 23.00);

    if (minhaconta != NULL) {
        saldosaldo (minhaconta);
        depositar (minhaconta, 450.50);
        sacar (minhaconta, 200.00);
        saldosaldo (minhaconta);
    }
    return 0;
}

4. Utilizando a alocação dinamica de memoria crie uma função para criar uma nova conta bancaria


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    double saldo;
} contabanco;

contabanco* criarcontadin(int numero) {
    contabanco *novaconta = (contabanco *)malloc(sizeof(contabanco));
    if (novaconta != NULL) {
        novaconta ->numero = numero;
        novaconta ->saldo = 0.0;
        printf("conta %d feita\n", numero);
    } else {
        printf("erro memoria\n");
    }
    return novaconta;
}

void depositar(contabanco *conta, double valor) {
    if (conta != NULL && valor > 0) {
        conta ->saldo += valor;
        printf("deposito: %.2f\n", valor);
    } else {
        printf("erro deposito\n");
    }
}

void sacar(contabanco *conta, double valor) {
    if (conta != NULL && valor> 0 && conta ->saldo >= valor) {
        conta ->saldo -= valor;
        printf("saque: %.2f\n", valor);
    } else {
        printf("erro saque\n");
    }
}

void imprimirsaldo(const contabanco *conta) {
    if (conta != NULL) {
        printf("id: %d | saldo: %.2f\n", conta->numero, conta->saldo);
    } else {
        printf("conta paia demais\n");
    }
}


int main() {
    contabanco *conta1 = criarcontadin(6769);

    if (conta1 != NULL) {
        depositar(conta1, 6769.67);
        sacar(conta1, 6769.70);
        imprimirsaldo(conta1);
    }

    return 0;
}


