## <span style="color:red"> 1) C++ Dili Nedir?</span>
C++, esnek ve yüksek seviyeli bir programlama dilidir. Çıkış tarihi olan 1980'den beri firmware(donanım yazılımı), mikrodenetleyiciler, işletim sistemleri, uygulamalar ve grafik programlama gibi alanlarda kullanılır. Hızlı ve verimli bir dil olarak bilinir.

#### Tarihi: 
* 1970 yılında Brian Kernighan ve Dennis Ritchie adlı iki programcı, C dilini ortaya çıkardı. Adının C olmasının sebebi kendinden daha eski bir dil olan B dilinin yerini almasıydı. Tasarlanmasındaki tek hedef işletim sistemi yazmak üzerineydi.

* Ancak C, fonksiyonel bir programlama diliydi. Yani bir program yazılırken önce veri tanımlanmalı, daha sonra o veriyle ilgili işlem yapılmalıydı. Programcılar daha sonrasında Nesneye Dayalı Tasarımı keşfettiler ve bunun çoğu uygulama türüde daha verimli olduğunun farkına vardılar.

* 1980 yılında Bjarne Stroustrup "C with classes" denilen bir programlama dili üzerinde çalışmaya başladı. Bu dil, C dilinin güncellenmş ve geliştirilmiş halidi bu sebeple C++ adını aldı.

#### C++ Organizasyonu:
* C++ temelde diğer programlama dilleri gibi programcı ile bilgisayar arasında bir köprü görevi görür. Yani programcı programı anlayabildiği programlama dilinin özelliklerine göre organize eder, üretilen program compiler tarafından bilgisayarın anlayıp çalıştırabileceği bir forma bürünür.

* Bir bilgisayar programı iki farklı kısımdan oluşur:
					* data
					* instruction

* Data bilgisayar içerisinde byte serileri olarak tutulur. C++ ise bu byte serilerini anlamlı hale getirir. Bir programcı, veriyi kullanmadan önce nasıl bir veri kullanacağını bilgisayara anlatmalıdır. Bu işleme "Data Decleration" adı verilir.

```cpp
int num; //tells C++ you want to use a section of computer's memory to store an integer named num. 
```
Verinin adres olarak nereye konulacağına bilgisayar karar verebilir.


* Yukarıdaki örnekteki gibi tek bir integer yerine birden çok integeri bir arada tutan bir array yapısı tanımlanabilir.
```cpp
int arr[100] //100 elemanlı bir integer dizisi
```
* Bunu yanı sıra daha karmaşık veri tipleri bulunmaktadır. Mesela bir dikdörtgenin eni ve boyu ve rengi olduğunu düşünürsek bunu struct tipinde bir tanımlama yapılabilir.

```cpp
struct rectangle{
	int width;
	int height;
	color_type color;
}
```

Ancak veri, programın sadece bir kısmıdır. Bir programın en önemli bir diğer unsuru ise instruction(Komut)lardır. 

C++ yüksek seviyeli bir dil olduğundan dolayı yüksek seviye komutlar yazılabilir:
```cpp
area= width*height; //area of rectangle
```
compiler instructionları makine koduna çevirerek çalıştırır.

* Bir program *if* ve *switch* gibi kontrol yapıları kullanarak bilgisayarın karar vermesini sağlayarak programın akışını kontrol edebilir. 

* Aynı zamanda belirli komutları döngü yapılarıyla tekrar edebilir. Bu noktada *for* ve *while* döngüleri kullanılır.

* Bir komut dizisi fonksiyonlarla sarılarak bu komutların istenilen yerde zahmetsiz bir şekilde tekrar tekrar kullanılması sağlanılabilir. Mesela alan hesabı yapan bir fonksiyonu genel tasarlayıp bir fonksiyon haline getirip alan hesabı yapmak istediğimiz her yerde kolayca kullanabiliriz. Her programlama dilinde "built-in functions/gömülü fonksiyon" denilen ve dilin bze sağladığı bazı fonksiyonlar bulunur.

