vector<bool> crivo(int n){
    vector<bool> isPrime(n+1,true);
    isPrime[0] = isPrime[1] = false;
    for(ll i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(ll j = i*i; j<=n;j+=i) isPrime[j] = false;
        }
    }
    return isPrime;
}
