#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define maxNrRifa 100
#define maxComprasRifa 5
#define maxUsuarios 100 
#define maxRifas 100

//system
int execucoesMain = 0;

//navegacao
int escolha;
int rLogin = 0, rLobby = 0, idUsuarioLogado = 0, ultimoUsuarioVetor = -1;

//variaveis temporarias
char tNome[100], tUsuario[100], tSenha[100], tIdade[100], tCPF[100], tTelefone[100];
char loginUsuario[100], loginSenha[100];
char tNumerosRifa[100], tTituloRifa[100], tValorRifa[100];
char x[100];


//STRUCT
    typedef struct {     //Tipo de struct usuarioStruct
        int idUsr;             //ID único do usuário (indiceVetor + 1)
        int idadeUsr;          //Idade do usuário
        char usuarioUsr[100];  //Usuário de login do usuário
        char senhaUsr[100];    //Senha do usuário
        char nomeUsr[100];     //Nome do usuário
        char cpfUsr[12];       //CPF do usuário
        char telefoneUsr[12];  //Telefone do usuário
    }usuarioStruct;
    usuarioStruct usuarios[maxUsuarios]; //Lista do tipo usuarioStruct

    typedef struct{     //Tipo de struct usuarioStruct
        int idRifa;                  //ID único da rifa (indiceVetor + 1)
        int qtdNrRifa;               //Quantidade de numeros que a rifa possui
        int valorNrRifa;             //Valor de cada numero da rifa
        char nomeRifa[100];          //Nome da rifa
        int id_UsrDono;              //ID do usuário que criou a rifa
        int vendaRifa[maxNrRifa][3]; //numeroDaRifa[n][0], idUsr[n][1], statusNrRifa[n][2]

    }rifaStruct;
    rifaStruct rifas[maxRifas]; //Lista do tipo rifaStruct
//STRUCT