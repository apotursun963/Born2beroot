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


### **Rocky ve Debian nedir ve aralarındaki fark nedir?**
Rocky ve Debian temelde aslında bir Linux dağıtımıdır. 
- **Debian**; Geniş bir topluluk tarafından geliştirilir ve çok çeşitli paket yönetimi desteği sunar. Debian, birçok popüler Linux dağıtımının (ör. Ubuntu) temelidir.
- **Farkı**; Rocky; Kurumsal kullanıcılar, sunucu ortamları için tercih edilir. Debian; Genel kullanıcılar, geliştiriciler, sunucular için daha uygundur.


### **aptitude ve apt nedir ve farkları nelerdir?**
Her ikisi de, sistemde yazılımların kurulumu, kaldırılması ve güncellenmesi gibi işlemleri gerçekleştirmek için kullanılır. 
- **apt**; Debian tabanlı dağıtımlar için kullanılan bir paket yönetim aracıdır.
- **aptitude**; apt'e kıyasla daha gelişmiş bir paket yönetim arayüzüdür. Apt'e ek olarak daha fazla özellik ve işlevsellik sunar.


### **APPArmor nedir?**
APPArmor, uygulamalara bir tür güvenlik profilleri atar ve bu profiller uygulamanın hangi dosyalara, ağlara ve sistem kaynaklarına erişebileceğini sınırlar. Bu sayede, bir saldırganın kötü niyetli bir uygulamayı kullanarak sistem üzerinde zarar vermesini engeller.


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

