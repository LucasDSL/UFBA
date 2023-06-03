#lang racket 
(require rackunit)
(define (rmembro a l) 
(cond
[(null? l) '()]
[(eqv? a (first l)) (rest l)]
[else (cons (first l) (rmembro a (rest l)))]
)
)

(check-equal? (rmembro 3 '(3)) '())
(check-equal? (rmembro 3 '(1 2 3 4 5 3 3 6)) '(1 2 4 5 3 3 6))
(check-equal? (rmembro 3 '()) '())
(check-equal? (rmembro 3 '(1 2 3 4 5)) '(1 2 4 5))

(define (rmembro_all a l) 
(cond
[(null? l) '()]
[(eqv? a (first l)) (rmembro_all a (rest l))]
[else (cons (first l) (rmembro_all a (rest l)))]
)
)

(check-equal? (rmembro_all 3 '(1 2 3 4 5 3 3 6)) '(1 2  4 5 6))
(check-equal? (rmembro_all 3 '()) '())
(check-equal? (rmembro_all 3 '(3 3)) '())