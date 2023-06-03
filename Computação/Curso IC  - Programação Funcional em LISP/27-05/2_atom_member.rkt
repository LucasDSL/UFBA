#lang racket
(require rackunit)

(define (member? atom list) (
  cond
  [(null? list) #f]
  [(eqv? atom (first list)) #t]
  [else (member? atom (rest list))]
))

(check-equal? (member? 1 '(1 b (d . c))) #t)
(check-equal? (member? 1 '()) #f)
(check-equal? (member? 1 '(2 b (d . c))) #f)
