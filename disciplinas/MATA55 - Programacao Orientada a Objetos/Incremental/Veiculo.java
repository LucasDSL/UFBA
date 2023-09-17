public class Veiculo {
    private String placa, modelo;
    private int ano, capacidade, tipo, num_contrato;


    public Veiculo(String placa, String modelo, int ano, int capacidade, int tipo, int num_contrato) {
        this.placa = placa;
        this.modelo = modelo;
        this.ano = ano;
        this.capacidade = capacidade;
        this.tipo = tipo;
        if(tipo == 1) {
            this.num_contrato = num_contrato;
        }
    }


    public String getPlaca() {
        return placa;
    }
    
    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo){
        this.modelo = modelo;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano){
        this.ano = ano;
    }

    public int getCapacidade() {
        return capacidade;
    }

    public void setCapacidade(int capacidade){
        this.capacidade = capacidade;
    }

    public int getTipo() {
        return tipo;
    }

    public void setTipo(int tipo){
        this.tipo = tipo;
    }

    public int getNumContrato() {
        return num_contrato;
    }

    public void setNumContrato(int num_contrato){
        if(this.getTipo() == 1){
            this.num_contrato = num_contrato;
        } else {
            System.out.println("Método inválido.");
        }
    }

    public String getDetailedTipo() {
        if(this.getTipo() == 1) {
            return "alugado";
        }
        return "próprio";
    }


}