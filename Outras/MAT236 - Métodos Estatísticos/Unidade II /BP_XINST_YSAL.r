library(ggplot2)
vector_salaries <- BASE4_CSV$Renda_familiar_sm
vector_salaries <- sub(",", ".", vector_salaries)      
vector_salaries <- as.numeric(vector_salaries)
sort(vector_salaries, decreasing=FALSE, na.last=TRUE)
ggplot(BASE4_CSV, aes(x=Instrucao_chefe, y=vector_salaries)) + 
  geom_boxplot(fill="slateblue", alpha=0.4) + 
  ggtitle("Nível Instrução da Pessoa Chefe por Salários") +
  xlab("Nível de Instrução da Pessoa Chefe") + 
  ylab("Salários") + 
  scale_y_continuous(limits = c(0, 27), breaks = seq(0, 27, 2))

