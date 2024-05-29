using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        Console.Write("Quantos números você deseja inserir? ");
        int n = int.Parse(Console.ReadLine());

        List<int> numeros = new List<int>();
        int soma = 0;

        for (int i = 0; i < n; i++) {
            Console.Write("Insira o número {0}: ", i + 1);
            int numero = int.Parse(Console.ReadLine());
            numeros.Add(numero);
            soma += numero;
        }

        float media = (float)soma / n;
        Console.WriteLine("Média: {0:F2}", media);
        Console.WriteLine("Números acima da média:");

        foreach (int numero in numeros) {
            if (numero > media) {
                Console.Write(numero + " ");
            }
        }
    }
}
