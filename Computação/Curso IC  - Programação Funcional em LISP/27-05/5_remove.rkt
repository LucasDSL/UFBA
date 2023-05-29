#lang racket 
(define (rmembro a l) 
(cond
[(null? l) '()]
[(eqv? a (first l)) (rest l)]
[else (cons (first l) (rmembro a (rest l)))]
)
)

(define (rmembro_all a l) 
(cond
[(null? l) '()]
[(eqv? a (first l)) (rmembro_all a (rest l))]
[else (cons (first l) (rmembro_all a (rest l)))]
)
)

(rmembro 3 '(1 2 3 4 5 3 3 6))
(rmembro_all 3 '(1 2 3 4 5 3 3 6))