* Bir dizi fonksiyon birleşerek modülleri ve programları oluşturur. C++ yeniden kullanılabilirlik kavramına önemverir bu sebeple kullanışlı modülleri bir arada bulunduran kütüphanelerin kullanımı önemlidir.

* C++ bunların yanı sıra data ve instructionun bir arada bulunduğu *class* yapısına da sahiptir. Bu, nesneye dayalı programlama tekniğinin getirdiği bir özelliktir.

![Program Organization]('https://github.com/UmutGzl/CppNotebook/1_Giris/imgsrc/CppOrg.png')

## 2)Program Yazımının Temelleri

Bilgisaarher ne kadar bilgi depolamak ve işlemek için inanılmaz güçlü bir cihaz olsa da bizim bilgisaara adım adım ne yapması gerektiğini belirtmemiz gerekiyor. Bu mantık algoritmanın temelini oluşturur. Ayrıca her program makine dili ile çalışır. Yani bilgisayarın içerisindeki her şey eninde sonunda makine diline dönüşüyor. tipik bir makine dili şu şekildedir:
```asm
1010 1111
0011 0111
0111 0110...
```
Bu şekilde program yazmanın zorluğu, programlama dillerini doğurmuştur. Bu doğrultuda ilk oluşan dil *Assembly* dilidir. Assembly dili komutları işlemciden işlemcie değişiklik gösterir ve assembler tarafından makine koduna çevrilir.

```asm
MOV A,47
ADD A,B
HALT
```

