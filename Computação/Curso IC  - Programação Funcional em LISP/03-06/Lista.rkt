#lang racket 
(require rackunit)

;; Questão 1

;; concatenar1
;; Concatena duas listas   
;; list? list? -> list?
(define (concatenar1 l1 l2) (
    if (null? l1) l2
    (cons (first l1) (concatenar1 (rest l1) l2))    
))

(check-equal? (concatenar1 '(a b c) '(d e f g h)) '(a b c d e f g h))
(check-equal? (concatenar1 '(a b c) '()) '(a b c))
(check-equal? (concatenar1 '() '()) '())

;; Questão 2 

;; concatenarInv
;; Concatena duas listas invertendo a ordem delas 
;; list? list? -> list?
(define (concatenarInv l1 l2)(
    if (null? l2) l1
   (cons (first l2) (concatenarInv l1 (rest l2)))
))

(check-equal? (concatenarInv '(a b c) '(d e f g h)) '(d e f g h a b c))
(check-equal? (concatenarInv '(a b c) '()) '(a b c))
(check-equal? (concatenarInv '() '()) '())