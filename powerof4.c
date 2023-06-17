bool isPowerOfFour(int n){
    if(n==1){return true;}
    else{
        double i=1, t=0;
        for(int j=0; j<15; j++){
            i=i*4;
            if(n==i){
                t=1;
                break;
            }
        }
        if(t==1){return true;}
        else{return false;}
    }
}
