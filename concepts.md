
Güzel bir şekilde özetle 

-Linux Dosya Sistemi Klasörlerinin Açılımı ve İşlevleri
/etc | /bin | /sbin | /user .....



# Sistem Yönetimi (System Administration)

## Sistem Yönetimi Nedir?  
Sistem yönetimi, bilgisayar sistemlerinin, ağların ve sunucuların yönetilmesi, bakımının yapılması ve güvenliğinin sağlanması sürecidir. Sistem yöneticileri, altyapının sorunsuz çalışmasını sağlamak için donanım, yazılım ve güvenlik önlemleriyle ilgilenir.

### Sistem Yönetimi Kavramları  
- **Kullanıcı Hesapları Yönetimi**  
- **Şifre Politikaları**  
- **Güvenlik Duvarı**  
- **Servis Yönetimi**

---

## Servis Yönetimi  
### Servis Yönetimi Nedir?  
Servis yönetimi, sunucularda çalışan yazılımların izlenmesi, başlatılması, durdurulması ve güncellenmesi süreçlerini içerir.

### Servis Yönetimi Süreçleri  
- **Çalışan hizmetlerin izlenmesi**  
- **Hizmetlerin başlatılması veya durdurulması**  
- **Güvenlik güncellemelerinin yapılması**  
- **Yazılım sürümlerinin takip edilmesi**

### Örnek Hizmetler  
- Web sunucuları  
- Veritabanı sunucuları  
- E-posta sunucuları  

Servis yönetimi, sistemin genel performansı ve erişilebilirliği açısından kritik öneme sahiptir.

---

# Sanallaştırma (Virtualization)

## Sanallaştırma Nedir?  
Sanallaştırma, bir fiziksel bilgisayarda birden fazla sanal bilgisayar (sanal makine) çalıştırma teknolojisidir. Her sanal makine, kendi işletim sistemi ve programlarıyla, bağımsız bir bilgisayar gibi çalışır.

### Nasıl Çalışır?  
Sanallaştırma, bir **hipervizör** (sanallaştırma yöneticisi) aracılığıyla gerçekleştirilir. Hipervizör, fiziksel donanım ile sanal makineler arasındaki kaynakları yönetir ve her sanal makineyi izole eder.

#### Hipervizör Türleri:  
1. **Tip 1 Hipervizör (Bare-metal)**  
   - Doğrudan donanım üzerinde çalışır.  
   - Örnekler: VMware ESXi, Microsoft Hyper-V.  

2. **Tip 2 Hipervizör (Hosted)**  
   - Bir işletim sistemi üzerinde çalışır.  
   - Örnekler: VirtualBox, VMware Workstation.  

### Sanal Makine Nedir?  
- Bir fiziksel bilgisayar üzerinde çalışan, bağımsız bir bilgisayar gibi davranan yazılımsal bir sistemdir.  
- Kendi işletim sistemi ve programları vardır.  
- Fiziksel bilgisayarın donanımını kullanır ancak diğer sanal makinelerden izole çalışır.

---

# Sunucu (Server)

## Sunucu Nedir?  
Sunucu (Server), ağ üzerinden hizmet sağlamak için tasarlanmış bir bilgisayar veya yazılım sistemidir. Sunucular, belirli görevleri yerine getirmek için sürekli olarak çalışır ve istemcilerden gelen talepleri karşılar.

### İstemci-Sunucu İlişkisi  
1. **İstemci (Client):**  
   - Sunucudan hizmet veya veri talep eden cihaz veya yazılımdır.  
   - Örnek: Bir web tarayıcısı.

2. **Sunucu (Server):**  
   - İstemciden gelen istekleri alır, işler ve yanıt sağlar.  
   - Örnek: Bir web sunucusu.

---

# İşletim Sistemi (OS) ve Sunucu Farkı  

| **Özellik**           | **İşletim Sistemi (OS)**                     | **Sunucu (Server)**                     |
|------------------------|----------------------------------------------|-----------------------------------------|
| **Tanım**             | Bilgisayar donanımını yöneten yazılım.       | Ağ üzerinden hizmet sağlayan sistem.   |
| **Görev**             | Donanım kaynaklarını yönetir.               | Belirli bir hizmet sunar.              |
| **Örnek**             | Linux, Windows, macOS.                      | Web, dosya veya veritabanı sunucuları. |

---

# ISO Dosyası  

## ISO Dosyası Nedir?  
ISO dosyası, bir diskin dijital kopyasını içerir. İçerisinde işletim sisteminin dosyaları, kurulum verileri ve önyükleme için gerekli dosyalar bulunur. ISO dosyaları genellikle CD, DVD veya USB’ye yazılarak fiziksel disklere benzer şekilde kullanılabilir.

---

# Hostname ve Domain Name  

### Hostname  
- Bir cihazın ağ üzerinde tanımlanan benzersiz adı.  
- Cihazın kimliğini belirler ve ağda iletişim için kullanılır.

### Domain Name  
- Hostname’den farklı olarak internet üzerinde web siteleri ve kaynakları tanımlamak için kullanılır.

---

# Disk Bölümlendirme (Partitioning Disks)

## Disk Bölümlendirme Nedir?  
Bir sabit disk veya SSD’nin mantıksal parçalara ayrılması işlemidir. Her bölüm bağımsız bir dosya sistemiyle formatlanabilir.  

### Avantajları  
- Veri yönetimini kolaylaştırır.  
- Farklı kullanım amaçlarına göre bölümler oluşturulabilir (örneğin, işletim sistemi, veriler).  
- Bir bölümdeki veri kaybı diğer bölümleri etkilemez.

---

# Kullanıcı Türleri  

### Root Kullanıcı  
- Sistemdeki en yüksek yetkiye sahip kullanıcıdır.  
- Tüm dosyalara erişebilir ve sistemi yönetebilir.  

### Normal Kullanıcı  
- Kendi dosyalarına erişebilir.  
- Root kullanıcıya göre sınırlı yetkiye sahiptir.

---

# Mantıksal Hacim Yöneticisi (LVM)

## LVM Nedir?  
LVM, Linux sistemlerinde kullanılan bir disk yönetim aracıdır. Fiziksel diskleri birleştirerek esnek ve ölçeklenebilir bir depolama alanı oluşturur.

### Bileşenler  
- **LVM Group:** Fiziksel disklerden oluşturulan grup.  
- **Mantıksal Hacimler:** Belirli dosya sistemleri veya amaçlar için ayrılan sanal depolama alanları (örneğin, root, home, swap).

---

# Linux ve Debian Farkı  

| **Özellik**     | **Linux**                                     | **Debian**                                     |
|------------------|-----------------------------------------------|-----------------------------------------------|
| **Tanım**       | Açık kaynaklı bir çekirdek (kernel).          | Linux çekirdeğini kullanan bir işletim sistemi. |
| **Kullanım**    | Farklı dağıtımlar tarafından temel alınır.     | Kararlı, güvenli ve sunucular için uygundur.   |
| **Örnek**       | Ubuntu, Fedora, CentOS (Linux dağıtımları).   | Debian bir Linux dağıtımıdır.                 |
