import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double D1, D2, D3, maiorD;
		
		System.out.println("Digite as tres distancias: ");
		D1 = sc.nextDouble();
		D2 = sc.nextDouble();
		D3 = sc.nextDouble();
		
		if (D1 > D2 && D1 > D3) {
	           maiorD = D1;
	       }
	       else if (D2 > D3) {
	           maiorD = D2;
	       }
	       else { maiorD = D3;
	       }
		
		System.out.println("MAIOR DISTANCIA = " + String.format("%.2f", maiorD));
		
		sc.close();

	}

}
