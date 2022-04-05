def merge_sort(array_input):
    if len(array_input) > 1:
  
        mid = len(array_input)//2
  
        left_array = array_input[:mid]

        right_array = array_input[mid:]
  
        mergeSort(left_array)
  
        mergeSort(right_array)
  
        i = j = k = 0
  
        while i < len(left_array) and j < len(right_array):
            if left_array[i] < right_array[j]:
                array_input[k] = left_array[i]
                i += 1
            else:
                array_input[k] = right_array[j]
                j += 1
            k += 1
  
        while i < len(left_array):
            array_input[k] = left_array[i]
            i += 1
            k += 1
  
        while j < len(right_array):
            array_input[k] = right_array[j]
            j += 1
            k += 1

def get_tests_run_sort_count():
    len_array_input = int(input())
    array_input = input().split(' ')
    for t in range(len_array_input):
        array_input[t] = int(array_input[t])
    copy_array_input = array_input[:]
    mergeSort(array_input)
    oposit_index = len_array_input-1
    numbers_not_moved = 0
    for i in range(len_array_input):
        if(array_input[i] == copy_array_input[oposit_index]):
            numbers_not_moved += 1
        oposit_index -= 1
    print(numbers_not_moved)

num_tests = int(input())
for i in range(num_tests): 
    get_tests_run_sort_count()