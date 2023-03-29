# -*- coding: utf-8 -*-
## Lista 7 
import math
def convert_logic(num, defense): 
    # Convert the logic from the vampire game to the gambler's ruin
    # where each player (or vampire) now can lost 1 of life per round 
    return math.ceil(num/defense)


def gamblers_ruin(ev1, ev2, attack): 
    if(attack == 3): return 100 * ev1/(ev1 + ev2)
    prob_win = 1- (6 - attack) / 6
    prob_frac = (1 - prob_win) / prob_win ## Q / P == probability (defeat / win)
    prob = (1 - (prob_frac)**ev1) / (1 - (prob_frac)**(ev1 + ev2))
    return prob * 100

while True:
    ev1, ev2, attack, defense = [int(x) for x in input().split()]
    if(ev1 == ev2 and ev2 == attack and attack == defense and defense == 0):
        break
    ev1 = convert_logic(ev1, defense)
    ev2 = convert_logic(ev2, defense)
    prob = gamblers_ruin(ev1, ev2, attack)
    print("{:.1f}".format(prob))