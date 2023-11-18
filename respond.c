void respond() {
    if (IsKeyReleased(KEY_Q)) exit(0);
    if (IsKeyReleased(KEY_R) ) { new_rule(); seed(); calc();}
    if (IsKeyReleased(KEY_S) ) { seed(); calc();}
    cont(1);
}

   