b=set()
print(type(b))
#adding value to an empty set

b.add(3)
b.add(5)
b.add(5) #adding a value repeteadly does not change a set

# b.add([4,5,6]) we cannot add list or dictionary to sets
# b.add({4:5})
print(b)

print(len(b)) # prints the length of the set

b.remove(5)
# b.remove(15)  # throws an error because 15 is not in the sets 
print(b)

print(b.pop())
print(b)