![Assembling Process](https://media.geeksforgeeks.org/wp-content/uploads/20190301161722/Screenshot-2019-03-01-at-4.13.08-PM.png)

Daha sonrasında platformdan bağımsız çalışabilen ve insan diline daha yakın yüksek seviyeli diller oluştu. C++ bu dillerden bir tanesi.

#### Bağlantıdan çalıştırılmasına kadar programlar:
Her programın makine diline çevrildiğinden bahsetmiştik. Bu süreçte yazdığımız kod birçok aşamadan geçer.
* Programcı kafasında oluşturduğu programı koda döker ->sourcecode/sourcefile(.cpp)
* Bu sourcefile compiler tarafından object dosyasına dönüştürülür.(.obj)
* Linker tarafından bu object dosası gerekli kütüphaneler ve modüller ile birleştirilerek executable(çalıştırılabilir) programı oluştırur.(.exe)

![SourcetoExecution](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/images/CompilationProcess.png)

#### g++ compileri kullanarak UNIX tabanlı sistemlerde komut satırı üzerinden program oluşturma:

* Adım1: Programı oluşturacağımız konuma gidiyoruz/oluşturuyoruz:
```sh
cd ~/Desktop
mkdir CppCodes
cd CppCodes
```

* Adım2: Programın kaynak kodunu yazıyoruz:
```cpp
#include <iostream.h>
int main()
{
cout << "Hello World\n";
return (0);
}
```

* Adım3: g++ compilerini çalıştırıyoruz:
```sh
g++ -g -Wall -ohello hello.cpp

#or unix CC compiler

CC -g -ohello hello.cpp
```

* Adım4: çalıştır:
```sh
./hello
```


Dipnot: Unix tabanlı sistemlerde bir konuda yardım almak için man komutu ile manual page e gidebilirsiniz:
```sh
man subject
```

## 3)Yazım Stili

Bir programın çalışmasının yanında okunabilir ve sade yazılması da önemlidir. Bunun en önemli sebepleri:

	* Programlar genel olarak yazılıp bırakılmaz. Ya bakım yapılır a da güncellemeler ile yeni şeyer eklenir. Bu durumlarda bir programcı sonsuza kadar yaşayamayacağından programın anlaşılır yazılması ve başka programcıların onu anlayabilmesi elzemdir. "Kod yazımı evrenseldir"

	* Bir program üzerinde birden fazla programcı çalışıyor olabilir.

	*Programların kolay bağlanabilrmesi için anlaşılabilir olması önemlidir.

 Bu doğrultuda her programcının uymasının zorunda olmadığı ancak gerekli olan kurallar vardır:

 #### 1. Yorumlar:
 Yorum satırı bulunmayan bir program, ileride güncelleme, iyileştirme ve bakım gibi durumlar yapılırken işleri zorlaştırır. Çünkü kodun anlaşılması için mesai harcanması gerekir.

 C++ da 2 farklı yorum yazım tekniği bulunur.

 ```cpp
//tek satırlık yorum

 /* birden
 fazla 
 satırda yazılan
 yorum*/
 ```

 Bu yorum satırları programın başında belirli bilgilerin yazıldığı bir kısım oluşturmak için kullanılabilir. Bu kısımlar:
 					-Başlık
 					-Yazar
 					-Amaç
 					-Kullanım
 					-Referanslar
 					-Dosya Formatları
 					-Düzenleme Geçmişi
 					-Hata Yönetimi
 					-Notlar

#### 3.1.İsimlendirme:
İsmlendirmede büyük ve küçük harfler kullanılabilir. Genellikle değişkenlerde küçük harfler kullanılır. Çünkü büyük harfler genellikle sistem değişkenleri, makrolar ve sabitlerde kullanılır.
Değişken örnekleri: source_ptr, num

* Değişken isimlendirmeleri sayı ile başlamaz
* Boşluk karakteri isimlendirmede kullanılamaz. Bu noktada birden çok kelimeden oluşan değişkenler _ karakteriyle ayrılır(snake_case) veya camelCase kullanılır.
* halihazırda kullanılan yasaklı kelimeler kullanılamaz-> int, printf vb.
* İçerisinde $ gibi özel karakterleri barındıramaz.

#### 3.2. Indentation/Girintiler ve Kod Formatı
Girintiler C++ özelinde zorunlu olmasalar da programın okunulabilirliğini kolaylaştırırlar.

Aşağıda bir konun girintili ve girintisiz haline bakabiliriz:

Girintisiz:
```cpp
while (! done)
{
cout << "Processing\n";
next_entry();
}
if (total <= 0)
{
cout << "You owe nothing\n";
total = 0;
}
else{
cout << "You owe " << total << " dollars\n";
all_totals = all_totals + total;
}
```

Girintili:
```cpp
while (! done){
	cout << "Processing\n";
	next_entry();
}
if (total <= 0){
	cout << "You owe nothing\n";
	total = 0;
}
else{
	cout << "You owe " << total << " dollars\n";
	all_totals = all_totals + total;
}
```

#### 3.3. Clarity/Duruluk
Programın kolay okunabilir olması için bölümlere ayrılması tercih edilmelidir. bu şekilde daha rahat anlaşılabilir ve organize bir kod yazabilirsiniz:
```cpp
//not well organized
temp = box_xl;
box_xl = box_x2;
box_x2 = temp;
temp = box_yl;
box_yl = box_y2;
box_y2 = temp;
```

```cpp
//well organized

/* Swap X coordinate */
temp = box_x1;
box_xl = box_x2;
box_x2 = temp;

/* Swap Y coordinate */
temp = boxyl;
box_yl = boxy2;
box_y2 = temp;
```

#### 3.4. Simplicity/Basitlik
Basit bir program yazmanın genel kuralları şunlardır:

* Bir fonksiyon bir ya da iki sayfadan fazla olmamalı. Eğer fonksiyon uzarsa daha küçük birden fazla fonksiona bölünebilir.
* Gereksiz iç içe yapılardan kaçının
* Komutlar çok uzun olmamalı. Çok uzun bir formül varsa küçük parçalara bölünerek yazılmalı.
* Modüler programlamayı tercih etmeye çalışın. Çok uzun dosyalar yerine birden çok dosya ile çalışabilirsiniz.
* *En önemlisi programları sade ve anlaşılabilir tutun*

## 4) Basit tanımlar ve ifadeler

Daha önceki bölümlerde de bir programı olşturan iki yapıtaşının data ve instruction olduğunu söylemiştik. Bunu aldığımız mobilya parçaları ve birleştirme planı analojisiyle anlatabiliriz. IKEA'dan bir dolap aldık diyelim. Kutunun içerisinden bir sürü ahşap parça ve yapım kılavuzu çıkar. Bu ahşap parçaların data, yapım talimatlarının da instruction olduğunu düşünebiliriz. instructionları kullanarak elimizdeki dataları işler ve kullanışlı hale getiririz. Programlamadaki konsept de buna benzerdir.

Instruction, bilgisayara o data ile ne yapması gerektiğini söyler.

#### Basit Program Yapısı:

Basit bir program; veri tanımları, fonksiyonlar ve yorum satırlarından oluşur. 
```cpp

/***************************************
* Heading comments
*
***************************************/
data declarations
int main()
{
executable statements;
return(0);
}
```

Yukarıdaki örnekte bulunan tek fonksiyon *main* fonksiyonudur. Main fonksiyonu özel bir fonksiyondur çünkü bir programı çalıştırdığımızda çağırılan/çalışan ilk fonksiyondur. Programın ana iskeleti bu fonksiyonda döner.

Değer döndüren fonksiyonlarda(ileride değineceğiz) *return* ifadesi fonksiyondan dönecek olan değeri belirtir. Main fonksiyonunda ise return(0), işletim sistemine programın normal bir şekilde(status=0) bittiğini belirtir. Return değeri 0 dan başka bir değer olarak çıkarsa programda bir hata olduğunu söyleyebiliriz.

programın başlangıcında bulunan ve '#' ile başlayan ifadelere header denir. Preprocessor komutlarını çalıştırmak ve kütüphane import etmek için kullanılır.

```cpp
#include <iostream.h>
```

Basit bir Hello World uyguamasını temel alırsak:

```cpp
/*********comment****************
**     @author Umut Güzel     ***
**    Program: Hello World    ***
**Purpose:  prints hello world***
*********************************/

#include <iostream.h>

int main(){       //function
	cout<<"Hello World!;      "//instruction
	return 0;
}
```

#### Basit ifadeler:
Temel yapıyı kavradığımıza göre detaylara geçebilriz. 
##### Operatörler:
Operatörler, spesifik matematiksel veya mantıksal snksiyonları gerçekleştiren yapılar olarak tanımlanabilir. Bazı operatör türleri şu şekildedir:
	* Aritmetik Operatörler
	* Mantıksal Operatörler
	* İlişkisel/Karşılaştırma Operatörleri 
	* Bitwise operatörler
	* Atama Operatörleri

###### Aritmetik Operatörler: Matematiksel işlemlerin gerçekleştirilmesi sağlanır.

|Operatör|Anlamı|
|:------:|------|
|+|Toplama|
|-| Çıkartma|
|*|Çarpma|
|/|Bölme|
|%|Mod Alma|
|**|Kuvvet Alma|
|++|Artırma|
|--|Azaltma|

###### Mantıksal Operatörler:

|Operatör|Anlamı|
|:------:|------|
|&&|VE|
|\|\||VEYA|
|!|DEĞİL|

###### İlişkisel Operatörler: Karşılaştırmalarda kulanılır ve true/false değer döndürür.

|Operatör|Anlamı|
|:------:|------|
|==|Eşittir|
|!=|Eşit değildir|
|<|Küçüktür|
|>|Büyüktür|
|<=|Küçük Eşittir|
|>=|Büyük Eşittir|

###### Bitwise Operatörler: Mantıksal bit işlemleri gerçekleştirir.

|Operatör|Anlamı|
|:------:|------|
|&|bitwise VE|
|\||bitwise VEYA|
|^|XOR|

###### Atama Operatörleri: atama operatörü "=" dir. Yönü sağdan sola doğrudur. Aritmetik operatörlerle kullanılarak iki tarafın işlem sonucunun atanması sağlayanabilir. Ör: +=

###### Diğer Operatörler:

|Operatör|Anlamı|
|:------:|------|
|&|address of|
|*|pointer|
|?:|ternary operator|


#### *cout* output sınıfı:
Konsola çıktı üretmek için kullanılır. << operatörü, neyin çıktı olarak verileceğini gösterir.
```cpp
cout<<"Hello";
``` 

Birden çok << operatoru kullanılarak çıktılar birleştirilebilir:
```cpp
char name='x';
cout<<"Hello"<<name;
```

#### *cin* input sınıfı
Kullanıcıdan girdi almak için kullanılır. cout ile aynı yapıdadır sadece >> operatörü ile kullanılır.

```cpp
int age;
cin>>age;
```

#### Değişkenler ve Depolama

İçinde değer saklayabildiğimiz yapılara değişkenler denir. Daha önceden programlama tecrübeniz varsa değişkenlerin ne kadar değerli yapılar olduğunun farkındasınızdır. Eğer tecrübeniz yoksa değişkenlerin öneminden şu şekilde bahsedebiliriz:
-Değişkenler, bir veriyi işleyebilmemiz, tekrar kullanabilmemiz, anlamlandırabilmemiz için gerekli olan yapılardır. Aynı zamanda bir değişiklik yapılacağı zaman her yerde değiştirmek yerine değişkenin değerini değiştirmek  yeterli olacaktır. Yaş üzerinden işlem yapan bir uygulama düşünelim. Her sene girip işlem yapılan her yerde yaşımızı artırmak mı daha mantıklıdır yoksa sadece yaş değişkeninin değerini 1 artırmak mı? 

Değişkenlerin isimlendirilmesi için belirli kurallar vardır.Bu kurallardan bu dökümanın *3.1.* kısmında bahsedilmiştir.

Değişken tanımı yapmak için: 
```cpp
type variable_name;

//örnek:
int age=22;
int num;
```

C++ basit değişken tipleri:

|Değişken tipi|Format specifier|Tanım|
|-------------|----------------|--------|
|Integer- int| %d|Tam sayıları tanımlar|
|float-double|%f-%lf|Floating point sayıları belirtir. Double ın floattan farkı virgğlden sonra daha çok basamak göstermesidir.|
|char|%c|Karakter tutar,tek tırnak içerisinde yazılır ve genellikle ASCII tablosundan gelir|
|string|%s|Karakter dizileridir|
|bool|-|True ya da False değerini tutabilir|


#### Integer:
Bir değişken tipidir ve tam sayıları ifade eder.
UNIX tabanlı bir makinede integer 32 bittir(4 byte) yani -2^31 ile 2^31-1 e kadar değer alır.

```cppc
int number;
```
şeklinde tanımlanır.

Farklı compilerlarda farklı boyutu olabilir. Mesela Turbo C++ da integer 16 bittir. Bunun sonucu olarak UNIX makinede çalışan bazı kodlar bu compiler üzeride hata verebilir.

#### Atama:
= operatör ile yapılır.
= in sağındaki değeri soldakine atar.
atamayapabilmek için sol tarafta bir değişken bulunmalıdır.
iki tarafta da değişken varsa sağdakinin içindeki değeri soldakine atar.

```cpp
int x,y;
x=(3+2)*5;
y=x;
```

![Bellekte Değişkenler-infoBrothers sayfasından alınmıştır](http://www.infobrother.com/img/others/computer-memory.png)

#### FLoating Point:

Reel sayıları ifade ederken kullanırız. Bu sayıların kesirli kısımları da vardır.(Ör. 5.5, 8.3)

Decimal point ile integerlardan ayrılır=> 5.0-float, 5-integer

Exponansiyel gösterim: 1.2e34=1.2*10^34

Tanımlanışı:
```cpp
float number;
```

####Char/Karakterler:
Tek bir karakteri ifade eder:
```cpp
char var;
```

Karakterler tek tırnak içerisinde belirtilir.--> 'A','2','!',' ' (boşluk da bir karakterdir.)

Bunların yanısıra bazı özel durumlarda *\ escape karakteri* kullanılır. Kendini takip eden karakteri göre bir sinyal yollar. Escape karakterlerin bazıları aşağıdaki tabloda verilmiştir.

|Karakter|İsim|Açıklama|
|--------|----|--------|
|\b|Backspace|İşaretçiyi bir karakter geriye taşır|
|\f|Form Feed|Sayfanın başına geçer|
|\n|New line|yeni satıra geçer|
|\r|Return|satırın başına dön|
|\t|Tab|bir tab boşluk bırak|
|\'|Apostrophe| ' karakterinin karışmaması için kullanılır|
|\"|Double Quote| " karakterinin stringe karışmaması için|
|\nnn| nnn karakteri| Octal sayılar belirtilir|
|\NN| NN karakteri| Hexadecimal sayıları belirtmek için|

#### Boolean:
Boolean, mantıksaldeğer tutan bir değişken tipidir.
True ya da false deger alır.
bool olarak gösterilir.

Kullanım örneği:
```cpp
#include <iostream.h>

int main(){
	bool x=true;
	int i=0;

	while(x){
		cout<<i;
		if(i==50){
			x=false;
		}
	}
	
}
```

## 5) Diziler, Qualifier ve Sayılar
### 5.1- Diziler
Şu ana kadarki kısımlarda değikenlerden bahsetmiş, ve bunların hafızadaki bloklarda tutulduğunu söylemiştik. Peki ya birden fazla benzer veriyi depolamak istersek? Hepsi için ayrı ayrı değişken mi oluşturmalıyız? KESİNLİKLE HAYIR.

Bu noktada array(dizi) yapısı devreye girer. Diziler, aynı tipte birden çok verinin bir arada tutulduğu yapılardir. Dizinin içerisindeki her bir iteme eleman(element) denir. Hafızada dizinin elemanları art arda tutularak her biri için yeni değişken oluşturmamıza gerek kalmadan verilerin bir arada tutulmasını ve istediğimizde kolaylıkla erişilebilmesini sağlayan bir yapıdır.

Örnek dizi tanımı:
```cpp
int data_list[3];
```

burada data_list adlı dizinin 3 tane elemanı vardır.
Bir dizinin içerisindeki elemanlara erişmenin yolu index(indisler)dir.
C++ dilinde dizi inidsleri 0 dan başlar. Yani yukarıda tanımlanan dizinin son elemanı data_list[2] dir.
Köşeli parantezlerle eleman belirtmeye "referencing" de denir.

Dizilerin kullanımı için ufak bir ortalama bulma örneği:
```cpp
#include <iostream.h>

main (){
	float data[5]; 
	float total;
	float average;

	data[0] = 34.0;
	data[1] = 27.0;
	data[2] = 46.5;
	data[3] = 82.0;
	data[4] = 22.0;
	total = data[0] + data[1] + data[2] + data[3] + data[4];
	average = total / 5.0;
	cout << "Total "<< total << " Average " << average << '\n';
	return (0);
}
```

Program çıktısı: Total 211.5 Average 42.3

### 5.2- String
Karakter dizilerine string denir.
Her string *'\0(NUL)'* karakteri ile biter. Bilgisayar Stringin bitişini bu karakterden anlar.
(Bu karakter kullanıcıya gözükmez veya tanımlama,atama yaparken konulmaz.)

Örnek:
```cpp
main(){
	char name[5];
	
	name[0]='U';
	name[1]='m';
	name[2]='u';
	name[3]='t';
	name[4]='\0';
	
	return 0;
}
```
* Stringler çift tırnak(") içerisinde kullanılabilir.

* String tipi değişkenlere atama yapmak için C/C++ özelinde = operatörü kullanılamaz. Çünkü string aslında bir dizidir.
Bu nıktada string.h kütüphansindeki *strcpy()* kullanılır.

```cpp
name = "Umut";  // Illegal

strcpy(name, "Umut"); //Legal
```

Bazı string fonksşyonları:
|Fonksiyon|Açıklama|
|---------|--------|
|strcpy(str1,str2)|str2 deki içerigi str1 e kopyalar|
|strcat(str1,str2)|str2 yi str1 in sonuna ekler|
|length= strlen(str)|stringin uzunluğunu dönderir|
|strcmp(str1,str2)| str1 ile str2 aynı ise 0, değilse 0 dışında bir sayı döndürür|


### 5.3- Veri Okuma:






