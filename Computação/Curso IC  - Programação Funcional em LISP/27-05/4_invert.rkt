#lang racket 

(define (inverte list)
  (inv-aux l '())
)

(define (inv-aux l a)
(if(null? list)
  a
  (inv-aux (rest l) (cons (first l) a))
)
)

