#lang racket 
(require rackunit)
(define (inverte l)
  (inv-aux l '())
)

(define (inv-aux l aux)
(if(null? l)
  aux
  (inv-aux (rest l) (cons (first l) aux))
)
)

(check-equal? (inverte '(1 2 3 4 5)) '(5 4 3 2 1))
(check-equal? (inverte '()) '())
(check-equal? (inverte '(1 2)) '(2 1))