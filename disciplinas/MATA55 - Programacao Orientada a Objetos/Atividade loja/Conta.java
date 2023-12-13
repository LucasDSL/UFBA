 
 public  class Conta
{
    private String titular;
    private int numero;
    private int agencia;
    private float saldo;
    
    public Conta(String nomeTit, int num, int ag, float saldoInicial)
    {
        titular = nomeTit;
        numero = num;
        agencia = ag;
        saldo = saldoInicial;
    }

    //m�todo abstrato saque. Deve ser implementado pelas subclasses.
    public boolean saque(float valor){
        if (saldo >= valor){
            saldo=saldo-valor;
            return true;
        }
        else
         return false;
        
    }
    
    public void deposito(float valor)
    {
        saldo = saldo + valor;
    }

    public void debita(float valor)
    {
        saldo = saldo - valor;
    }
    
    public float getSaldo()
    {
        return saldo;
    }

    public String getTitular() {
        return titular;
    }

    public void setTitular(String titular) {
        this.titular = titular;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public int getAgencia() {
        return agencia;
    }

    public void setAgencia(int agencia) {
        this.agencia = agencia;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }
}

