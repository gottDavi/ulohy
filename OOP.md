# OOP
- OOP neboli Object Oriented Programming
- Objektové programování nám jak už název napovídá umožňuje práci s objekty
- Objekty jsou jakási struktura umožňující ukládání komplexnějších dat a jednodušší práci s nimi

```
class Pes
{
    int vek;
    std::string jmeno;
    int vaha;
    int vyska;
    bool maPrukazPuvodu;

    Pes(int vek, std::string jmeno, int vaha, int vyska, bool maPrukazPuvodu)
    {
        this->vek = vek;
        this->jmeno = jmeno;
        this->vaha = vaha;
        this->vyska = vyska;
        this->maPrukazPuvodu = maPrukazPuvodu;
    }

    void Stekni()
    {
        std::cout << "Haf haf";
    }
    
};
```
V dané ukázce deklarujeme třídu **Pes**. Třída nám definuje jaké atributy a metody bude objekt mít. 
- Nejdříve definujeme jaké atributy bude v tomto případě Pes mít
- V ukázce definujeme že bude mít určitý věk, jméno, váhu, výšku a jestli bude papírový

Následuje konstruktor
- Konstruktor je definice toho jak budeme objekt inicializovat

```
Pes(int vek, std::string jmeno, int vaha, int vyska, bool maPrukazPuvodu)
    {
        this->vek = vek;
        this->jmeno = jmeno;
        this->vaha = vaha;
        this->vyska = vyska;
        this->maPrukazPuvodu = maPrukazPuvodu;
    }
```
Parametry v závorce podobně jako u metod jsou atributy které musíme zadat abychom objekt vytvořili.
- V tomto případě tedy zadáme jak starý bude daný pes, jak se jmenuje, kolik váží, jak je vysoký a jestli je papírový
- ```this->``` přiřazuje hodnotu z parametru konstruktoru samotné vlastnosti objektu  

Nakonec má naše třída ještě svou vlastí metodu
```
void Stekni()
    {
        std::cout << "Haf haf";
    }
```

Samotná práce s objekty pak vypadá takto:
```
int main()
{
    Pes mujPes(4, "Alík", 25, 40, true);
    Pes PasakuvPes(6, "Trhač", 8, 15, false);
}
```
V ukázce vytváříme objekt typu Pes, ukládáme jej do proměné mujPes a dáváme objektu hodnoty jeho atributů.
To stejné se děje i v druhém případě.


Metodu ```Stekni()``` naší třídy Pes voláme tímto způsobem: 
```
int main()
{
    Pes mujPes(4, "Alík", 25, 40, true);
    mujPes.Stekni();
}
```
