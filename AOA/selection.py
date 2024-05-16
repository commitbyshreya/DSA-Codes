#Selection Sort


number = input("Enter numbers: ").split()

number = [int(num) for num in number]

for i in range(len(number)):
    for j in range(i+1,len(number)):
        if number[j] < number[i]:
            number[i], number[j] = number[j] , number[i]
            
print(number)

