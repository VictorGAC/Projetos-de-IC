import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Quantos números você deseja inserir? ");
        int n = scanner.nextInt();

        int[] numeros = new int[n];
        int soma = 0;

        for (int i = 0; i < n; i++) {
            System.out.print("Insira o número " + (i + 1) + ": ");
            numeros[i] = scanner.nextInt();
            soma += numeros[i];
        }

        float media = (float)soma / n;
        System.out.printf("Média: %.2f\n", media);
        System.out.println("Números acima da média:");

        for (int i = 0; i < n; i++) {
            if (numeros[i] > media) {
                System.out.print(numeros[i] + " ");
            }
        }
    }
}
