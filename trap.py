def deltax(a, b, n):
    ac = b - a
    mc = ac / n
    return mc


def func(a):
    # equation a^2 + 1 here
    x = a * a + 1
    return x



def faloop(a, b, n, m):
    inside = 0
    
    counter = a + m
    while counter < b:
        inside += 2*func(counter)
        counter += m
    
    fnl = inside + func(a) + func(b)
    return fnl



def askdata():
    # low bound
    a = 0.0
    # upper bound
    b = 3.0
    # number of subintervals
    n = 5000.0
    m = deltax(a, b, n)
    final = m/2 * faloop(a, b, n, m)

    return final



final = askdata()

print(final)