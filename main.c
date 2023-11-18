int main(void) {
    new_rule();
    seed();
    calc();
    InitWindow(C*W, R*H, "starship-C");
    SetTargetFPS(10);             
    while (!WindowShouldClose())  {
        respond();
        BeginDrawing();
        plot_A();
        EndDrawing(); 
    }
    CloseWindow();  
    return 0;
}