
linhas = int(input())
linha_sem_rotulo = int(input())

matriz_dados = list()
total_rotulos = 0
for i in range(0, linhas):
    linha_dados = list()
    matriz_dados.append(linha_dados)
    for j in range(0, linhas + 1):
        # Adicionando o rótulo da linha que não o possui
        if i == linhas - linha_sem_rotulo and j == linhas:
            matriz_dados[i].append(total_rotulos/(linhas - 1))
        # Lendo os outros números da matriz
        else:
            matriz_dados[i].append(int(input()))

        # Somando os rótulos:
        if i != linhas - linha_sem_rotulo and j == linhas:
            total_rotulos += matriz_dados[i][j]

print(matriz_dados[linhas-linha_sem_rotulo][linhas])