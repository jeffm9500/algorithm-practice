from algorithms import *

input = open("input.txt", "r").read().split(" ")
output = open("output.txt", "w+")

print(f'input: \t{input}')
bubbleOutput = bubbleSort(input)
print(f'bubble sort output: \t{bubbleOutput}')
output.write(str(bubbleOutput))

quickOutput = quicksort(input, 0, len(input)-1)
print(f'quick sort output: \t{quickOutput}')