## CZĘŚĆ OBOWIĄZKOWA

# 1. 
Jak każdy ciąg zdefiniowany przez rekurencję liniową o stałych współczynnikach, liczby Fibonacciego mają wzór jawny - w tym przypadku zwany wzorem Bineta. Został on wykorzystany w aplikacji do wyliczania n-tego elementu wyżej wymienionego ciągu.

Aby utworzyć repozytorium Git oraz dodać je na GitHub należy wykorzystać polecenia ```git init -b main```, ```git add .```, ```git commit -m "Initial commit"``` oraz ```gh repo create docker_fibonacci_calculator --public --source=. --remote=docker_fibonacci_calculator --push```.

# 2.

B. 
Aby zbudować obraz należy wykorzystać polecenia ```ddocker build -t fibcalc .```.

C.
Aby zbudować oraz uruchomić kontener należy wykorzystać polecenie ```docker run -it --rm fibcalc```.

# 3.

D.
Aby wykorzystać zasadę nazywania budowanych obrazów według metody należy dodatkowo wykorzystać polecenia git: ```git add .```, ```git commit -m "feat: add semver to workflow"```, ```git tag 1.0.0```, ```git push``` oraz ```git push --tags```.

# 4.

A.
Aby sprawdzić obecność pliku fib.yml jako opisu workflow w Github Action należy wykorzystać polecenia ```gh workflow list``` i ```gh workflow view 42896863```. 

B.
Aby uruchomić GitHub Action należy wykorzystać polecenia ```gh workflow run 42896863``` i ```gh run watch```.

C.
Aby pobrać własny obraz i uruchomić kontener należy wykorzystać polecenie ```docker run -it --rm ghcr.io/thenikesz/fibcalc:1.1.0```.

## CZĘŚĆ DODATKOWA

# 1.

Aby sprawdzić obecność pliku fib_dod1.yml jako opisu workflow w Github Action należy wykorzystać polecenie ```gh workflow view 43252792```.

Aby uruchomić GitHub Action należy wykorzystać polecenia ```gh workflow run 43252792``` i ```gh run watch```.

Aby pobrać własny obraz i uruchomić kontener należy wykorzystać polecenie ```docker run -it --rm ghcr.io/thenikesz/fibcalc_dod1:1.1.1```.