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
```git add .```, ```git commit -m "feat: add semver to workflow"```, ```git tag 1.0.0```, ```git push``` oraz ```git push --tags```