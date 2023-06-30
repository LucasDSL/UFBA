#lang racket 
(require rackunit)
(define (atom? x) (
  and (not (null? x))
  (not (pair? x))
))
(define (not-atom? x) (not (atom? x)))
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

;; Questão 3 

;; concatenar2
;; Concatena uma lista de listas 
;; list? -> list?
(define (concatenar2 l1)
    (cond 
    [(null? l1) l1]
    [(list? (first l1)) (concatenar1 (concatenar2 (first l1)) (concatenar2 (rest l1)))]
    [else (cons (first l1) (concatenar2 (rest l1)))]
    )
)

(check-equal? (concatenar2 '()) '())
(check-equal? (concatenar2 '((a b c) (d e f g h))) '(a b c d e f g h))

;; Questão 4 

;; concatenar3
;; função variádica para concatenar N listas. 
;; atom? any/c ... -> list?
(define (concatenar3 n . listas) 
   (cond 
   [(< n 1) null]
   [(list? (first listas)) (concatenar3 (- n 1) (first listas) (rest listas))]
   )
)
 

;; Questão 6 
;; insere-fim
;; insere um elemento no fim de uma lista
;; atom? list? -> list?
(define (insere-fim n lista ) 
(if (null? lista) (list n)
(cons (first lista) (insere-fim n (rest lista)))
))
;; intercala - utiliza insere-fim
;; intercala os dois elementos n vezes 
;; atom? atom? atom? -> list?
(define (intercala n e1 e2) 
    (if (< n 1) null
    (cons e1 
    (apply intercala (cons (- n 1) (insere-fim e1 e2)))
    )
    )
)

;(check-equal? (intercala 3 'a 'b) '(a b a))