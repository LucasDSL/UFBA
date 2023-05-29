#lang racket
; não é recursão de cauda, é dobra da direita pra esquerda
(define (sum list) (
  cond 
  [(null? list) 0]
  [else (+ (first list) (sum (rest list)))]
))

; tail recursion -> recursão de cauda, dobra a esquerda 
; a chamada recursiva é feita por último, a operação é feita antes
(define (sum_tail list acumulator)
  (if(null? list)
  acumulator
  (sum_tail (rest list) (+ (first list) acumulator))
  )
)
(sum '(1 2 3 4 5))  ; 15
(sum_tail '(1 2 3 4 5) 0) ; 15
(= (sum '(1 2 3 4 5)) (sum_tail '(1 2 3 4 5) 0)) ; #t