public class Titulo {
  private String nome, editora;
  private float preco;

  public Titulo(String nome, String editora, float preco) {
    this.nome = nome;
    this.editora = editora; 
    this.preco = preco;
  }

  public String toString() {
    return "Nome: " + this.nome + "\nEditora: " + editora + "\nPreço: " + this.preco;  
  } 
  
  public String getNome() {
  	return this.nome;
  }
  
  public void setNome(String nome) {
  	this.nome = nome;
  }
  
  public String getEditora() {
  	return this.editora;
  }
  
  public void setEditora(String editora) {
  	this.editora = editora;
  }
  
  public float getPreco() {
  	return this.preco;
  }
  
  public void setPreco(float preco) {
  	this.preco = preco;
  }
  
}