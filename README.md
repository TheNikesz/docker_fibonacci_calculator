## CZĘŚĆ OBOWIĄZKOWA

# 1. 
Jak każdy ciąg zdefiniowany przez rekurencję liniową o stałych współczynnikach, liczby Fibonacciego mają wzór jawny - w tym przypadku zwany wzorem Bineta. Został on wykorzystany w aplikacji do wyliczania n-tego elementu wyżej wymienionego ciągu.

Aby utworzyć repozytorium Git oraz dodać je na GitHub należy wykorzystać polecenia ```git init -b main```, ```git add .```, ```git commit -m "Initial commit"``` oraz ```gh repo create docker_fibonacci_calculator --public --source=. --remote=docker_fibonacci_calculator --push```.

![Obowiazkowa_1.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Obowiazkowa_1.png)

# 2.

B. 
Aby zbudować obraz należy wykorzystać polecenia ```ddocker build -t fibcalc .```.

![Obowiazkowa_2B.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Obowiazkowa_2B.png)

C.
Aby zbudować oraz uruchomić kontener należy wykorzystać polecenie ```docker run -it --rm fibcalc```.

![Obowiazkowa_2C.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Obowiazkowa_2C.png)

# 3.

D.
Aby wykorzystać zasadę nazywania budowanych obrazów według metody należy dodatkowo wykorzystać polecenia git: ```git add .```, ```git commit -m "feat: add semver to workflow"```, ```git tag 1.0.0```, ```git push``` oraz ```git push --tags```.

![Obowiazkowa_3D.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Obowiazkowa_3D.png)

# 4.

A.
Aby sprawdzić obecność pliku fib.yml jako opisu workflow w Github Action należy wykorzystać polecenia ```gh workflow list``` i ```gh workflow view 42896863```.

![Obowiazkowa_4A.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Obowiazkowa_4A.png)

B.
Aby uruchomić GitHub Action należy wykorzystać polecenia ```gh workflow run 42896863``` i ```gh run watch```.

![Obowiazkowa_4B.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Obowiazkowa_4B.png)

C.
Aby pobrać własny obraz i uruchomić kontener należy wykorzystać polecenie ```docker run -it --rm ghcr.io/thenikesz/fibcalc:1.1.0```.

![Obowiazkowa_4C.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Obowiazkowa_4C.png)

## CZĘŚĆ DODATKOWA

# 1.

Aby sprawdzić obecność pliku fib_dod1.yml jako opisu workflow w Github Action należy wykorzystać polecenie ```gh workflow view 43252792```.

Aby uruchomić GitHub Action należy wykorzystać polecenia ```gh workflow run 43252792``` i ```gh run watch```.

![Dodatkowa_1_1.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Dodatkowa_1_1.png)

Aby pobrać własny obraz i uruchomić kontener należy wykorzystać polecenie ```docker run -it --rm ghcr.io/thenikesz/fibcalc_dod1:1.1.1```.

![Dodatkowa_1_2.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Dodatkowa_1_2.png)

# 2. (Nie działa poprawnie - dial tcp i/o timeout)

W celu wykonania zadanie kierowałem się następującym poradnikiem: [Deploying Your Own Private Docker Registry on Azure](https://github.com/toddkitta/azure-content/blob/master/articles/virtual-machines/virtual-machines-docker-registry-on-azure-blob-storage.md).

Aby ustawić registry należy utworzyć Storage account na Azure, a następnie wykorzystać polecenie ```docker run -d -p 5000:5000 -e REGISTRY_STORAGE=azure -e REGISTRY_STORAGE_AZURE_ACCOUNTNAME="<storage-account>" -e REGISTRY_STORAGE_AZURE_ACCOUNTKEY="<storage-key>" -e REGISTRY_STORAGE_AZURE_CONTAINER="registry" --name=registry registry:2```.

![Dodatkowa_2_1.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Dodatkowa_2_1.png)
![Dodatkowa_2_2.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Dodatkowa_2_2.png)

Rezultaty:
![Dodatkowa_2_3.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Dodatkowa_2_3.png)
![Dodatkowa_2_4.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Dodatkowa_2_4.png)

Aby sprawdzić obecność pliku fib_dod2.yml jako opisu workflow w Github Action należy wykorzystać polecenie ```gh workflow view 43555761```.

Aby uruchomić GitHub Action należy wykorzystać polecenia ```gh workflow run 43555761``` i ```gh run watch```.

![Dodatkowa_2_5.png](https://github.com/TheNikesz/docker_fibonacci_calculator/blob/main/Screens/Dodatkowa_2_5.png)
