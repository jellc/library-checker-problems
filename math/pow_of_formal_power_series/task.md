## @{keyword.statement}

@{lang.en}
You are given a formal power series $f(x) = \sum_{i=0}^{N-1} a_i x^i \in \mathbb{F}\_{@{param.MOD}}[[x]]$ and a positive integer $M$.
Calculate the first $N$ terms of $(f(x))^M = \sum_{i=0}^{\infty} b_i x^i$.

@{lang.ja}
形式的冪級数 $f(x) = \sum_{i=0}^{N-1} a_i x^i \in \mathbb{F}\_{@{param.MOD}}[[x]]$ と正の整数 $M$ が与えられます。$(f(x))^M = \sum_{i=0}^{\infty} b_i x^i$ の先頭 $N$ 項を求めてください。

@{lang.end}

## @{keyword.constraints}

- $1 \leq N \leq @{param.N_MAX}$
- $1 \leq M \leq @{param.M_MAX}$
- $0 \leq a_i < @{param.MOD}$

## @{keyword.input}

```
$N$ $M$
$a_0$ $a_1$ $\cdots$ $a_{N-1}$
```

## @{keyword.output}

```
$b_0$ $b_1$ $\cdots$ $b_{N - 1}$
```

## @{keyword.sample}

@{example.example_00}

@{example.example_01}
