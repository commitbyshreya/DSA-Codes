def mergeSort(arr): # DIVIDE FUNCTION
    if(len(arr) <=1):  #base case: if only one ot 0 ele then return it and assume it as sorted
        return arr
    mid = len(arr) // 2  # divide arr and find the mid
    l = arr[:mid]  # l = index 0 to mid
    r = arr[mid:]  # r = index mid to end
    l = mergeSort(l)  # recursively keep dividing the l and r further until it reaches base case
    r = mergeSort(r)
    
    return merge(l,r) # once all ele reaches base case call the merge ,(this is the conquer func)
    
def merge(l ,r):  #CONQUER FUNCTION 
    new = [] # list is defined
    i,j = 0, 0
    
    while i < len(l) and j < len(r):  
        if l[i] < r[j]:  # if left ele is small append it to the list and increase the index
            new.append(l[i])
            i += 1
        else:           # else right ele append and j++
            new.append(r[j])
            j += 1

    new.extend(l[i:]) #append the remaining elements if any
    new.extend(r[j:]) 

    return new
    
    
arr = [3,69,5,10]
sorted = mergeSort(arr)
print("Sorted array: ", sorted )

