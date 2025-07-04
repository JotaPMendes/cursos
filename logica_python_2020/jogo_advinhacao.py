import random

def jogar():
    print("*******************************")
    print("Bem vindo no jogo de advinhação")
    print("*******************************")

    numero_secreto = random.randrange(1, 101)
    total_de_tentativas = 0
    pontos = 1000

    print("Qual o nível de dificuldade?")
    print("(1) Fácil (2) Médio (3) Difícil")

    nivel = int(input("Defina o nível: "))

    if (nivel == 1):
        total_de_tentativas = 20
    elif (nivel == 2):
        total_de_tentativas = 10
    else:
        total_de_tentativas = 5

    for rodada in range(1, total_de_tentativas + 1):

        print("Tentativa {} de {}".format(rodada, total_de_tentativas))
        chute = int(input("Digite um numero entre 1 e 100: "))
        print("Você digitou: ", chute)

        if (chute < 1 or chute > 100):
            print("Você deve digitar um número entre 1 e 100!")
            continue

        acertou = numero_secreto == chute
        maior = numero_secreto < chute
        menor = numero_secreto > chute

        if (acertou):
            print("Você acertou e fez {} pontos!".format(pontos))
            break
        else:
            pontos_perdidos = round(abs(numero_secreto - chute) / 3)
            pontos = pontos - pontos_perdidos
            if (maior):
                print("Você errou! O seu chute foi maior do que o número secreto.")
                if (rodada == total_de_tentativas):
                    print("O número secreto era {}. Você fez {}".format(numero_secreto, pontos))
            elif (menor):
                print("Você errou! O seu chute foi menor do que o número secreto.")
                if (rodada == total_de_tentativas):
                    print("O número secreto era {}. Você fez {}".format(numero_secreto, pontos))

    print("Fim de jogo!")

if(__name__ == '__main__'):
    jogar()
jogar()