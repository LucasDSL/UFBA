#lang racket
;(define delta (lambda (a b c) (- (* b b) (* 4 a c))))
(define (delta a b c) (- (* b b) (* 4 a c))) ; outra forma de definir funções 
(define solverPlus (lambda (a b c) (/ (+ (- 0 b) (sqrt (delta a b c))) (* 2 a) )))  
(define solverMinus (lambda (a b c) (/ (- (- 0 b) (sqrt (delta a b c))) (* 2 a) )))
;(define raizes (lambda (a b c) (values (solverPlus a b c) (solverMinus a b c))))
(define (raizes a b c) (values (solverPlus a b c) (solverMinus a b c)))
(raizes 1 -3 -10) ; 5 -2 delta > 0
(raizes 9 -12 4) ; 2/3 2/3 delta = 0
(raizes 2 -4 4) ; 1 + i 1 - i delta < 0