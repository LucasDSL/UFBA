public class Funcionario{
  private String nome;
  private String cpf;
  private float salario;

    public Funcionario(String nome, String cpf, float salario) {
        this.nome = nome;
        this.cpf = cpf;
        this.salario = salario;
    }
    
    public String getNome(){
      return this.nome;
    }
    public void setNome(String nome){
      this.nome = nome;
    }
    public String getCpf(){
      return this.cpf;
    }
    public float getSalario(){
      return this.salario;
    }
    
    public float calculaSalario(){
      return this.salario;
    }
    public String toString(){
      return this.nome + ", " + this.cpf + ", " + this.salario;
    }
}
     
