#lang racket

(define (member? atom list) (
  cond
  [(null? list) #f]
  [(eqv? atom (first list)) #t]
  [else (member? atom (rest list))]
))

(member? 1 '(1 b (d . c)))
