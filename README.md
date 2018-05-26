# Reverse-number-in-C-
I did it with FOR loop. Please share it ;)


    for (m = a % 10 ; a > 10 ; a /= 10){
        i = a % 10;
        m = (m * 10) + i - 1;        
    }
