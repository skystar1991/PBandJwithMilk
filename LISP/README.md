I leaned LISP for 'organization of programming language' class.

Q1: the function will take a single integer as an argument and returns a bool that tells you whether the num is divisible by 5. 

EX) 

>(divisible-by-5 14) 

#f

>(divisible-by-5 25)

#t

>(divisible-by-5 30)

#t

Q2: the function will pass 7 into an argument.

EX) 

>(function-7 #'sqrt)

2.64575...

>(function-7 #'(lambda(x)(+x7)))

14

>(function-7 #'1+)

8


Q3: Fibonacci number

EX)

>(fib 1)

1

>(fib 5)

8

>(fib 10)

89


Q4: using 'mapcar'. 

EX)

>(my-map #'sqrt '(9 25 81 49))

'(3 5 9 7)

>(my-map #'1+'(6 4 8 3))

'(7 5 9 4)

(my-map (lambda(n)(* n n))'(5 7))

'(25 49)

>(my-map #'evenp'(2 5 7 12))

'(#t #f #f #t)


