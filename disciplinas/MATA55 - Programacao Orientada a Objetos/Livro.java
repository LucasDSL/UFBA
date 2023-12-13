public class Livro extends Titulo {
  private String autorPrincipal, resumo;

  public Livro(String nome, String editora, float preco, String resumo, String autorPrincipal) {
    super(nome, editora, preco);
    this.resumo = resumo;
    this.autorPrincipal = autorPrincipal;
  }

  public String toString() {
    String anterior = super.toString();
    return anterior + "\nResumo: " + this.resumo + "\nAutor Principal: " + this.autorPrincipal;
  }

  public String getAutorPrincipal() {
    return autorPrincipal;
  }

  public void setAutorPrincipal(String autorPrincipal) {
    this.autorPrincipal = autorPrincipal;
  }

  public String getResumo() {
    return resumo;
  }

  public void setResumo(String resumo) {
    this.resumo = resumo;
  }

}