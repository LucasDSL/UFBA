public class ContaPoupanca extends Conta
{
    //valor em percentagem do rendimento mensal da poupa�a
    private float rendimento;

    public ContaPoupanca(String nomeTit, int num, int ag, float saldoInicial, float rend)
    {
        super(nomeTit, num, ag, saldoInicial);
        rendimento = rend;
    }

    public void realizarRendimento()
    {
        /*
         * Realiza um acr�scimo na conta para realiza��o
         * do rendimento mensal da conta poupan�a.
         * Lembrando que estamos considerando o rendimento
         * como um valor em percentagem. Ex.: 1%, 0,6%, 5% etc.
         */
        super.deposito((rendimento/100)*super.getSaldo());
    }
    
    public void setRendimendo(float novoRend)
    {
        rendimento = novoRend;
    }
    
    //implementa��o do m�todo abstrato da superclasse abstrata.
    public boolean saque(float valor)
    {
        if(valor <= super.getSaldo())
        {
            super.debita(valor);
            return true;
        }
        return false;
    }
}
