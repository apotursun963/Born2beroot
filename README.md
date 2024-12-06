## Concepts
-----------

### **Disk (HDD/SSD)**
Bir depolama aygıtıdır ve veriler **kalıcı** olarak saklanır, yani bilgisayar kapalı olsa bile veriler kaybolmaz. Diskler, genellikle büyük kapasitelere sahip olup, uzun vadeli veri depolama için kullanılır.
Diskler, işletim sistemi, uygulamalar, kişisel dosyalar ve veritabanları gibi kalıcı verilerin depolanması için kullanılır.

### **Bellek (Ram)**
Bir geçici depolama aygıtıdır. Bilgisayar açık olduğu sürece, çalışan programlar, veriler ve işlemci tarafından kullanılan veriler burada tutulur. RAM, **geçici** olarak veri saklar ve bilgisayar kapatıldığında veriler kaybolur. Genellikle daha küçük kapasitelere sahiptir. RAM, programların hızlı çalışmasını sağlar çünkü işlemciye hızlı veri erişimi sunar.

### **İşlemci (CPU)**
Bilgisayarın **beyni** olarak düşünülebilir. Bilgisayarın tüm hesaplama ve işlem gücünü sağlayan temel bileşendir. CPU, **komutları işler**, **verileri hesaplar** ve **uygulamaları çalıştırır**. 
- **İşlemci**: Bilgisayarın çalışması için gerekli tüm işlemleri yapar.
- **Hız**: Verileri çok hızlı işleyebilme yeteneğine sahiptir, bu sayede bilgisayarın genel performansını belirler.
- **Çekirdek**: Modern CPU'lar birden fazla çekirdeğe sahip olabilir, her çekirdek bağımsız bir işlem yapabilir, bu da çoklu görevleri daha verimli hale getirir.
**Fiziksel CPU**: Bilgisayarın içinde bulunan gerçek işlemci donanımıdır. Tüm hesaplama ve veri işleme işlemlerini yapar.
**Sanal CPU**: Fiziksel CPU'nun sanal ortamda oluşturulmuş bir yansımasıdır. Genellikle sanal makinelerde (VM) kullanılır ve fiziksel CPU'nun kaynaklarını paylaşarak işlem yapar, yani fiziksel CPU gerçek donanım iken, sanal CPU sanal makinelerde fiziksel CPU'nun kaynaklarını kullanan sanal bir işlemciyi ifade eder.
CPU, bilgisayarın tüm işlemlerini yöneten ve çalıştıran en önemli parçadır. Programlar çalışırken, veriler üzerinde hesaplamalar yapar ve bilgisayarın düzgün çalışmasını sağlar.

username ALL=(ALL:ALL) ALL satırının anlamı, username adlı kullanıcının:

Tüm makinelerde,
Herhangi bir kullanıcı ve grup adına,
Tüm komutları çalıştırmasına izin verilmesi anlamına gelir.
Bu, genellikle tam yetkili bir kullanıcıya (örneğin, bir sistem yöneticisi) verilen bir yetkilendirme satırıdır. Bu kullanıcı, sudo komutunu kullanarak istediği her işlemi, istediği kullanıcı adı ve grup adıyla gerçekleştirebilir.

## Commands
----------
`lsblk` komut, Sistemdeki disk ve bölümlendirmeleri görüntülemek için kullanılan bir komuttur.
`hostnamectl` komutu, Sistemin (Cihazın) adını (hostname) görüntülemek veya değiştirmek için kullanılır.
Cihazın adını değiştirmek için `hostnamectl set-hostname <isim>`
