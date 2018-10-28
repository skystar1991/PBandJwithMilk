(defun divisible-by-5 (x)
	(eql 0 (mod x 5)))

(defun function-7 (x)
	(funcall x 7))	

(defun fib (x)
	(if (or (equal x 0) (equal x 1))
		1
	(+ (fib (- x 1)) (fib (- x 2)))))

(defun my-map (x y)
	(if(= (list-length y) 0) 
		NIL 
		(cons (funcall x (car y)) (my-map x (cdr y)))
	)
)

