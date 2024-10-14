# Základní datové typy

- ```string``` datový typ pro ukládání textu např. "Ahoj jak se máš?"
- ```char``` ze slova character => ukládá jednotlivé charaktery např. "a"
- ```int``` ukládá celá čísla 
- ```double``` ukládá desetinná čísla např. 10.99
- ```bool``` má pouze dva stavy **true** a **false**

```
string text; //vytvoří proměnou text
string priklad = "cau"; // vytvoří proměnou priklad a uloží do ní cau
```

- pokud bych chtěl vytvořit proměnou "cislo" typu **int** s hodnotou 15 je postup prakticky identický jako předtím 

```
int cislo = 15;
```
# Vypisování a čtení z konzole

- pro vypisování do konzole se využívá ```printf();```
```
printf("hello world");
```
- do závorek jednoduše v uvozovkách napíšu text 

- pro čtení z konzole se používá ```scanf();```

```
string vstup;
scanf(%s, &vstup);
```
- vystvořím proměnou typu string "vstup"
- poté přečtu vstup zadaný do konzole a uložím ho do proměné
- ```%s``` definuje že budu ukládat string 
    - ```%i``` je pro int
    - ```%c``` je char
    - ```d``` je pro double
# Cykly

``` 
for (i = 0; i < 9; i++)
{
    printf("hello world");
} 
```
- opakované spuštění kódu
- v zavorce se vytvoří proměná **i** a uloží se v ní hodnota 0
- poté se definuje podmínka ```i < 9```
    - tím definuji že jakmile by **i** mělo být větší než 9 tak se cyklus zastaví
- ```i++``` vždy po dokončení jednoho cyklu se hodnota **i** zvětší o 1

```
while (true)
{
    printf("hello world"); 
}
```

- opakuje kód dokud je podmínka v závorce platná

```
int i = 0;

while (i < 10)
{
    printf("hello world");
    i++; 
}
```

- nad cyklem se vytvoří proměná **i** a definuje se jí hodnota 0
- cyklus do konzole vypíše "hello world" a poté k **i** přičte jedničku
- jakmile se hodnota **i** dostane nad 9 tak se cyklus přeruší 

# Podmínky 

- na podmínky se využívá výraz **if**
```
if (i < 10)
{
    printf("i je menší než 10")
}
```

- pokud je podmínka platná, spustí se kód zapsaný v podmínce
- => v tomto případě pokud je **i** menší než 10, vypíše se do konzole "i je meněí než 10"

# Metody

- Metody se používají pro zjednodušení a lepší přehlednosti kódu
```
void Pozdrav() 
{
    printf("hello");
}
```
- V daném příkladu jde o jednoduchou metodu návratového typu ```void```
    - ```void``` nevrací žádnou hodnotu, tudíž není třeba v metodě využívat ```return```
    - pokud do metody návratového typu ```void``` dáte ```return``` bude vám program házet chybu
- Pokud takzvaně zavoláme funkci, spustí se kód uvnitř funkce
```
Pozdrav();
```
- V tomto případě by se do konzole vypsalo "hello"

## Metody s parametrem
- Pokud metoda má sloužit pro zpracování nějakých dat, lze jí definovat parametr

```
int Vynasobit(int prvniCislo, int druheCislo)
{
    int vysledek = prvniCislo * druheCislo;
    return vysledek;
}
```
- Metoda v ukázce je návratového typu ```int```, takže výsledkem bude číslo
- V závorce jsou definované parametry "prvniCislo" a "druheCislo" typu ```int```
- V metodě vytváříme proměnou pro výsledek, který následně vracíme pomocí ```return```

Metodu bychom prakticky využili tatko
```
int cisloA, cisloB, vysledekAB;
scanf(%i, &cisloA, &cisloB);
vysledekAB = Vynasobit(cisloA, cisloB);
printf(vysledekAB);
```
- V prvním řádku si vytvoříme proměné se kterými budeme pracovat
- V druhém řádku načteme od uživatele čísla
- Ve třetím řádku ukládáme hodnotu vrácenou metodou "Vynasobit" do proměné 
- A nakonec ve čtvrtém řádku výsledek vypíšeme do konzole