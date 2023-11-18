
color color_from(int i) {
    int hue = 100;
    int t = 200;
    //hue  = arc4random_uniform(t) + 255 - t;
    hue = 100;
    // switch (i) {
    //     case 0 : return (color){.r = 0, .g = 0, .b = 0, .a = 255};break;
    //     //case 1 : return (color){.r = 255, .g = 255, .b = 255, .a = 255};break;
    //     case 2 : return (color){.r = hue, .g = 0, .b = 0, .a = 255};break;
    //     case 1 : return (color){.r = hue, .g = hue, .b = hue, .a = 255};break;
    //     default : return (color){.r = 255, .g = 0, .b = 0, .a = 255};break;
    // }
    switch (i) {
        case 0 : return (color){.r = 0, .g = 0, .b = 0, .a = 255};break;
        case 1 : return (color){.r = hue, .g = hue, .b = hue, .a = 255};break;
        case 2 : return (color){.r = 255, .g = 255, .b = 255, .a = 255};break;
        
        default : return (color){.r = 255, .g = 0, .b = 0, .a = 255};break;
    } 
}

void plot_A() {
    for (int r = 0; r < R ; r++) for (int c = 0 ; c < C ; c++ ) 
        DrawRectangle( c*W, r*H, W,  H, color_from(A[r][c]));
}