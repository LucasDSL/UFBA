#lang racket
(require rackunit)

(define (atom? a)
  (not (or (pair? a) (null? a))
       ))

;;rmember e l
;;remove a primeira ocorr do elemento e na lista l
;; atom? list? -> lsit?
(define (rmembro a l)   (cond
                          [(null? l) null]
                          [(eqv? a (first l)) (rest l)]
                          [else (cons (first l) (rmembro a
                                                         (rest l)))])
                            
                          
  )

(check-equal? (rmembro 3 '()) '())
(check-equal? (rmembro 3 '(1 2 2 4)) '(1 2 2 4))
(check-equal? (rmembro 3 '(3 3 3)) '(3 3))
(check-equal? (rmembro 3 '(1 2 3 4 3)) '(1 2 4 3))
;;rmember-todos e l
;;remove a primeira ocorr do elemento e na lista l
;; atom? list? -> list?
(define (rmembro-todos a l)   (cond
                                [(null? l) null]
                                [(eqv? a (first l)) (rmembro-todos a (rest l))]
                                [else (cons (first l) (rmembro-todos a
                                                                     (rest l)))])
                            
                          
  )

(check-equal? (rmembro-todos 3 '()) '())
(check-equal? (rmembro-todos 3 '(1 2 2 4)) '(1 2 2 4))
(check-equal? (rmembro-todos 3 '(3 3 3 3)) '())
(check-equal? (rmembro-todos 3 '(1 2 3 4 3)) '(1 2 4))
;; substitui-todos
;; atom? atom? list? -> list?
(define (substitui-todos a n lista) (
                                     cond
                                      [(null? lista) null]
                                      [(eqv? a (first lista)) (cons n (substitui-todos a n (rest lista)))]
                                      [else (cons (first lista) (substitui-todos a n (rest lista)))]))

(check-equal? (substitui-todos 3 4 '(1 2 3 4 3)) '(1 2 4 4 4))
(check-equal? (substitui-todos 3 4 '()) null)
(check-equal? (substitui-todos 3 4 '()) '())
(check-equal? (substitui-todos 3 4 '(3)) '(4))
(check-equal? (substitui-todos 3 4 '(3 3 3)) '(4 4 4))

;; recursividade profunda
;; procurar em listas genéricas com profundidade n
;; atom? list? -> list?
(define (membro? a l) (
                       cond
                        [(null? l) #f]
                        [(eqv? a (first l)) #t]
                        [else
                         (membro? a (rest l))
                         ]))

;; Testa se o elemento e está na lista genérica lg
;; atom? list? -> boolean?
(define (membro*? e lg) (
                         cond
                          [(null? lg) #f]
                          [(list? (first lg)) (
                                               or (membro*? e (first lg)) ;; primeiro checa a profundidade do primeiro elemento
                                                  (membro*? e (rest lg)))] ;; checa a largura
                          [(eqv? e (first lg)) #t]
                          [else
                           (membro*? e (rest lg))
                           ]))

(check-equal? (membro*? 3 '(1 (2 3) 4)) #t)
(check-equal? (membro*? 3 '()) #f)
(check-equal? (membro*? 3 '(1 (2 3) 4)) #t)
(check-equal? (membro*? 3 '(1 (2 1) (1 2 2))) #f)
(check-equal? (membro*? 3 '(1 (2 1) (1 (1 1 (1 2 (3)))))) #t)

;; Remove todas as ocorrências de e numa lista genérica lg
;; atom? list? -> list?
(define (rmembro-all*? e lg) (
                              cond
                               [(null? lg) null]
                               [(list? (first lg)) (
                                                    cons (rmembro-all*? e (first lg)) ;; primeiro checa a profundidade do primeiro elemento
                                                         (rmembro-all*? e (rest lg)))] ;; checa a largura
                               [(eqv? e (first lg)) (rmembro-all*? e (rest lg))]
                               [else
                                (cons (first lg) (rmembro-all*? e (rest lg)))
                                ]))

(check-equal? (rmembro-all*? 3 '()) '())
(check-equal? (rmembro-all*? 3 '(1 2 2 4)) '(1 2 2 4))
(check-equal? (rmembro-all*? 3 '(3 (3) (3 (3)) 1 1))  '(() (()) 1 1))

;; insere-direita* a na lg
;; insere em toda direta de a na lista lg
;; atom? atom? list? -> list?
(define (insere-direita* a an lg) (
                                   cond
                                    [(null? lg) null]
                                    [(list? (first lg)) (
                                                         cons (insere-direita* a an (first lg))
                                                              (insere-direita* a an (rest lg)))] 
                                    [(eqv? a (first lg)) (cons (first lg) (cons an (insere-direita* a an (rest lg))))]
                                    [else
                                     (cons (first lg) (insere-direita* a an (rest lg)))
                                     ]))

(check-equal? (insere-direita* 3 4 '()) '())
(check-equal? (insere-direita* 3 4 '(1 2 2 4)) '(1 2 2 4))
(check-equal? (insere-direita* 2 4 '(1 2)) '(1 2 4))
(check-equal? (insere-direita* 2 3 '(1 2)) '(1 2 3))

;; invertea* lg
;; inverte lista genérica
;; list? -> list?
(define (inverte* lg) (
                       inverte-aux* lg '()
                                    ))

(define(inverte-aux* lg aux)  (
                               cond
                                [(null? lg) aux]
                                [(list? (first lg))
                                 (inverte-aux* (rest lg)
                                               (cons (inverte-aux* (first lg) '()) aux)) ;; o mesmo que (cons (inverte* (first lg)) aux)
                                 ]
                                [else
                                 (inverte-aux* (rest lg) (cons (first lg) aux))
                                 ]))

(check-equal? (inverte* '()) '())
(check-equal? (inverte* '(1 2 3 4)) '(4 3 2 1))
(check-equal? (inverte* '(1 2 (1 2 3 4) (3 4))) '((4 3) (4 3 2 1) 2 1))

;; declaração de variáveis -> let paralelo

;;(let [(x 10) (y 20) (z x)] (values x y z)) ;; erro pois x ainda não tem escopo, logo não é possível fazer referência

;; let sequencial
;;
(letrec [(f (lambda (l)
              (if (null? l)
                  0
                  (+ (first l) (f (rest l)))
                  )))
         ]
  (check-equal? (f '(1 2 3 4)) 10))

;remove-membro e lg
;remove a primeira ocorrência de um membro de uma lista genérica
; atom? list? -> list?
(define (remove-membro-uma-vez* e lg)
  (let-values ([(b lr) (remove-membro-uma-vez-i* e lg)]) lr
    ))

;remove-membro-uma-vez-i* e lg
;remove a primeira ocorrência de um membro de uma lista genérica
; atom? list? -> boolean? list?
(define (remove-membro-uma-vez-i* e lg) (
                                         cond
                                          [(null? lg) (values #f null)]
                                          [(list? (first lg))
                                           (let-values ([(b1 lr1) (remove-membro-uma-vez-i* e (first lg))])
                                             (if b1
                                                 (values #t (cons lr1 (rest lg)))
                                                 (let-values ([(b2 lr2) (remove-membro-uma-vez-i* e (rest lg))])
                                                   (values b2 (cons lr1 lr2)))))]
                                          [(eqv? e (first lg))
                                           (values #t (rest lg))]
                                          [else (let-values ([(b2 lr2) (remove-membro-uma-vez-i* e (rest lg))])
                                                  (values b2 (cons (first lg) lr2)))]))

(check-equal? (remove-membro-uma-vez* 2 '((1 1) 3 4 (2 1))) '((1 1) 3 4 (1)) )

;; inverte2 l -> utiliza parametro default
;; inverte a lista l
;; list? -> list?
(define (inverte l [aux '()])
  (if (null? l)
      aux
      (inverte (rest l) (cons (first l) aux))))

(check-equal? (inverte '(1 2 3 4 5)) '(5 4 3 2 1))
;; DOWNLOAD MAGIC RACKET
;; gera-lista
;; recebe elementos e gera uma lista com eles
;; any/c ... -> list?
(define (gera-lista . elementos ) elementos)

;; soma
;; soma os elementos passados
;; any/c ... -> atom?
(define (soma-aux ln) (if (null? ln)
                          0
                          (+ (first ln) (soma-aux (rest ln)))
                          ))
(define (soma . elementos) (soma-aux elementos))

(define (soma2 . elementos) (if (null? elementos)
                                0
                                (+ (first elementos) (apply soma2 (rest elementos)))))
(check-equal? (soma 1 2 3 4) 10)
(check-equal? (soma2 1 2 3 4) 10)


(define (insere-fim n lista) (
                              if (null? lista)
                                 (list n)
                                 (cons (first lista) (insere-fim n (rest lista)))
                                 ))

(check-equal? (insere-fim '3 '(1 2)) '(1 2 3))
; intercala-lista n e1...en
; intercala uma lista de tamanho n com os elementos da lista e1...en 
; integer? any/c ... -> list?
(define (intercala-m n . elementos) (
                                     if (< n 1) null
                                        (cons (first elementos) (apply intercala-m (cons (- n 1) (insere-fim (first elementos) (rest elementos))))))
  )
(check-equal? (intercala-m 5 'a' b 'c) '(a b c a b))

;; funções com argumentos nomeados
;; removeit e lista [proc] [key]
;; remove e da lista
;; any/c list? [procedure?] [procedura?] -> list?
(define (removeit
         v l #:proc[p eqv?] #:key[k identity])
  (cond
    [(null? l) null]
    [(p(k (first l)) v)
     (removeit v (rest l) #:proc p #:key k)]
    [else (cons (first l)
                (removeit v (rest l) #:proc p #:key k)) ]
    ))

(check-equal? (removeit 3 '(3 4 5 2 1 7 7) #:proc <=) '(4 5 7 7))

;; PROX AULA FUNÇÕES ANONIMAS