I leaned LISP in 'organization of programming language' class.

1) **the function will take a single integer as an argument and returns a bool that tells you whether the num is divisible by 5.**

EX)
```lisp
>(divisible-by-5 14) 
#f
>(divisible-by-5 25)
#t
>(divisible-by-5 30)
#t
```
2) **the function will pass 7 into an argument.**

EX)
```lisp
>(function-7 #'sqrt)
2.64575...
>(function-7 #'(lambda(x)(+x7)))
14
>(function-7 #'1+)
8
```

3) **Fibonacci number**

EX)
```lisp
>(fib 1)
1
>(fib 5)
8
>(fib 10)
89
```

4) **using 'mapcar'.** 

EX)
```lisp
>(my-map #'sqrt '(9 25 81 49))
'(3 5 9 7)
>(my-map #'1+'(6 4 8 3))
'(7 5 9 4)
(my-map (lambda(n)(* n n))'(5 7))
'(25 49)
>(my-map #'evenp'(2 5 7 12))
'(#t #f #f #t)
```
