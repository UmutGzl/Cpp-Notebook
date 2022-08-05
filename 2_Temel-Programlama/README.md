# Temel Programlama Konsepptleri
## 1) Akış Kontrol Yapıları
Programın akışını kontrol eden yapılanrdan giriş bölümünde zaten bahsetmiştik. Hatırlatma ve konu sürekliliği açısından burada da tekrar değineceğiz. **İyice anladığınızı düşünüyorsanız burayı atlayabilirsiniz.**

### 1.1. Koşul ifadeleri
#### 1.1.1. If-else-else if Statement:
* Programda karar verme ve dallanma durumları için kullanılır. 
* içerisine yazılan *condition* ifadesinin doğru/yanlış olma durumuna göre belirli kod bloklarının çalışmasını veya çalışmamasını kontrol eder.

```
if(condition){
	statement;
}
```
* condition ifadeler true veya false olarak değer döndürür. Bu ifadeler kurulurken de İlişkisel operatörler kullanılır(<=,<,>,...)
* Birden çok condition ifadesini mantıksal operatörler iel birleştirmek mümkündür:
|Operatör|Kullanım|Anlamı|
|--------|--------|------|
|Logical AND(&&)|(expr1)&&(expr2)|iki koşul da doğruysa TRUE döndürür|
|Logical OR(\|\|)|(expr1)\|\|(expr2)|İki koşuldan en az biri doğruysa TRUE döndürür|

Örnek: 
```cpp
if (total_owed <= 0) {
	++zero_count;
	cout << "You owe nothing.\n";
}
```

* if'in içerisindeki koşulun gerçekleşmeyeceği durumlarda ise *else* bloğu kullanılır:

```
if (condition){
	statement;
}
else{
	statement;
}
```

Eğer koşul ifadesi false değer döndürüyor ise else bloğunun içerisindeki bloğu çalıştırır.

* İf bloğunun içerisindeki koşul sağlanmadığı durumda başka bir koşulu kontrol etmeyi sağlayan yapıya da *else if* yapısı denir:

```
if(condition1){
	block1;
}else if(condition2){
	block2;
}else if(condition3){
	block3;
}else{
	block4;
}

```

