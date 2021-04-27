import java.util.Scanner; 

public class Leitura {

	public static void main(String[] args) {	
	Scanner ler = new Scanner(System.in);
	
	int idade = ler.nextInt();
	float peso =ler.nextFloat();
	double nota = ler.nextDouble();
	ler.nextLine();
	String nome = ler.nextLine();
	
	
	System.out.println(idade + " " + peso + " " + nota + " " + nome);
	
	}
}
	

