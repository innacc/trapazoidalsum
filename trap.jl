function deltax(a, b, n)
    ac = b - a
    mc = ac / n
    return mc
end

function func(a)
    # equation a^2 + 1 here
    x = a * a + 1
    return x
end


function faloop(a, b, n, m)
    inside = 0
    
    counter = a + m
    while counter < b
        inside += 2*func(counter)
        counter += m
    end
    fnl = inside + func(a) + func(b)
    return fnl
end


function askdata()
    # low bound
    a = 0.0
    # upper bound
    b = 3.0
    # number of subintervals
    n = 500000000.0
    m = deltax(a, b, n)
    final = m/2 * faloop(a, b, n, m)

    return final
end


final = askdata()

println(final)