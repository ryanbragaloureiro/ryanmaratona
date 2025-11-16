// fexp + inverso modular
ll fexp(ll b, ll e){
    ll res=1;
    while(e){
        if(e&1) res = (res*b)%MOD; // caso não tenha mod, tirar
        b = (b*b)%MOD;
        e/=2;
    }
    return res;
}

ll inv(ll x){
    return fexp(x,MOD-2); // MOD deve ser primo
}
