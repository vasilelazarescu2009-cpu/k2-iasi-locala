# k2-iasi-locala

Problema a fost data in Olimpiada Locala de Informatica Iasi 2026 pt clasa IX

cerinta:



Un alpinist participă la o expediție de ascensiune pe vârful K2, apreciat a fi cel mai dificil vârf de escaladat din lume. Aclimatizarea pe K2 este un proces foarte lent, controlat și esențial pentru supraviețuire, întrucât organismul trebuie să se obișnuiască treptat cu aerul foarte rarefiat, efortul extrem, frigul și vântul. Astfel, expediția presupune urcări succesive la taberele superioare, fiecare urcare fiind urmată de revenirea la tabăra de bază, atât urcarea cât și coborârea realizându-se treptat, din tabără în tabără (așa numitele “rotiri de aclimatizare”). Taberele sunt numerotate cu numere naturale consecutive ce reprezintă nivelul fiecărei tabere, tabăra de bază fiind considerată pe nivelul 1.
Alpinistul primește un pașaport de expediție în care, la fiecare trecere printr-o tabără, i se va aplica o ștampilă cu numărul acelei tabere. La fiecare rotire de aclimatizare, prima ștampilă i se aplică în tabăra cu numărul 2. De exemplu, după primele trei rotiri de aclimatizare, pașaportul alpinistului va arăta astfel: 2,1,2,3,2,1,2,3,4,3,2,1 (urcă la tabăra 2 și revine la tabăra de bază 1, apoi urcă până la tabăra 3 și revine treptat la tabăra 1, apoi urcă pâna la tabăra 4 și revine treptat la tabăra 1).
Cerința

Cunoscând numărul de ștampile ce i-au fost aplicate alpinistului până la un anumit moment, să se determine:
1. numărul celei mai înalte tabere vizitate de alpinist până la acel moment.
2. numărul taberei în care i s-a pus ultima ștampilă.
Date de intrare

Fișierul de intrare k2.in conţine pe prima linie numărul C reprezentând cerința (1 sau 2) și numărul n reprezentând numărul de ștampile ce i-au fost aplicate alpinistului până la un anumit moment.
Date de ieșire

Pe prima linie a fişierului de ieşire k2.out se va scrie, pentru cerința C = 1, numărul celei mai înalte tabere vizitate de alpinist, iar pentru cerința C = 2, numărul taberei în care i s-a pus ultima ștampilă.
Restricții și precizări

    1 ≤ n ≤ 1000
    0 < n ≤ 1018

Exemplul 1:

k2.in

1 7

k2.out

3

Explicație

Pașaportul alpinistului arată astfel: 2,1,2,3,2,1,2. Cea mai înaltă tabără vizitată are numărul 3.
Exemplul 2:

k2.in

2 7

k2.out

2

Explicație

Pașaportul alpinistului arată astfel: 2,1,2,3,2,1,2. Ultima ștampilă i-a fost pusă în tabăra cu numărul 2.
Exemplul 3:

k2.in

1 25

k2.out

6

Explicație

Pașaportul alpinistului arată astfel: 2,1,2,3,2,1,2,3,4,3,2,1,2,3,4,5,4,3,2,1,2,3,4,5,6. Cea mai înaltă tabără vizitată are numărul 6.


Link PBINFO: https://www.pbinfo.ro/probleme/4940/k2
