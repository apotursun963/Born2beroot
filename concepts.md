

Güzel bir şekilde özetle 

-Linux Dosya Sistemi Klasörlerinin Açılımı ve İşlevleri
/etc | /bin | /sbin | /user .....


Sistem yönetimi (system administration) Nedir ?
-----------------------------------------------
Sistem yönetimi, bilgisayar sistemlerinin, ağların ve sunucuların yönetilmesi, 
bakımının yapılması ve güvenliğinin sağlanması sürecidir. 
Sistem yöneticileri, altyapının sorunsuz çalışmasını sağlamak için donanım, 
yazılım ve güvenlik önlemleriyle ilgilenir. Sistem yönetimi kavramlarından bazıları:

1-Kullanıcı Hesapları Yönetimi:
Kullanıcı hesapları yönetimi, bir bilgisayar sisteminde her birey için 
kimlik oluşturulması ve bu kimliğin kontrol edilmesidir. 
Sistem yöneticileri, her kullanıcıya özgü hesaplar oluşturur ve her hesabın erişim haklarını belirler. 
Bu haklar, kullanıcıların hangi kaynaklara erişebileceğini ve hangi işlemleri gerçekleştirebileceğini düzenler. 
Örneğin, bazı kullanıcılar yalnızca okuma iznine sahipken, diğerleri yazma ve düzenleme izni alabilir. 
Bu, güvenliği sağlamak ve kullanıcıların sadece yetkilendirildikleri verilere erişmesini temin 
etmek için oldukça önemlidir.

2-Şifre Politikaları:
Şifre politikaları, kullanıcıların güçlü ve güvenli şifreler oluşturmasını sağlamak amacıyla belirlenen kurallardır. 
Bu kurallar, şifrelerin minimum uzunluğu, karmaşıklığı (büyük/küçük harf, rakam, özel karakter kullanımı) 
ve geçerlilik süresi gibi unsurları içerir. 
Güçlü şifreler, siber saldırılara karşı bir savunma hattı oluşturur ve kullanıcı hesaplarının kötüye 
kullanımını engeller. Ayrıca, şifrelerin periyodik olarak değiştirilmesi veya eski şifrelerin kullanılmaması 
gibi güvenlik önlemleri de şifre politikalarının bir parçasıdır.

3-Güvenlik Duvarı (Firewall) Yönetimi:
Güvenlik duvarı yönetimi, ağdaki trafiği izleyerek ve denetleyerek zararlı erişimlerin engellenmesini, 
yetkilendirilmiş trafiğin ise geçmesini sağlamayı amaçlar. 
Güvenlik duvarları, iç ağ ile dış ağ arasındaki iletişimi kontrol eder ve bu iletişimi belirli kurallara göre 
filtreler. Örneğin, yalnızca belirli IP adreslerinden gelen bağlantılara izin verilebilir veya yalnızca 
belirli portlar üzerinden veri alışverişine müsaade edilebilir. 
Bu sayede, kötü niyetli yazılımlar ve saldırılar ağın içine girmeden engellenmiş olur.

4-Servis Yönetimi: 
Servis yönetimi, sunucularda çalışan yazılımların izlenmesi, başlatılması, durdurulması ve güncellenmesi 
süreçlerini içerir. 
Sunucularda birçok farklı hizmet çalışır: web sunucuları, veritabanı sunucuları, e-posta sunucuları gibi. 
Bu hizmetlerin düzgün çalışması, sistemin genel performansı ve erişilebilirliği için kritik öneme sahiptir. 
Sistem yöneticileri, bu servislerin aktif olup olmadığını izler, gerektiğinde yeniden başlatır veya durdurur, 
ayrıca güvenlik güncellemelerini ve yazılım sürümlerini takip ederek günceller. 
Bu yönetim, hizmetlerin kesintisiz çalışmasını sağlamak için hayati bir rol oynar.



Sanallaştırma (Virtualization) Nedir ?
--------------------------------------
Sanallaştırma, bir fiziksel bilgisayar üzerinde birden fazla sanal makine çalıştırma teknolojisidir.
Bu teknoloji, donanım kaynaklarını (işlemci, bellek, depolama vb.) birden fazla bağımsız ortamda, 
yani sanal makinelerde izole bir şekilde kullanmaya olanak tanır.
Her sanal makine, kendi işletim sistemine ve uygulamalarına sahip olup, 
fiziksel makineden bağımsız gibi çalışabilir.

Nasıl Çalışır?
Sanallaştırma, bir hipervizör (sanallaştırma yöneticisi) aracılığıyla gerçekleştirilir. 
Hipervizör, fiziksel donanım ile sanal makineler arasındaki kaynakları yönetir ve her sanal makineyi izole eder.
Tip 1 Hipervizör (bare-metal): 
Doğrudan donanım üzerinde çalışır. Genellikle veri merkezlerinde kullanılır. 
Örnekler: VMware ESXi, Microsoft Hyper-V.
Tip 2 Hipervizör (hosted): 
Bir işletim sistemi üzerinde çalışır ve kullanıcı bilgisayarlarında daha yaygın olarak kullanılır. 
Örnekler: VirtualBox, VMware Workstation.
Hipervizör, sanal makinelerin işlemci, bellek ve depolama gibi kaynakları verimli bir şekilde kullanmasını sağlar.
Her sanal makine, kendi işletim sistemine sahip olup bağımsız olarak çalışır.

Nasıl Kurulur?
Hipervizör Yükleme: İlk adım olarak, sanallaştırma yazılımını (örneğin, VirtualBox veya VMware) yüklemeniz gerekir.
Sanal Makine Oluşturma: Yüklediğiniz yazılım üzerinden yeni bir sanal makine oluşturun. 
Bu adımda sanal makinenin ne kadar bellek, işlemci ve depolama alacağı belirlenir.
İşletim Sistemi Kurma: Sanal makineyi başlatın ve istediğiniz işletim sistemini yükleyin.
Sanal Makineyi Yönetme: Sanal makineyi çalıştırabilir, başlatabilir, durdurabilir 
ve kaynakları yeniden yapılandırabilirsiniz.


Sunucu (Server) Nedir ?
-----------------------
Sunucu (Server), ağ üzerinden hizmet sağlamak için tasarlanmış bir bilgisayar veya yazılım sistemidir. 
Sunucular, belirli görevleri yerine getirmek için sürekli olarak çalışır ve istemcilerden 
(yani kullanıcı cihazlarından) gelen talepleri karşılar. 
Sunucu, bir istemciden gelen bir isteği alır, işler ve yanıt olarak ilgili veriyi veya hizmeti gönderir. 
Sunucular, genellikle büyük miktarda veriyi depolama, işleme ve paylaşma amacıyla kullanılır.
Server'lar verileri saklar, düzenler ve kullanıcıya sunarlar.

Client ->> Server (İstemci ->> Sunucu) ilişkisi, ağ üzerinden hizmet sağlamak için 
temel bir iletişim modelini ifade eder. 

1-İstemci (Client):
sunucudan hizmet veya veri isteyen cihaz veya yazılımdır. 
İstemci genellikle bir kullanıcı cihazı (bilgisayar, telefon, vb.) veya yazılım uygulaması olabilir. 
İstemci, bir isteği (örneğin, bir web sayfasını yüklemek) sunucuya gönderir.
2-Sunucu (Server), istemciden gelen istekleri alır, işler ve istemciye geri bir yanıt gönderir.
Sunucu, çeşitli hizmetler sağlar (örneğin, web sayfası, dosya, veritabanı verisi) ve 
genellikle güçlü donanım ve yazılım altyapısına sahiptir.
Özetle, istemci talepte bulunan, sunucu ise bu talepleri işleyip yanıt sağlayan sistemdir.


OS VE SERVER FARKI:
1-İşletim Sistemi (OS), 
İşletim sistemi, bir bilgisayarın donanımını yönetmek ve kullanıcı ile bilgisayar arasında bir arayüz 
sağlamak için kullanılan yazılımdır. 
Donanım kaynaklarını (CPU, bellek, depolama) yönetir ve uygulamaların çalışabilmesi için gerekli ortamı sağlar.

2-Sunucu (Server) ise, ağ üzerinden istemcilere hizmet sağlayan bir bilgisayar veya yazılım sistemidir. 
Sunucu, belirli bir hizmeti sunar, örneğin web sayfası sunmak veya dosya paylaşmak.

Fark: İşletim sistemi, bilgisayarın temel işlevlerini yönetirken, sunucu belirli bir hizmeti ağ üzerinden sağlar.
Bir bilgisayar, işletim sistemi üzerinde çalışabilir ve aynı zamanda sunucu işlevi görebilir.


ISO Dosyası Nedir ?
-------------------
ISO dosyası, bir diskin dijital kopyasını içerir. İçerisinde işletim sisteminin dosyaları, 
kurulum verileri, sistem dosyaları ve genellikle önyükleme için gerekli dosyalar bulunur. 
Bu, bir CD, DVD (Veri Depolama)  veya USB'ye yazılarak fiziksel bir diske benzer şekilde kullanılabilir.


1-Hostname (ağ adı), 
bir cihazın ağ üzerinde tanımlanan benzersiz adıdır. 
Genellikle bir bilgisayar, sunucu veya diğer ağ cihazları, birbirlerini 
tanımak ve iletişim kurmak için host adlarını kullanır. 
Hostname, cihazın ağdaki kimliğini belirler ve genellikle bir ağda hangi cihazların 
bulunduğunu belirlemek için kullanılır.

2-Domain name



Disk bölümlendirmesi (Partitioning disks):
bir sabit disk veya SSD'nin mantıksal parçalara ayrılması işlemidir. 
Her bölüm, bağımsız bir dosya sistemiyle formatlanabilir. 
Bu sayede, işletim sistemi, veriler ve yedeklemeler gibi farklı kullanım amaçları için ayrı 
bölümler oluşturulabilir. Bölümlendirme, veri yönetimini kolaylaştırır ve diskin daha verimli 
kullanılmasını sağlar. Ayrıca, bir bölümdeki veri kaybı diğer bölümleri etkilemez.


Kullanıcı türleri
-*-*-*-*-*-*-*-*-
1-Root kullanıcı:
bir bilgisayar sistemindeki en yüksek yetkiye sahip kullanıcıdır. 
Bu kullanıcı, sistemdeki tüm dosyalara ve kaynaklara erişim sağlar, 
diğer kullanıcıları yönetebilir ve sistemin yapılandırmasını değiştirebilir.

2-Normal Kullanıcı:
Kendi dosyalarına ve belirli kaynaklara erişebilir, ancak sistem 
dosyalarına veya diğer kullanıcıların verilerine erişemez.
root'a göre sınırlı yetkiye sahiptir.

LVM
---
Mantıksal Hacim Yöneticisi (LVM), Linux işletim sistemlerinde kullanılan bir disk yönetim aracıdır. 
LVM, fiziksel diskleri birleştirip daha esnek, yönetilebilir ve ölçeklenebilir bir depolama alanı 
oluşturmanıza olanak sağlar. LVM, sabit diskleri mantıksal hacimlere dönüştürerek disk yönetimini 
daha kolay hale getirir.
LVMGroup: Mantıksal hacim yöneticisi altında fiziksel disklerden oluşturulan gruptur.
Mantıksal Hacimler (root, home, swap, vb.): Hacim grubu içinde oluşturulan sanal depolama alanlarıdır 
ve her biri farklı bir dosya sistemi veya amaç için ayrılır(kök dizini, kullanıcı verileri, geçici dosyalar, vb.).

Linux ve Debian farkı 
--------------------
Linux: Linux, açık kaynaklı bir işletim sistemi çekirdeğidir (kernel). 
Birçok farklı Linux dağıtımı (örneğin, Ubuntu, Fedora, CentOS) bu çekirdeği 
kullanarak kendi işletim sistemlerini oluştururlar. 
Yani, Linux sadece bir çekirdek olup, kendi başına bir işletim sistemi değildir. 
ancak "Linux dağıtımı" dediğimizde, işletim sistemi olarak kullanılacak tam bir sistemden bahsediyoruz.

