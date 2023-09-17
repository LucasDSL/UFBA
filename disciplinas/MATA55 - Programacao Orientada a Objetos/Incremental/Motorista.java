public class Motorista { 
    private String nome_civil, nome_social, mae, pai, naturalidade, cpf_cnpj;
    private String rua, complemento, bairro, telefone;
    private int numero;
    private Date data_nascimento;
    private String num_habilitacao, cat_habilitacao;
    private int tipo, num_contrato;

    public Motorista(String nome_civil, String nome_social, String mae, String pai, String naturalidade, String cpf_cnpj, String rua, String complemento, String bairro, String telefone, int numero, Date data_nascimento, String num_habilitacao, String cat_habilitacao, int tipo, int num_contrato) {
        this.nome_civil = nome_civil;
        this.nome_social = nome_social;
        this.mae = mae;
        this.pai = pai;
        this.naturalidade = naturalidade;
        this.cpf_cnpj = cpf_cnpj;
        this.rua = rua;
        this.complemento = complemento;
        this.bairro = bairro;
        this.telefone = telefone;
        this.numero = numero;
        this.data_nascimento = data_nascimento;
        this.num_habilitacao = num_habilitacao;
        this.cat_habilitacao = cat_habilitacao;
        this.tipo = tipo;
        if(tipo == 1) {
            this.num_contrato = num_contrato;
        }
    }

    public String getNomeCivil() {
        return nome_civil;
    }

    public void setNomeCivil(String nome_civil) {
        this.nome_civil = nome_civil;
    }

    public String getNomeSocial() {
        return nome_social;
    }
    
    public void setNomeSocial(String nome_social) {
        this.nome_social = nome_social;
    }

    public String getMae() {
        return mae;
    }

    public void setMae(String mae) {
        this.mae = mae;
    }

    public String getPai() {
        return pai;
    }

    public void setPai(String pai) {
        this.pai = pai;
    }

    public String getNaturalidade() {
        return naturalidade;
    }

    public void setNaturalidade(String naturalidade) {
        this.naturalidade = naturalidade;
    }

    public String getCpf_cnpj() {
        return cpf_cnpj;
    }

    public void setCpf_cnpj(String cpf_cnpj) {
        this.cpf_cnpj = cpf_cnpj;
    }


    public String getNum_habilitacao() {
        return num_habilitacao;
    }

    public void setNum_habilitacao(String num_habilitacao) {
        this.num_habilitacao = num_habilitacao;
    }

    public String getCat_habilitacao() {
        return cat_habilitacao;
    }

    public void setCat_habilitacao(String cat_habilitacao) {
        this.cat_habilitacao = cat_habilitacao;
    }

    public String getDetailedTipo() {
        if(this.getTipo() == 1) {
            return "terceirizado";
        }
        return "servidor";
    }
    public int getTipo() {
        return tipo;
    }

    public void setTipo(int tipo) {
        if (tipo == 1 || tipo == 2) {
            this.tipo = tipo;
        } else {
            System.out.println("Método inválido.");
        }
    }

    public int getNumContrato() {
        return num_contrato;
    }

    public void setNumContrato(int num_contrato) {
        if(this.getTipo() == 1){
            this.num_contrato = num_contrato;
        } else {
            System.out.println("Tipo inválido");
        }
    }

    public Date getDataNascimento() {
        return data_nascimento;
    }

    public void setDataNascimento(Date data_nascimento) {
        if (data_nascimento.getAno() > 1900) {
            this.data_nascimento = data_nascimento;
        } else {
            System.out.println("Data inválida");
        }
    }

    public String getRua() {
        return rua;
    }

    public void setRua(String rua) {
        if (rua.length() > 0) {
            this.rua = rua;
        } else {
            System.out.println("Rua inválida");
        }
    }

    public String getComplemento() {
        return complemento;
    }

    public void setComplemento(String complemento) {
        if (complemento.length() > 0) {
            this.complemento = complemento;
        } else {
            System.out.println("Complemento inválido");
        }
    }

    public String getBairro() {
        return bairro;
    }

    public void setBairro(String bairro) {
        if (bairro.length() > 0) {
            this.bairro = bairro;
        } else {
            System.out.println("Bairro inválido");
        }
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        if (telefone.length() > 0) {
            this.telefone = telefone;
        } else {
            System.out.println("Telefone inválido");
        }
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        if (numero > 0) {
            this.numero = numero;
        } else {
            System.out.println("Número inválido");
        }
    }
}