def quickSort(arr, low, high):
    if low < high:  # if low = 0 and high = 0 only one ele so no need to sort 
        pivot = partition(arr, low, high)
        quickSort(arr, low, pivot-1)
        quickSort(arr, pivot+1, high)

def partition(arr, low, high):
    p = arr[low]
    i = low + 1
    j = high
    
    while True:
        while i <= j and arr[i] <= p: # left->right , until elements are less then pivot i++
            i += 1
        while i<=j and arr[j] >= p: # right->left, until elements are greater then pivot j--
            j -= 1
        if i <= j:  # if right ele is greater it will come out of while loop and when j is smaller 
        #so before swapping i and j again check if j has not crossed i 
            arr[i], arr[j] = arr[j], arr[i]
        else:
            break # when j crosses i  the low element changes to the current j element 
    arr[low], arr[j] = arr[j], arr[low]
    
    return j
            

arr = list(map(int,input("Enter array elements: ").split()))
quickSort(arr,0,len(arr)-1)
print("Sorted  Array: " + str(arr))




