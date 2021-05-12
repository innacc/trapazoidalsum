function deltax(a, b, n){

    ac = b - a;
    mc = ac / n;
    return mc;
}

function func(a){
    //equation a^2 + 1 here
    x = a * a + 1;
    return x;
}

function faloop(a, b, m){
    inside = 0;
    
    counter = a + m;
    while(counter < b) {
        inside += 2*func(counter);
        counter += m;
    }
    fnl = inside + func(a) + func(b);
    return fnl;
}

function askdata(){
    //low bound
    a = 0.0;
    //upper bound
    b = 3.0;
    //number of subintervals
    n = 5000.0;
    m = deltax(a, b, n);
    final = m/2 * faloop(a, b, m);
    return final;
}

function main(){
    final = askdata();

    console.log(final);
    return 0;

}

main();