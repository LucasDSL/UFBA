public class Caixa extends Funcionario {
  private float horaExtra;
  private static float valorHoraExtra = 10;

  public Caixa(String nome, String cpf, float salario) {
    super(nome, cpf, salario);
    this.horaExtra = 0;
  }

  public void addHoraExtra(float qtdHoras) {
    this.horaExtra += qtdHoras;
  }

  public void removeHoraExtra(float qtdHoras) {
    this.horaExtra -= qtdHoras;
  }
  
  @Override
  // Gente, o erro era que esta função estava com o nome "calculaSalário", com acento.
  public float calculaSalario(){
    return super.getSalario() 
    + (horaExtra * valorHoraExtra);
  }

  public String toString(){
    return super.toString() + ", Hora Extra: " + this.horaExtra;
  }

}
 
