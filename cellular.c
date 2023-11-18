void seed() {
	for (int c = 0; c < C; c++) {
		A[0][c] = arc4random_uniform(B);
	}
}
int f(int x, int b) {
	int s = 1;
	for (int j = 0; j < x; j++) {
		s *= b;
	}
	return s;
}
int safe_col(int x) {
	if (x < 0) return x + C;
	if (x > C - 1) return x - C;
	return x;
}
int code(int r, int c) {
	int sum = 0;
	int start = c - N/2;
	for (int k = 0; k < N; k++) {
		sum += f(k,B)*A[r-1][safe_col( start + k)];
	}
	return sum;
}
void calc() {
	for (int r = 1; r < R; r++) {
		for (int c = 0; c < C; c++) {
			A[r][c] = rule[code(r,c)];
		}
	}
}
void new_rule() {
	rule_length = f(N,B);
	for (int i = 0; i < rule_length; i++) {
		rule[i] = rand()%B;
	}
}
void cont(int n) {
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0; j < C; j++) {
			A[0][j] = A[R-1][j];
		}
		calc();
		plot_A();
	}
}
// void mountain() {
// 	for (int j = 0; j < cols; j++) {
// 			A[0][j] = 0;
// 	}
// 	A[0][C/2] = rand()%states;
// 	calc();
// 	plot();
// }


