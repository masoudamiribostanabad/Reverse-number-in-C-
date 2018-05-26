# Reverse-number-in-C-
I did it with FOR loop. Please share it ;)
'a' is a number and 'm' is a reversed numbber.
I upload the file in next post.

    for (m = a % 10 ; a > 10 ; a /= 10){
        i = a % 10;
        m = (m * 10) + i - 1;        
    }
