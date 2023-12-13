public class LivroDidatico extends Livro {
  private String area;

  public LivroDidatico(String nome, String editora, float preco, String resumo, String autorPrincipal, String area) {
    super(nome, editora, preco, resumo, autorPrincipal);
    this.area = area;
  }

  public String toString() {
    String anterior = super.toString();
    return anterior + "\nArea: " + this.area ;
  }
}