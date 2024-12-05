# Linux Dosya Sistemi ve Sistem Yönetimi

## Linux Dosya Sistemi Klasörleri
### Önemli Klasörlerin Açıklamaları ve İşlevleri
- **/etc**: Sistem yapılandırma dosyalarını içerir.
- **/bin**: Temel sistem programlarının yer aldığı dizin (örneğin `ls`, `cp`).
- **/sbin**: Sistem yöneticisi tarafından kullanılan programların bulunduğu dizin (örneğin `ifconfig`, `reboot`).
- **/usr**: Kullanıcıya yönelik uygulama ve kütüphanelerin yer aldığı dizin.
- **/home**: Kullanıcı dosyalarının bulunduğu kişisel dizinler.
- **/var**: Değişken veri dosyaları (örneğin log dosyaları, e-posta kuyrukları).
- **/tmp**: Geçici dosyalar için kullanılan dizin.

---

## Sistem Yönetimi
Sistem yönetimi, bilgisayar sistemlerinin, ağların ve sunucuların yönetim, bakım ve güvenlik süreçlerini kapsar.

### 1. Kullanıcı Hesapları Yönetimi
- **Amaç**: Her kullanıcı için kimlik oluşturma ve erişim haklarını belirleme.
- **Örnek**: Bir kullanıcı yalnızca okuma iznine sahipken, diğeri yazma ve düzenleme izni alabilir.

### 2. Şifre Politikaları
- **Kurallar**: Şifre uzunluğu, karmaşıklık ve geçerlilik süresi.
- **Güvenlik Önlemleri**: Eski şifrelerin kullanılmaması ve periyodik değiştirme.

### 3. Güvenlik Duvarı (Firewall) Yönetimi
- **Amaç**: Zararlı erişimleri engellemek ve izin verilen trafiği yönetmek.
- **Örnek**: Belirli IP adreslerinden gelen bağlantılara izin verilmesi.

### 4. Servis Yönetimi
- **İşlev**: Sunucu hizmetlerini izleme, başlatma, durdurma ve güncelleme.
- **Örnek**: Web sunucuları, veritabanı sunucularının sorunsuz çalışmasını sağlamak.

---

## Sanallaştırma (Virtualization)
- **Tanım**: Fiziksel bir bilgisayar üzerinde birden fazla sanal makine çalıştırma teknolojisi.
- **Nasıl Çalışır?**: Hipervizör (sanallaştırma yöneticisi) kullanılır.
  - **Tip 1 Hipervizör**: Donanım üzerinde çalışır (örneğin VMware ESXi).
  - **Tip 2 Hipervizör**: İşletim sistemi üzerinde çalışır (örneğin VirtualBox).

---

## Sunucu (Server)
- **Tanım**: Ağ üzerinden hizmet sağlayan bilgisayar veya yazılım sistemi.
- **Client-Server İlişkisi**:
  - **İstemci (Client)**: Hizmet talep eden cihaz veya yazılım.
  - **Sunucu (Server)**: İstekleri işleyen ve yanıt sağlayan sistem.

### İşletim Sistemi (OS) ve Sunucu Farkı
- **OS**: Donanımı yönetir, uygulamalar için ortam sağlar.
- **Sunucu**: Belirli bir hizmeti ağ üzerinden sunar.

---

## ISO Dosyası
- **Tanım**: Bir diskin dijital kopyası. Önyükleme ve kurulum dosyalarını içerir.
- **Kullanım**: USB veya DVD’ye yazılarak fiziksel diske benzer şekilde kullanılabilir.

---

## Kullanıcı Türleri
- **Root Kullanıcı**: Sistemde tam yetkiye sahip.
- **Normal Kullanıcı**: Sınırlı yetkilerle işlem yapabilir.

---

## Disk Bölümlendirmesi (Partitioning)
- **Amaç**: Diskleri mantıksal parçalara ayırarak farklı kullanım alanları oluşturmak.
- **Örnek**: İşletim sistemi, veri ve yedeklemeler için ayrı bölümler oluşturmak.

---

## LVM (Mantıksal Hacim Yöneticisi)
- **Tanım**: Daha esnek ve yönetilebilir disk alanı oluşturmayı sağlar.
- **Bileşenler**:
  - **Hacim Grupları**: Fiziksel disklerden oluşturulur.
  - **Mantıksal Hacimler**: Veri depolama için ayrılan alanlardır.

---

## Linux ve Debian Arasındaki Fark
- **Linux**: Bir çekirdek (kernel).
- **Debian**: Linux çekirdeğini kullanan bir işletim sistemi dağıtımı.

---

## Hostname ve Domain Name
- **Hostname**: Bir cihazın ağ üzerindeki benzersiz adı.
- **Domain Name**: Ağdaki bir alanı veya kaynağı temsil eden isim.

---

## monitorind.sh
`monitorind.sh` içeriğini burada belirtin veya bir bağlantı ekleyin.

