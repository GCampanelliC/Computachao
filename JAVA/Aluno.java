import java.util.Scanner;

public class Aluno {
 //modificador tipo variavel
 private String matricula;
 private String nome;
 private double nota1;
 private double nota2;
	
	

  //modificador tipo_retorno nome (parametros){}
  public void estudar(){
	  
	 System.out.println("Estudando...");
  }
  
  
  public double calcularMedia(){	 
	return  (nota1+nota2)/2;
	 
  }
  
  public static void main(String args[]) {
	Scanner ler = new Scanner (System.in);
	Aluno al1 = new Aluno();
	al1.setNome(ler.nextLine());
	al1.setNota1(ler.nextDouble());
	al1.setNota2(ler.nextDouble());
	
	System.out.println(al1.getNome()+", "+al1.getNota1()+", "+al1.getNota2());
	System.out.printf("%s, Nota 1: %.2f , Nota 2: %.2f\n", al1.getNome(),al1.getNota1(),al1.getNota2());
	System.out.printf("Média : %.2f\n", al1.calcularMedia());
	al1.situacaoAluno();
	
	
	
  }	
  
  public void situacaoAluno(){
	 double med = calcularMedia();
	  
	  if(med >= 6.0){
		  System.out.printf("Aprovado.\n");
	  }
	  else if(( med > 4.0) && (med < 6.0)){
		  System.out.printf("Recuperação.\n");
	  }
	  else if(med < 6.0){
		  System.out.printf("Reprovado.\n");
	  }
  }
		
  
//  public Aluno(String matricula, String nome, double nota1, double nota2) {
//	
//	this.matricula = matricula;
//	this.nome = nome;
//	this.nota1 = nota1;
//	this.nota2 = nota2;
//  }


	public String getMatricula() {
		return matricula;
	}
	
	public void setMatricula(String matricula) {
		this.matricula = matricula;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public double getNota1() {
		return nota1;
	}
	
	
	public void setNota1(double nota1) {
		this.nota1 = nota1;
	}
	
	
	public double getNota2() {
		return nota2;
	}
	
	public void setNota2(double nota2) {
		this.nota2 = nota2;
	}
	
	  
}