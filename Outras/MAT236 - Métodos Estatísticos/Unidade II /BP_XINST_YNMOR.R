ggplot(BASE4_CSV, aes(x=Instrucao_chefe, y=Numero_moradores)) + 
  geom_boxplot(fill="slateblue", alpha=0.4) + 
  ggtitle("Instrução da Pessoa Chefe da Família por Número de Moradores") +
  ylab("Número de Moradores") + 
  xlab("Instrução da Pessoa Chefe da Família") + 
  scale_y_continuous(limits = c(0, 10), breaks = seq(0, 10, 2))

