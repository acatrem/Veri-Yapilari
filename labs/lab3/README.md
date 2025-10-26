### Veri Yapıları Laboratuvarı Özeti (22 Ekim 2025)

Bu laboratuvarda, C++ STL kütüphanelerini kullanarak temel veri yapılarının pratik uygulamalarına odaklandım. Çalışmanın ana hedefi, `vector`, `forward_list` ve `list` konteynerlerinin davranışlarını, avantajlarını ve dezavantajlarını anlamaktı.

**PART 1: `std::vector` (Dinamik Dizi / Array List)**

* `std::vector` kullanarak dinamik boyutlu bir dizi (array list) oluşturdum.
* Temel operasyonları uyguladım:
    * `push_back()` ile sona eleman ekleme.
    * `insert(vector.begin(), ...)` ile listenin başına eleman ekleme.
    * `pop_back()` ile sondan eleman silme.
* `rbegin()` ve `rend()` ters iteratörlerini kullanarak `vector`'ü tersten yazdırdım.

**PART 2: `std::forward_list` ve `std::list` (Bağlı Listeler)**

* **Sıralı Birleştirme (Ordered Union):**
    * İki adet sıralı `std::forward_list`'i (tek yönlü bağlı liste) alıp, bunları karşılaştırarak yeni bir sıralı birleşik liste oluşturan bir fonksiyon yazdım.
    * Aynı birleştirme işlemini `std::list` (çift yönlü bağlı liste) için de uyguladım. Bu versiyonda ek olarak, iki listedeki ortak eleman sayısını ve sonuç listesinin toplam boyutunu da hesapladım.

* **Palindrom Kontrolü:**
    * Bir `std::list`'in palindrom olup olmadığını kontrol eden bir fonksiyon yazdım.
    * **Gözlem:** `std::list`'in çift yönlü yapısı sayesinde, bir iteratörü baştan (`begin()`) ve bir ters iteratörü sondan (`rbegin()`) başlatıp ortada buluşturarak verimli bir kontrol sağladım.

* **`std::list` Üzerinde Binary Search (!):**
    * Laboratuvar sorusu üzerine, sıralı bir `std::list` üzerinde **binary search** algoritmasını uygulayan bir fonksiyon yazdım.
    * **Önemli Gözlem:** Binary search, $O(1)$ zamanda rastgele erişim (random access) gerektirir. Ancak `std::list` bunu desteklemez; bir elemana erişim $O(n)$'dir. Kodda, `std::advance(it, mid)` kullanarak orta elemanı buldum, ancak bu işlemin kendisi $O(n)$ karmaşıklığındadır. Bu yüzden, algoritmanın toplam karmaşıklığı $O(n \log n)$ oldu.
    * **Çıkarım:** Bu deneme, $O(n)$ olan basit bir doğrusal aramadan (linear search) daha yavaş çalıştı. Bu da, bir algoritmayı uygularken doğru veri yapısını seçmenin verimlilik açısından ne kadar kritik olduğunu gösteren önemli bir tecrübe oldu.

* **Yapısal Karşılaştırma (Kod içi notlar):**
    * `vector` (array list) ve `list` (linked list) yapılarını karşılaştıran notlar aldım. Temel farklar: `vector`'de $O(1)$ erişim ve daha iyi önbellek (cache