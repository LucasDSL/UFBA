public class Revista extends Titulo {
  private String periodicidade;

  public Revista(String nome, String editora, float preco, String periodicidade) {
    super(nome, editora, preco);
    this.periodicidade = periodicidade;
  }

  public String toString() {
    String anterior = super.toString();
    return anterior + "\nPeriodicidade: " + this.periodicidade;
  }

  public String getPeriodicidade() {
    return periodicidade;
  }

  public void setPeriodicidade(String periodicidade) {
    this.periodicidade = periodicidade;
  }
}