#lang racket
(define (atom? x) (
  and (not (null? x))
  (not (pair? x))
))

(define (not-atom? x) (not (atom? x)))

; Verificar se uma lista só é composta por átomos
; tailored recursion
(define (lat? l) 
  (cond 
  [(null? l) #t]
  [(not-atom? (first l)) #f]
  [else (lat? (rest l))]
  )
)

(lat? '(a b c))