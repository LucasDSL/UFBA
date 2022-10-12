# -*- coding: utf-8 -*-
# Lista 1 
def selectionSort(arr):
    for i in range(len(arr)):
        ind_mini = i 
        for j in range(i+1, len(arr)):
            if arr[ind_mini] > arr[j]:
                ind_mini = j
        arr[ind_mini], arr[i] = arr[i], arr[ind_mini]
        
    return arr 
arrayString = input()
arrayString = arrayString.split(' ')
arraySorted = []
for string in arrayString: 
    arraySorted.append(int(string))

arraySorted = selectionSort(arraySorted)
for i in arraySorted: 
    print(i)
print()
for i in arrayString:
  print(i)