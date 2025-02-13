# T11D17


Foydali video materiallarni Platformadagi “Projects (Media)” bo‘limida topishingiz mumkin.

![This day will help you get acquainted with structures and unions in C.](misc/rus/images/day11_door.png)


## Contents

1. [Chapter I](#chapter-i) \
 1.1. [Level 3. Room 3.](#level-3-room-3)
2. [Chapter II](#chapter-ii) \
 2.1. [List 1. MCO.](#list-1-mco) \
 2.2. [List 2. Instructions.](#list-2-instructions)
3. [Chapter III](#chapter-iii) \
 3.1. [Quest 1. The Doors.](#quest-1-the-doors) \
 3.3. [Quest 2. Linked List.](#quest-2-linked-list) \
 3.4. [Quest 3. Stack for key.](#quest-3-stack-for-key) 
4. [Chapter IV](#chapter-iv)


# Chapter I

## Level 3. Room 3.

***LOADING Level 3… \
LOADING Room 3…***

\> *Atrofga qarash*

Yana bir xona, kompyuter, lampa, lekin kitoblar yo‘q. Bu safar bitta eshik o‘rniga o‘n beshta eshik bor. Har birida klaviaturasi bor bo‘lgan g‘alati elektron qulf osilgan. Juda shubhali. Yaxshiyam lampa bor - u bilan doimo qulayroq.

\> *Birinchi eshikni ochish*

Yopiq.

\> *Ikkinchi eshikni ochish*

Yopiq.

\> *Uchinchi eshikni ochish*

Ochilmayapti.

\> *To‘rtinchi eshikni ochish*

Yo‘q.

\> *i uchun = 5, hozircha i <= 15 -> i eshigini ochish va i ko‘paytirish*

Protsessor vaqti behuda ketdi...

\> *Yana atrofga qarash*

Bir to‘plam qog‘ozlar yonida kimdir qoldirib ketgan gazeta parchasiga ko‘zing tushdi. Bu SI bo‘lganmi yoki sendan oldin kelgan boshqasimi? SI gazeta o‘qishi amrimahol, gazeta parchalari haqida esa gapirmasa ham bo‘ladi.

\> *Parchani o‘qish*

***LOADING...***


# Chapter II

## List 1. MCO.

Qog‘oz ancha eski.  Bundan tashqari, u palapartish qirqilgan.

>1998 yili 11 dekabrda PH Delta-2 da Mars Climate Orbiter ishga tushirildi. Apparat Marsga 9 oydan keyin keldi. Mars Climate Orbiter 1999 yili 23 sentyabrda tormoz impulsini chiqarishi  va yuqori elliptik orbitaga 14 soat oralig‘i bilan o‘tishi kerak edi. Keyin ikki oy davomida Marsning ustki atmosferasida aerodinamik harakatlar yordamida orbitani dumaloqgacha yetkazishi kerak edi. 193 km balandlikda hisoblangan vaqtda apparat dvigatellarni to‘xtatishga yoqdi. 5 daqiqadan keyin MCO reja bo‘yicha Marsning orqasiga ketdi va undan boshqa hech qanday signallar kelmadi. Maʼlumotlar tahlilidan shu aniqlandiki, apparat hisoblangan 110 km o’rniga 57 km balandlikda Mars yuzasidan o‘tdi va atmosferada parchalandi. Shunchalik katta farq missiyaning dasturiy taʼminotdagi xato dastidan yuz berdi: Mars Climate Orbiter dasturiy taʼminotidagi dvigatel tortishish bo‘yicha buyruqlar nyuton kuch o‘lchov birligini ishlatishgan, bu buyruklarni yaratgan Yerdagi dasturiy taʼminot esa britan o‘lchov birligini ishlatgan (funt-kuch)...

\> *Gazeta parchasi tagidagi ko‘pgina qog‘ozlardan birinchisini olish*

***LOADING...***


## List 2. Instructions.

Qog‘oz dasturlash bo‘yicha bitta kitobdan yirtib olinganga o‘xshaydi... Menimcha, diqqat bilan o‘qish arziydi.

>Struktura - muayyan foydalanuvchi turi, bir necha turli qiymatni birga saqlashga va joyini almashtirishga imkon beradi. Strukturalar quyidagicha qayd etiladi:

    struct [Struktura nomi] {
    element qiymati;
    element qiymati;
    …
    element qiymati;
    } [bitta yoki bir necha o‘zgaruvchi];

>Strukturalarni ishlatish maʼlumotlarni birlashtirishga imkon beradi, shuningdek, o‘tkaziladigan maʼlumotlarni funksiyalar sarlavhasi o‘zgarmagan holda keyinchalik o‘zgartirish mumkin.

>
>Struktura egallagan xotira hajmi barcha elementlari egallagan xotira miqdoriga teng. Shunday ekan, С tilidagi Strukturalar nol qiymatiga ega bo‘lgan abstraksiyalardir. Struktura elementlari xotirada qayd etilgan tartibda joylashgan.

\> *Keyingi varaqni olish*

>Birlashtirish - maʼlumotlar turi, u har xil turdagi qiymatlarni saqlash  xotirasini qayta ishlashga imkon beradi:

    union [birlashtirish nomi] {
    element qiymati;
    element qiymati;
    …
    element qiymati;
    } [bitta yoki bir necha o‘zgaruvchi];

>Birlashtirish egallagan xotira eng katta ittifoq elementini saqlash uchun kerak bo‘lgan xotira sifatida qayt etilgan.
>.....................

Matnni o‘qish imkonsiz.

>Birlashtirish va strukturalarning bitta qo’llanilishi, masalan, belgili birlashtirishlar deb hisoblanadi. Bu strukturalar mumkin bo‘lgan bir nechta maʼlumotlar turlaridan bittasini, va butun raqamli belgini o‘z ichida saqlaydi. Unga qarab, hozirgi paytda birlashtirishda aynan qaysi maʼlumotlar turi borligini aniqlash mumkin.

\> *Keyingi varaqni olish* 

>Bir bog‘lanishli ro‘yxat - maʼlumotlar strukturasi, bir turdagi maʼlumotlarni o’z ichiga olgan ketma-ket bog‘liq bog‘lamalardan iborat. Ro‘yxatning har bir elementi keyingi element ko‘rsatgichiga ega, oxirgisi u yerda bo‘sh ko‘rsatkichni saqlaydi (C da 0/NULL). Ro‘yxatlar o‘zgaruvchan uzunlikka ega bo’lib, ko‘p ro‘yxatlarni osonlikcha birlashtirishga imkon beradi, lekin ko‘p xotirani egallaydi va massivlarga qaraganda, ular bo’yicha o’tish uchun ko‘proq oddiy operetsiyalarni talab qiladi.

***LOADING...***


# Chapter III

## Quest 1. The Doors. 

\> *Qo‘shimcha yordam beruvchi maʼlumotni izlash uchun xonani diqqat bilan kuzatish*

Bo’sh.

\> *Qo‘shimcha yordam beruvchi maʼlumotni izlash uchun stolga diqqat bilan qarash*

Klaviatura tagida to‘q sariq kichkina qog‘ozni ko‘rding. U biron narsani eslatish uchun stiker sifatida ishlatiladi.

\> *Olib o’q’ish*

Aminmisan? Bu shahsiy bo’lishi mumkin...

![day11_sticker](misc/rus/images/day11_sticker.png)

\> *Ha. Oldinlari bu hech kimni qiziqtirmas edi. Boshqa tanlovim yo’q.*

>src/dmanager_module.c - eshikni boshqarish moduli. \
>Eshikni initsializatsiyalash funksiyasi tegilmasin, xona o‘zagining mantiqi buzilyapti. \
>Hamma eshiklar ochilmasin, buning dastidan uzatish protokoli parchalanadi. \
>Boshqarish uchun o’sish tartibda eshiklarni ajratish  va “ochiq” eshiklarni yopish funksiyasi belgilansin.
> 
>Eshik strukturasi: butunsonli id va sonli status (0 - yopiq, 1 - ochiq).

Sendan ancha avval kimdir tashlab ketgan eslatmaga o‘xshaydi. Eshikni boshqarish moduliga eʼtibor berish arziydi, bu yordam berishi mumkin.

***== Quest 1 qabul qilindi. src/door_struct.h* *da eshiklar strukturasi yaratish. Strukturaning o‘zi butunsonli eshik  id va butunsonli status dan iborat (0 - yopiq, 1 - ochiq).  src/dmanager_module.c dasturini to‘g‘irilash, u qiymatlangan eshiklar massivini eshiklar id  har qanday algoritm bilan o’sish tartibda ajratsin va shu formatda chiqarsin: «eshik id, eshik statusi». Bundan tashqari, barcha eshiklar uchun «yopiq» statusi qayd etilsin. Eshiklarni initsializatsiyalash funksiyasi o‘zgartirilmasin. Struktur yondashuv qo‘llansin. Dartur Makefile yordamida tuzilsin. Bosqich nomi - door_struct. Bajarilgan fayl ombor ildizida build papkasida joylashsin va nomi  Quest_1 bo‘lsin. Qaror kod uslub normasi va xotira sarfi uchun tekshiriladi, ko'rsatmalar ham `materials` papkasida ==***

0, 0<br/>
1, 0<br/>
2, 0<br/>
3, 0<br/>
4, 0<br/>
5, 0<br/>
6, 0<br/>
7, 0<br/>
8, 0<br/>
9, 0<br/>
10, 0<br/>
11, 0<br/>
12, 0<br/>
13, 0<br/>
14, 0<br/>

***LOADING...***


## Quest 2. Linked List.

Xullas, eshiklar initsializatsiyalanyapti. Lekin qanday chiqsa bo‘ladi? Qaysi eshik uchun ochiq statusini yozish kerak? Agar hamma eshiklar uchun bunday qilinsa, qaydlarga ko‘ra, bu fojia keltirishi mumkin.

\> *Qog‘ozchani ag‘darish*

Mana davomi.

>Kerakli eshik har kuni o‘zgartiriladi. \
>Bu eshik raqami xonaning ichki modullari bilan polinom funksiyasi orqali hisoblanadi.Modulni amalga oshirishning manba kodi mavjud emas. \
>Injiniring revers orqali bu modul massivlar bilan ishlay olmasligi aniqlandi. Ish jarayonida modul dinamik yoqiladigan kutubxonani birbog‘lanishli ro‘yxatning amalga oshishi bilan ishlatdi. Bu kutubxona modul ishlashi uchun juda muhim hisoblanadi, lekin kutubxona bilan binar fayl buzilgan edi.

В одном из листов что-то говорилось про односвязный список. Стоит узнать побольше про этот список и заодно разобраться с выделением памяти под него.

***== Quest 2 qabul qilindi. src/list.c dasturi yaratilsin, ichida eshiklarning birbog‘lanishli ro‘yxati bo‘yicha funksiyalar mavjud (`struct node* init(struct door* door` - o‘tkazilgan baza asosida birbog‘lanishli ro‘yxat strukturasining initsializatsiyasi `struct door`, `struct node* add_door(struct node* elem, struct door* door)` -  o‘tkazilgan bog‘lamadan keyin birbog‘lanishli ro‘yxatga `struct door` yangi elementini `elem`, `struct node* find_door(int door_id, struct node* root` ga qo‘shish - ro‘yxatda id bo‘yicha eshik izlash, `struct node* remove_door(struct node* elem, struct node* root)` - ro‘yxat elementini o‘chirish, `void destroy(struct node* root)` - ro‘yxat egallagan xotirani bo‘shatish). Bu funksiyalarning eʼlonlarini va birbog‘lanishli ro‘yxat strukturasi src/list.h ga chiqarilsin. add_door va remove_door funksiyalarining src/listtest.c da ishlashini tekshirish uchun modul testlar yozilsin. Test yaxshi o‘tsa usullar funksiyalari SUCCESS ni va xato bo‘lganda - FAIL niqaytarsin. Testlar Makefile yordamida tuzilsin. Bosqich nomi - list_test. Bajarilgan fayl ombor ildizida build papkasida joylashsin va nomi Quest_2 bo‘lsin. Eʼtibor ber: bu kvest `cppcheck` utilitasi bilan testlanadi  ==***



***LOADING...***


## Quest 3. Stack for key. 

Xo‘p, bu eshikning raqamini izlash moduli ishlashi uchun kerakli kutubxona yozilgan. Ekranda algoritm hisoblarining faollik shkalasi tezda to‘lishini ko‘ryapsan..
Bir necha soniyadan keyin ekranda senga kerakli eshik raqami chiqdi. Vazifa yechilganidan o‘zingni yaxshi his qilib eshik yoniga ketding.

\> *Eshik tutqichini tortish*

Yopiq... \
Lekin eshikda kichik ekrancha ochilganini ko‘rding. Ekranda katta harflar bilan yozilgan:

> NO DYNAMIC INT STACK AND/OR STACK OPERATIONS

Kompyuter yoniga qaytding va bu nima degani deb o‘ylayapsan. Afsuski, yordam beruvchi qog‘ozchalar hech qayerda yo‘q... \
Xotirangni ishga solib, stek - maʼlumotlarning dinamik Strukturalarining bitta turi ekanini eslading, u odatda ro‘yxat ko‘rinishda bo‘ladi. Eshikni ochish uchun butun sonlardan iborat bo‘lgan dinamik stek yozish kerak, shekelli. Stek uchun uning standart interfeysini amalga oshirish kerak: maʼlumotlarni stekka itarib kiritish (push) va u yerdan itarib chiqarish (pop) harakati. Hamma amallarni src/stack.c da, funksiyalar va Strukturalar eʼlonlarini esa src/stack.h da saqlashni unutma. Shuningdek, stek va funksiyalarining ishlashini tekshirish uchun modul matnlari src/stack_test.c ga yozilsin. Stek noto‘g‘ri ishlasa, nima bo‘lishini kim bilsin...

***== Quest 3 qabul qilindi. src/stack.c da dinamik stek bilan (init, push, pop, destroy) ishlash bo‘yicha funksiyalarning amalga oshishi joylashgan dasturni yaratish. Funksiyalarining eʼlonlarini va butun sonlar saqlanadigan dinamik stek  strukturalari src/stack.h ga chiqarilsin. push va pop steĸ funksiyalarining src/stack_test.c da ishlashini tekshirish uchun modul testlar yozilsin. Test yaxshi o‘tilsa usullar funksiyalari SUCCESS ni va xato bo‘lganda - FAIL ni qaytarsin. Testlar Makefile yordamida tuzilsin. Bosqich nomi - stack_test. Bajarilgan fayl ombor ildizida build papkasida joylashsin va nomi  Quest_3 bo‘lsin. *Eʼtibor ber: bu kvest `cppcheck` utilitasi bilan testlanadi ==***

> 
> ***Diqqat! Bu topshiriq avtotestlashni ko‘zlamaydi***
> 

***LOADING...***


# Chapter IV

\> *Oxirgi topshiriqni omborga kiritish*

Menimcha, hamma narsa qilindi.

\> *Kerakli eshik yoniga borish*

Kichik ekran bo‘sh. Stek eshik ishlashi uchun to‘g‘ri keldi, shekelli.

\> *Eshikni ochish*

Eshik ochildi, va keyingi xonaga qadam bosding.

***LOADING...***

