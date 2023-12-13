import java.util.*;
class Main {
  public static Titulo consultarTitulo(Titulo titulo, ArrayList<Titulo> titulos) { 
   Titulo t;
   for(Iterator<Titulo> it = titulos.iterator(); it.hasNext();) {
     t = it.next();
     if(t.getNome().equals(titulo.getNome()) && t.getEditora().equals(titulo.getEditora())) {
      return t;    
     }
   } 
    return null;
  }

  public static String precoFinal(Titulo titulo, ArrayList<Titulo> titulos) {
    Titulo t = consultarTitulo(titulo, titulos);
    if(t == null) {
      return null;
    } 
    float preco;
    String extraPreco;
    if(t instanceof Livro) {
      Livro l = (Livro) t;
      preco = l.getPreco() * 1.15f;
      extraPreco = "\nValor ISS: 15%" + "\nPreço Final: " + preco;
      return l.toString() + extraPreco;
    } else if(t instanceof LivroDidatico) {
      LivroDidatico ld = (LivroDidatico) t;
      preco = ld.getPreco() * 1.02f;
      extraPreco = "\nValor ISS: 2%" + "\nPreço Final: " + preco;
      return ld.toString() + extraPreco;
    } else if(t instanceof Revista) {
      Revista r = (Revista) t;
      preco = r.getPreco() * 1.03f;
      extraPreco = "\nValor ISS: 3%" + "\nPreço Final: " + preco;
      return r.toString() + extraPreco;
    }
    return "";
  }

  public static void todosOsLivros( ArrayList<Titulo> titulos) {
    for(Iterator<Titulo> it = titulos.iterator(); it.hasNext();) {
      Titulo t = it.next();
         if(t instanceof Livro) {
           Livro l = (Livro) t;
           System.out.println(l.toString());
         } else if(t instanceof LivroDidatico) {
           LivroDidatico ld = (LivroDidatico) t;
            System.out.println(ld.toString());
         } else if(t instanceof Revista) {
           Revista r = (Revista) t;
            System.out.println(r.toString());
         }
     } 
  }
  
  public static void main(String[] args) {
    ArrayList<Titulo> titulos = new ArrayList<Titulo>();
    Livro l = new Livro("Java 8", "Pearson", 59.90f, "A bit about the book get it", "Some dude");
    LivroDidatico ld= new LivroDidatico("French Grammar", "Des Française", 29.90f, "Un peu de Livre", "Un Français", "Education");
    Revista r = new Revista( "Revista Federal", "Federal", 29.90f, "Semanal");
    titulos.add(l);
    titulos.add(ld);
    titulos.add(r);
    Titulo t1 = consultarTitulo(l, titulos);
    System.out.println(t1.toString());
    String infoT2 = precoFinal(ld, titulos);
    System.out.println(infoT2.toString());
    todosOsLivros(titulos);
  }
}