#include <stdio.h>
#include <math.h>

float deltax(float a, float b, float n){

    float ac = b - a;
    float mc = ac / n;
    return mc;
}

float func(float a){
    //equation a^2 + 1 here
    float x = a * a + 1;
    return x;
}

float faloop(float a, float b, float n, float m){
    float inside = 0;
    
    float counter = a + m;
    while(counter < b) {
        inside += 2*func(counter);
        counter += m;
    }
    float fnl = inside + func(a) + func(b);
    return fnl;
}

float askdata(){
    //low bound
    float a = 0.0;
    //upper bound
    float b = 3.0;
    //number of subintervals
    float n = 5000.0;
    float m = deltax(a, b, n);
    float final = m/2 * faloop(a, b, n, m);
    return final;
}

float main(){
    float final = askdata();

    printf("%f", final);
    return 0;

}