library(ggplot2)
ggplot(BASE4_CSV, aes(x=Bairro, y=Numero_moradores)) + 
  geom_boxplot(fill="slateblue", alpha=0.4) + 
  ggtitle("Bairro por Número de Moradores da Família") +
  xlab("Bairro") + 
  ylab("Número de Moradores") + 
  scale_y_continuous(limits = c(0, 10), breaks = seq(0, 10, 2))
