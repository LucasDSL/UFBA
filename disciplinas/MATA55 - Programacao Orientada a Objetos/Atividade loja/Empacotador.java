
public class Empacotador extends Funcionario {
    private boolean deficienciaAuditiva;

    public Empacotador(String nome, String cpf, float salario, boolean deficienciaAuditiva) {
        super(nome, cpf, salario);
        this.deficienciaAuditiva = deficienciaAuditiva;
    }

    public boolean getDeficienciaAuditiva() {
        return this.deficienciaAuditiva;
    }

    @Override
    public float calculaSalario () {
        if(this.deficienciaAuditiva) {
            return super.getSalario() * (float)1.1;
        }

      return super.calculaSalario();
    }
}