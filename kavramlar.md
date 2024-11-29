# Sistem Yönetimi (System Administration)

Sistem yönetimi, bilgisayar sistemlerinin, ağların ve sunucuların yönetilmesi, bakımının yapılması ve güvenliğinin sağlanması sürecidir. Sistem yöneticileri, altyapının sorunsuz çalışmasını sağlamak için donanım, yazılım ve güvenlik önlemleriyle ilgilenir.

## Sistem Yönetimi Kavramları

### 1. Kullanıcı Hesapları Yönetimi
Kullanıcı hesapları yönetimi, bir bilgisayar sisteminde her birey için kimlik oluşturulması ve bu kimliğin kontrol edilmesidir.  
Sistem yöneticileri:  
- Her kullanıcıya özgü hesaplar oluşturur.  
- Her hesabın erişim haklarını belirler.  

Bu haklar, kullanıcıların hangi kaynaklara erişebileceğini ve hangi işlemleri gerçekleştirebileceğini düzenler. Örneğin:  
- Bazı kullanıcılar yalnızca okuma iznine sahip olabilir.  
- Diğerleri yazma ve düzenleme izinlerine sahip olabilir.

Bu süreç, güvenliği sağlamak ve kullanıcıların yalnızca yetkilendirildikleri verilere erişmesini temin etmek için kritiktir.

---

### 2. Şifre Politikaları
Şifre politikaları, kullanıcıların güçlü ve güvenli şifreler oluşturmasını sağlamak amacıyla belirlenen kurallardır:  
- **Minimum uzunluk**  
- **Karmaşıklık**: Büyük/küçük harf, rakam ve özel karakter kullanımı  
- **Geçerlilik süresi**  

Ek güvenlik önlemleri:  
- Şifrelerin periyodik olarak değiştirilmesi  
- Eski şifrelerin kullanılmaması  

Bu politikalar, siber saldırılara karşı güçlü bir savunma hattı oluşturur.

---

### 3. Güvenlik Duvarı (Firewall) Yönetimi
Güvenlik duvarı yönetimi, ağ trafiğini izleyerek ve denetleyerek:  
- Zararlı erişimlerin engellenmesini,  
- Yetkilendirilmiş trafiğin ise geçmesini sağlar.  

Örnek:  
- Belirli IP adreslerinden gelen bağlantılara izin verilebilir.  
- Yalnızca belirli portlar üzerinden veri alışverişine izin verilebilir.

Bu, kötü niyetli yazılımların ve saldırıların ağ içine girmeden engellenmesini sağlar.

---

### 4. Servis Yönetimi
Servis yönetimi, sunucularda çalışan yazılımların:  
- İzlenmesi,  
- Başlatılması,  
- Durdurulması,  
- Güncellenmesi süreçlerini içerir.

Örnek hizmetler:  
- Web sunucuları  
- Veritabanı sunucuları  
- E-posta sunucuları  

Sistem yöneticileri, bu hizmetlerin düzgün çalışmasını sağlamak için gerekli adımları atar ve yazılım güncellemelerini takip eder. Bu, sistemin genel performansı ve erişilebilirliği için kritik öneme sahiptir.

---

# Sanallaştırma (Virtualization)

Sanallaştırma, bir fiziksel bilgisayar üzerinde birden fazla sanal makine çalıştırma teknolojisidir. Bu teknoloji:  
- Donanım kaynaklarını (işlemci, bellek, depolama vb.) birden fazla bağımsız ortamda izole bir şekilde kullanmayı sağlar.  
- Her sanal makine, kendi işletim sistemine ve uygulamalarına sahip olup, fiziksel makineden bağımsız gibi çalışır.

## Nasıl Çalışır?
Sanallaştırma, bir **hipervizör (sanallaştırma yöneticisi)** aracılığıyla gerçekleştirilir.  
- **Tip 1 Hipervizör (Bare-Metal)**: Doğrudan donanım üzerinde çalışır.  
  Örnek: VMware ESXi, Microsoft Hyper-V  
- **Tip 2 Hipervizör (Hosted)**: Bir işletim sistemi üzerinde çalışır.  
  Örnek: VirtualBox, VMware Workstation  

Hipervizör, kaynakları verimli bir şekilde yönetir ve her sanal makineyi izole eder.

## Nasıl Kurulur?
1. **Hipervizör Yükleme**: Sanallaştırma yazılımını (VirtualBox, VMware) yükleyin.  
2. **Sanal Makine Oluşturma**: Bellek, işlemci ve depolama miktarını belirleyerek bir sanal makine oluşturun.  
3. **İşletim Sistemi Kurma**: Sanal makineye işletim sistemi yükleyin.  
4. **Sanal Makineyi Yönetme**: Çalıştırabilir, durdurabilir veya kaynakları yeniden yapılandırabilirsiniz.

---

# Sunucu (Server)

Sunucu, ağ üzerinden hizmet sağlamak için tasarlanmış bir bilgisayar veya yazılım sistemidir.  
- Sunucular, istemcilerden gelen talepleri karşılamak için sürekli çalışır.  
- Büyük miktarda veriyi depolama, işleme ve paylaşma amacıyla kullanılır.

## İstemci (Client) ve Sunucu (Server) İlişkisi
1. **İstemci (Client)**:  
   - Sunucudan hizmet veya veri isteyen cihaz ya da yazılımdır.  
   - Örneğin: Bir web tarayıcısı.  
2. **Sunucu (Server)**:  
   - İstemciden gelen istekleri alır, işler ve yanıt gönderir.  
   - Örneğin: Web sayfası sunmak veya dosya paylaşmak.

Bu ilişki, ağ üzerinden hizmet sağlamak için temel bir iletişim modelidir.

---

# İşletim Sistemi (OS) ve Sunucu (Server) Farkı

| **Kriter**            | **İşletim Sistemi (OS)**                                           | **Sunucu (Server)**                                  |
|------------------------|-------------------------------------------------------------------|-----------------------------------------------------|
| **Tanım**             | Bilgisayar donanımını yönetmek için kullanılan yazılım            | Ağ üzerinden istemcilere hizmet sağlayan sistem     |
| **Görev**             | Donanım kaynaklarını yönetir                                      | Belirli bir hizmeti ağ üzerinden sağlar             |
| **Bağımsızlık**       | OS olmadan bir bilgisayar çalışamaz                               | Bir bilgisayar, OS ile çalışırken sunucu işlevi görebilir |