![larp](http://larp.marcolavoie.ca/en/DocHTM/131.gif)

#### 1.1.2. Switch-case: 
* Bir değişkenin değerine bağlı olarak çeşitli tasklar arasında seçim yapılan ifadedir.
* Aynı yapı if...else if...else ile de kurulabilir ancak kod sadeliği, kullanışlılık ve yazım kolaylığı açısınndan switch-case yapısının büyük getirisi vardır.

![switch flowchart](https://cdn.programiz.com/sites/tutorial2program/files/flowchart-switch-statement.jpg)

* Swich case yapısında temel işleyiş şu şekildedir: 
		- Switch içerisindeki ifadenin değerine göre tüm caseler yukarıdan aşağıya kontrol edilir.
		- Uyumlu bir ifade bulunursa onun içerisindeki blok gerçekleştir ve break ile switchden çıkılır.
		- Uyuşan ifade bulunmaz ise default bloğu gerçekleştirilir.

* Switch-case saadece değişkenler ile değil, switch içerisine yazılan ifadenin değerine göre yapılır. Sadece değişken adı yazıldığında değişkenin değerine göre değerlendirilir.

*Bu yapının örneğini End Chapter Çözümlerimdeki ana menü yapısında görebilirsiniz.*

### 1.2. Loop Statements/Döngüler:
Bilgisayara bir işi birden fazla kez tekrar ettirmek için kullanılan yapılara döngü denir. 2 farklı tür döngü vardır. Bir tanesi tekrar sayısına bağlı, diğeri de koşula bağlı döngülerdir.

#### 1.2.1. While döngüsü
* while döngüsü belirli bir görevin koşula bağlı olarak tekrar etmesini sağlar.

```
while(condition){
	statements;
}
```
* Buradaki döngü içerideki CONDITION ifadesi false(0) olana kadar tekrar eder.

Fibonacci Örneği:
```cpp
#include <iostream.h>
int old_number;
int current_number;
int next_number;

int main(){
	old_number = 1;
	current_number = 1;
	cout << "l\n"; // Print first number

	while (current_number < 100) {
		cout << current_number << '\n';
		next_number = current_number + old_number;
		old_number = current_number;
		current_number = next_number;
	}
	return (0);
}
```
![whileflowchart](https://i.pinimg.com/736x/2c/6c/8a/2c6c8a0fb55e61fa2dbe2b878f361abd.jpg)

###### Sonsuz Döngü: while(true) veya while(1)

##### do...while:
do while, while döngüsünün koşulun eylem gerçekleştikten sonra yapılan halidir.

![do...while](https://preview.redd.it/6wksqjmmyw321.jpg?auto=webp&s=aceebdeb23af98598c2508b42f77debbcd36cf4b)
```
do{
	statement;
}while(condition);
```

#### 1.2.2. For Döngüsü:
* While döngüsünün aksine for, belirli sayıda tekrarlanacak tasklar için kullanılır. 
Örnek:
```
for(starting_point;stop_point;increasing/decreasing){
	statement;
}
```
```cpp
for(int i=0;i<stop_point;i++){
	statement;
}
```
* For döngüsü, işlemlerini gerçekleştirirken bir döngü değişkeni kullanır. Bu dögü değişkeni, başlangıçtan bitişe kadar artış miktarına göre artar. Böylece her dönüşte dögü değişkenindeki değeri kullanarak işlem yapabiliriz. Bunun en çok kullanıldığı alan bir dizinin içerisindeki elemanları dönmedir.

```cpp
#include <iostream>

using namespace std;

int int main(){
	char arr[7]={'U','m','u','t','G','z','l'};
	cout<<"my github username is: "
	for(int i=0;i<7;i++){
		cout<<arr[i];
	}
	return 0;
}
```

### 1.3. break ve continue

* *break* ifadesi, içinde bulunulan döngüyü kırıp o döngüden çıkmak amacıyla kullanılır. Genellikle döngüye müdahale ederek çıkmamız gereken durumlar için kullanılır. Bir if ile kullanılarak balli kuşullar gerçekleştiğinden döngüden çıkma sağlanabilir.

NOT: Bu koşulu && ile while conditionuna bağlamak mümkündür ve tercih edilir.

* Aynı zamanda switch-case ifadesinde bir case gerçekleştikten sonra switch yapısından çıkmak için kullanılır.

* *continue* yapısı ise belirli durumlada döngünün o anki aşamasını atlamaya yarar. Break yapısından farkı, döngüyü kırıp geçmek yerine sadece o anki dönüşü atlar.

Bir programın 100 sayısını -5 den +5 e kadar tüm sayılara böldüğünü düşünelim:

```cpp
#include <iostream>

using namespace std;

int main(){
	for(int i=-5;i<=5;i++){
		if(i==0){
			continue;
		}
		cout<<100/i;
	}
	return 0;
}

```
* bir sayının 0 a bölümü hata vereceğinden döngünün bu kısmını atlıyoruz.


## 2)Scope Kavramı, Değişkenler ve Fonksiyonlar
Şu ana kadar işlemlerimizi tek bir fonksiyon üzerinde yaptığımızdan veya global değişkenleri kullandığımızdan ***scope*** kavramı ile henüz tanışmadık. Ancak giriş kısmında da belirtildiği gibi iyi bir program, tekrar eden işlemlerin fonksiyonlarla yazılması ile oluşur. bu sebeple scope kavramına hakim olmamız gerekiyor. Aynı zamanda bu kavramlar ile birlikte kodumuzu nasıl fonksiyonlara böleceğimizi de öğreneceğiz.

### 2.1. Scope ve Storage class
Scope ve storage class, tüm değişkenlerin sahip olduğu 2 özelliktir. 
	-Scope kavramı, bir değişkenin geçerli olduğu alanı belirler. Global değişkenlerin scopeları tanımlandıkları yerden programın sonuna kadardır. Local Değişkenler ise sadece tanımlandıkları blok içerisinde geçerlidir.(bloklar süslü parantezler arasında kalan kısımlara denir-->{ })
	Global değişken ile aynı isimde bir local değişken tanımlamak mümkündür. Kendi buunduğu scope içerisinde Local değişken geçerlidir. 
	![O'Reilly](https://www.oreilly.com/library/view/practical-c-programming/0596004192/httpatomoreillycomsourceoreillyimages55188.png) ![GeekForGeeks](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Variable-scope-in-C.png)

	-Storage Class kalıcı ya da geçici olabilir. Global değişkenler genellikle kalıcıdır ve programın sonuna kadar bellekte tutulurlar. Geçici değişkenler ise belleğin ***stack*** adı verilen bir yapıda tutulurlar. Çok fazla geçici değişken birikirse *stackoverflow* hatası alınır. Geçici değişkenlere ayrılan bellekler kullanıldıkları blokların sonuna gelindiğinde geri kazanılır.

|Değişken|Scope|Storage Class|İnitializing/Tanımlama|
|--------|-----|-------------|----------------------|
|Tüm blokların dışında|Global|Permanent|Once|
|tüm blokların dışında *static* tanımlanmış|Global|Permanent|Once|
|Bloğun içinde tanımlanmış|Local|Temporary|Her blokta|
|Bloğun içinde *statik* tanımlanmış|Local|Permanent|Once|


### 2.2. Fonksiyonlar:
Fonksiyonlar, farklı veriler için tekrar tekrar yapacağımız işlemler gruplamak için bir araçtır. Şu ana kadarki örnek kodlarımızda da aslında fonksiyonlar mevcuttu. En bilinik fonksiyonumuz ***main()*** fonksiyonudur. 

Main fonksiyonu özel bir fonksiyondur. Her programın bir main fonksiyonu olmak zorundandır ve programımız o fonksiyon ile çalışmala başlar. Tüm fonksiyonlar direkt ya da dolaylı olarak main fonksiyonundan çağırılır.

fonksiyonun elemanları:
	- ***isim***
	- ***Parametreler***
	- ***Dönüş değeri/Return Value***

```cpp
function_type function_name(PARAMETERS){
	//codes
	return value;
}
```

Örnek:
```cpp
float triangle(float width, float height){
	//codes
	return value;
}
```

* Yukarıdaki örnekte de olduğu gibi fonksiyona parametrenin değerini gönderme işlemine ***"call by value"*** denir. 

* fonksionlar belirli bir açıdan değişkenlerle ortak bir özelliğe sahiptir. O da tanımlanma işlemidir. Fonksionları kullanmadan önce onları tanımlamış olmamız gerekiyor. Bunu yapmanın iki yolu vardır:
		- Fonksyonu mainin üzerinde yazmak: Bu yöntem main fonksionunu en altta bıraktığı ve karışıklık yaratabildiği için düzen açısından tercih edilmez.
		-Fonksiyon prototipi tanımlamak: Compiler'a fonksiyonu çağırması için yeterli bilgiyi verme işlemidir. fonksiyonu yazarken koyduğumuz ilk satırın neredeyse aynısıdır.
			```cpp
			float triangle(float width,float height);
			```
		aynı zamanda C ve C++ bize sadece parametrelerin tipiyle de prototipleme yapma imkanı sunar:
			```cpp
			float triangle(float,float);
			```

#### 2.2.1.Referans parametreler ve Return değerleri
Fonksiyonları değişkenlerin değerine göre çağırdığımızda değişkenler üzerinde scope dışı bir değişiklik yapamayız. Eğer değişkene scope dışında da etki etmek istiyorsak değer üzerinden değil bellekteki adres değeri üzerinden işlem yapmalıyız. Buna ***call by referance*** denir.


```cpp
#include <iostream.h>

void inc_counter(int &counter){
	++counter;
}

main (){
	int a_count = 0;
	inc_counter(a_count);
	cout << a_count << '\n';
	return (0);
}
```
referans tipler, parametrelerde kullanıldığı gibi return tipler için de kullanılabilir.
 ```cpp
 const int ARRAY_SIZE = 5
// Size of the array
int itemarray[ARRAY_SIZE] = {1, 2, 5000, 3, 4};

int &biggest(void){
	int index;
	int biggest;
	biggest = 0;
	for (index = 1; index < ARRAY_SIZE; ++index){
		if (item_array[biggest] < item_array[index])
		biggest = index;
	}
	return (item_array[biggest]);
}
```
 Eğer en büyük elemanı yazdırmak istersek:
 ```cpp
 int item_array[5] = {1, 2, 5000, 3, 4}; // An array
cout << "The biggest element is "<<biggest(item_array, 5) << '\n';

```


##### Dangling Referances: Return by referance kullanırken dikkatli olmalıyız. Eğer dikkatli olmazsak artık var olmayan bir referansla karşılaşabiliriz.

### 2.2.2. Dizi Parametreler
C++ ın array ile olan ilişkisinin değişkenlerden farklı olduğunu biliyoruz. Öncelikle prototip tanımlamasında array boyutunu vermemiz gerekmediğini belirtmek isterim. 

C++, fonksiyonlara array gönderirken adreslere dayalı "call by address" denilen bir şema kullanır. Bu şema tüm array parametrelerini referanslara dönüştürür. Böylece dizinin boyutu ne olursa olsun parametre olarak gönderim yapılabilir. Siz köşeli parantez içerisine sayı yazsanız dahi C++ onu yoksayar. Genelde bu durum sadece insanlar için uyarı oluşturmak amaçlı kullanılır.

Çok boyutlu dizilerde ise son boyut dışında her boyuta sayı koymak zorundayız. Bunun sebebi ise C++ ın burada verdiğiniz sayılara göre diziyi algılayıp konumu ona göre belirlemesidir.
```cpp
int sum_matrix(int matrixl[10][10]);	//legal
int sum_matrix(int matrixl[10][]);		//legal
int sum_matrix(int matrixl[][]);		//illegal
```

### 2.2.3. Function Overloading
* Aynı isimde iki tane fonksiyon tanımı yapabilir miyiz? C ve PASCAL gibi eski dillerde hayır ancak yeni nesil dillerde gelen bu özellik C++ta da mevcuttur. Örneğin bir alan bulma fonksiyonu için hem integer değer döndüren hem de float değer döndüren fonksiyon aynı isimde yazılabilir. Function Overloading dahilinde tek bir kısıt vardır o da fonksiyonların C++ tarafından ayırt edilebiliyor olması lazım. C++ bu ayrt etme işlemini parametreler üzerinden yapar. Bu sebeple parametreleri aynı olan veya parametre almayan iki fonksiyon birbiriyle Funtion Overloading yapamaz.

İllegal:
```cpp 
int func();
float func();
```

Legal:
```cpp
int func(int num);
float func(float num);
```

Legal:
```cpp
int func(int num);
int func(int num, int num2);
```

### 2.2.4. Default Parametreler
Bir parametre fonksiyona gönderilmediğinde belirli bir kabul değeri almasını isteyebiliriz. Mesela scale gerektiren bir işlemde scale katsayısı verilmediğinde 1 kabul etmesini isteyebiliriz. Bu durumdayapacağımız şey diğer dillerdeki ile aynı mantıktadır.

```cpp
void draw(const rectangle &rectangle, double scale = 1.0);
```

default parametre her zaman sonda olmalıdır.