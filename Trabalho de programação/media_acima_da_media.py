def main():
    n = int(input("Quantos números você deseja inserir? "))
    
    numeros = []
    soma = 0

    for i in range(n):
        numero = int(input(f"Insira o número {i + 1}: "))
        numeros.append(numero)
        soma += numero

    media = soma / n
    print(f"Média: {media:.2f}")
    print("Números acima da média:")

    for numero in numeros:
        if numero > media:
            print(numero, end=" ")

if __name__ == "__main__":
    main()
