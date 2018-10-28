I learned Prolog in 'organization of programming lanuage' class. 

**1) Odd Multiple of 3**

*oddMultiOf3/1* function will determine whether an integer is an odd multiple of3. if the given parameter is not an integer, it will print the ERROR message.

EX)
```prolog
?-oddMultiOf3(171).
true.
?-oddMultiOf3(100).
false.
?-oddMultiOf3(4.2).
ERROR: The given parameter is not an integer.
```

**2) List Product**

*list_prod/2* function will take a list of numbers in first parameter.

EX)
```prolog
?-list_prod([4,3], Product).
Product=12.
?-list_prod([7,8,0,12], Product).
Product=0.
?-list_prod([], Product).
Product=0.
```

**3) Segregate**

*segregate/3* function will take a list of integers and split into two lists.

EX)
```prolog
?-segregate([8,7,6,5,4,3], Even, Odd).
Even=[8,6,4]
Odd=[7,5,3]
?-segregate([], Even, Odd).
Even=[]
Odd=[]
```

**4) Route**

*route/3* will take two cities and finds to get from city A to city B. route(cityA, cityB, Route).

**5) Genealogy**

this will tell you the family tree. set the family rule and call the function will tell you the relationship.