Debian: Debian, bir Linux dağıtımıdır ve Linux çekirdeği kullanır. 
Debian, özgür yazılım felsefesiyle geliştirilmiş ve çok sayıda kullanıcı tarafından tercih edilen bir dağıtımdır. 
Debian, sabırlı bir şekilde güncellenen, kararlı ve güvenli bir işletim sistemidir ve genellikle 
sunucu ortamlarında tercih edilir. 
Debian, ayrıca birçok popüler Linux dağıtımının da temelini oluşturur (örneğin, Ubuntu).
Çekirdek(Kernel), bir bilgisayarın işletim sisteminin "beyni" gibidir, 
donanım ve yazılım arasındaki temel etkileşimleri düzenler.

Özetle:
Linux: Çekirdek (kernel).
Debian: Linux çekirdeğini kullanan bir işletim sistemi dağıtımı.


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


## Bir Sanal Makine Nedir, Nasıl Çalışır ve Amacı Nedir?
----------
**Bir Sanal Makine Nedir ve Neden Kullanırız:**
Bir sanal makine, fiziksel bir makineyi taklit ederek canlandırmayı yardımcı olan bir yazılımdır. Yani bilgisayarın için kurduğumuz bir bilgisayardır.
Neden kullanırız? Mesela yeni bir işletim sistemi denemek istiyorsak, ya da şüphelendiğimiz bir dosya vardır, onu sanal makinede açıp deneriz ve sisteme vereceği zararları aslında sanal makineye vermiş olur ve ana bilgisayarı hiç bir şekilde etkilemez.

**Bir Sanal Makine Nasıl Çalışır?**
Sanal makineler, hypervisor adı verilen bir yazılım katmanı aracılığıyla çalışır. Hypervisor, ana bilgisayarın donanımını sanal makinelere dağıtarak her birinin bağımsız ve izole şekilde çalışmasını sağlar:

- **Bare-metal Hypervisor**: Doğrudan donanım üzerinde çalışır (ör. VMware ESXi).
- **Hosted Hypervisor**: Bir işletim sistemi üzerine kurulur (ör. VirtualBox).
Hypervisor, donanımı sanallaştırarak sanal makinelerin fiziksel donanımı paylaşmasını ve verimli kullanılmasını sağlar.

**Bir Sanal Makinenin Amacı Nedir?**
Kaynakların Daha Etkin Kullanımı:
Bir fiziksel sunucunun (örneğin, güçlü bir bilgisayarın) işlemci gücü, bellek kapasitesi ve depolama alanı gibi kaynakları genelde tam kapasite kullanılmaz. Sanal makineler, bu kaynakları bölerek birden fazla görev için kullanılabilir hale getirir.
Sonuç: Tek bir fiziksel sunucunun kaynaklarını verimli bir şekilde birden fazla göreve bölersiniz. Böylece, hem maliyet düşer hem de verim artar.

### **Cron, Linux ve Unix tabanlı sistemlerde belirli görevlerin otomatik olarak belirlenen zamanlarda çalıştırılmasını sağlayan bir sistem aracıdır.**

**Crontab Dosyası:**
`crontab` komutu, kullanıcıların kendi görevlerini tanımlayabileceği bir sistem sunar. `crontab -e` komutu, mevcut crontab dosyasını düzenlemek için kullanılır.
Bir crontab dosyası, beş alanlık bir ifade ile belirtilen zamanlama ve komut içeriğini içerir:

- **Dakika (0-59)**
- **Saat (0-23)**
- **Gün (1-31)**
- **Ay (1-12)**
- **Gün (0-6, 0=Pazar)**

Örnek:
`0 2 * * * /usr/bin/backup_script.sh`
Bu, her gün saat 02:00'de `backup_script.sh` adlı komutun çalıştırılacağını belirtir.


