import java.util.ArrayList;

public class Banco { 
   
    private ArrayList<Conta> contas;
    /**
     * COnstrutor para objetos da classe Banco
     */
    public Banco() {
        contas = new ArrayList<>();
        
    }

    public void adicionaConta(Conta conta){
        contas.add(conta);
    }

    public boolean removeConta(Conta conta) {
        return contas.remove(conta);
    }

    public void saque(float valor, Conta conta) {
        boolean res = contas.get(contas.indexOf(conta)).saque(valor);
        
    }

    public void deposito(float valor, Conta conta) {
        contas.get(contas.indexOf(conta)).deposito(valor);
    }
    
    
}
   

    

