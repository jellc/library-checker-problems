## @{keyword.statement}

@{lang.en}
You are given an integer sequence $a_0, a_1, ..., a_{N-1}$ with the length $N$.
Process the following $Q$ queries in order:

- `$l_i$ $r_i$`: Print $\min(a_{l_i}, a_{l_i + 1}, ..., a_{r_i - 1})$.
@{lang.ja}
長さ $N$ の数列 $a_0, a_1, ..., a_{N-1}$ に $Q$ 個のクエリが飛んできます。処理してください。

- `$l_i$ $r_i$`: $\min(a_{l_i}, a_{l_i + 1}, ..., a_{r_i - 1})$ を出力する。
@{lang.end}

## @{keyword.constraints}

- $1 \leq N, Q \leq @{param.N_AND_Q_MAX}$
- $0 \leq a_i \leq 10^9$
- $0 \leq l_i < r_i \leq N$

## @{keyword.input}

~~~
$N$ $Q$
$a_0$ $a_1$ ... $a_{N - 1}$
$l_1$ $r_1$
$l_2$ $r_2$
:
$l_Q$ $r_Q$
~~~

@{example.example_00}
