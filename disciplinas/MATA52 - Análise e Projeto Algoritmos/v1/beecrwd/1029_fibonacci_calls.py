# Solução utilizando PD "Top-Down"
memo = {0: 0, 1: 1}
def fib_pd(n):
  if n in memo:
    return memo[n]
  memo[n] = fib_pd(n-1) + fib_pd(n-2)
  return memo[n]

tests = int(input())
for i in range(tests):
  n = int(input())
  answer = fib_pd(n)
  calls = {0: 0, 1: 0}
  for t in range(2, n+1): 
    calls[t] = calls[t-1] + calls[t-2] + 2
  print('fib({}) = {} calls = {}'.format(n, calls[n], answer))
