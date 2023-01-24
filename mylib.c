void states(int s0, int s1, int D, int T, int* S0, int* S1, int* M) {
    *S0 = s0 & T | s1 & D & T;
    *S1 = D & (!T) | s0 & (!T) | (!s0) & (!s1) & D;
    *M = D | s0;
}