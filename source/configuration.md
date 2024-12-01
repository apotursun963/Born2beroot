# Debian'ı Yapılandırma

Sudo, SHH, UFW, Şifre Politikaları ve monitoring.sh kurulumları içerir.

## Sudo Kurulumu
sudo (super user do), bir komutu geçici olarak başka bir kullanıcı (genelde root) yetkileriyle çalıştırmanızı sağlar.
Kendi kullanıcı şifrenizi kullanarak işlem yapabilirsiniz.root şifresine ihtiyaç duyulmaz.

### Sudo Kurma
su (swicth user), bir kullanıcıdan başka bir kullanıcıya (genelde root) geçiş yapmayı sağlayan bir komuttur.
Kullanıcının şifresini (root şifresini) girmenizi gerektirir.
Öncelikle `root` kullanıcısına geçmek için aşağıdaki komutu kullanın.
```
su root
```

### Sudo'yu Yükleyin
apt ve aptitude, sistemde yazılımların kurulumu, kaldırılması ve güncellenmesi gibi işlemleri gerçekleştirmek için kullanılır.
Sistem paketini güncelleyin ve sudo paketini yükleyin.
```
apt update && apt upgrade && apt install sudo
```

### Kullanıcıyı Sudo Grubuna ekleme
Kendi kullanıcı adınızı sudo grubuna ekleyin.
```
sudo usermod -aG sudo <kullanıcı_adı>
```

### Root oturumdan çıkış
root oturumdan çıkmak için:
```
exit
```

## SSH Kurulumu ve Yapılandırılması
SSH (Secure Shell), uzak sunuculara güvenli bir şekilde bağlanmak için kullanılan bir ağ protokolüdür.
Güvenliği, verileri şifreleyerek ve kimlik doğrulama isteyerek sağlar.
Protokol, İki cihaz arasındaki veri iletişimini düzenleyen kurallar ve standartlardır. Verilerin nasıl gönderileceğini ve alınacağını belirler. 
örneğin, HTTP, HTTPS ve SSH gibi farklı protokoller vardır.
Port (Liman), ağdaki cihazlar arasındaki iletişimi sağlayan "kapılar"dır. Fiziksel portlar (USB, Ethernet gibi) cihazlar arasında veri iletimini sağlar. Sanal portlar ise yazılım seviyesinde, belirli hizmetler veya uygulamalar için kullanılır. Örneğin, SSH için 22 numaralı port kullanılır. 

### Paket Listesini Güncelleme
Öncelikle sistem paketlerini güncelleyin:
```
sudo apt update && sudo apt upgrade
```

### Openssh Server'ı Yükleme
SSH sunucusunu yüklemek için:
```
sudo apt install openssh-server
```

### SSH Hizmetinin Durmunu Kontrol Etme
SSH sunucusunun aktif olup olmadığını kontrol etme:
```
sudo systemctl status ssh
```
Eğer SSH hizmeti aktifse **active (running)** mesajını görürsünüsz.
Eğer aktif değilse SSH sunucusunu başlatmak için:
```
sudo systemctl start ssh
```

### SSH Sunucusunun Dinlediği Port'u Değiştirme
SSH Sunucusunun Varsayılan Olarak Dinlediği Port 22'dir. Güvenliği Arttırmak İçin Bu Port'u Değiştirebiliriz.
  - SSH yapılandırma dosyasını düzenlemek için:
    ```
    sudo nano /etc/ssh/sshd_config
    ```
  - Port değerini değiştirme:
    ```
    #Port 22 >>> Port 4242
    ```
  - yapılandırmayı kaydetmek için:
    ```
    Ctrl + O | Enter | Ctrl + X
    ```

### SSH Hizmetini Yeniden Başlatma
Yapılandırma Değişiklerinin Geerli Olması İçin SSH Hizmeti Yeniden Başlatmamız Gerekir:
```
sudo systemctl restart ssh
```

### Güvenlik Duvarı (UFW) Eklemek
Yeni Port'un Güvenlik Duvarında İzinli Olmasını Sağlamak İçin:
```
sudo ufw allow <port>
```

Güvenlik Duvarında Port İzni Kaldırmak
Eğer bir portu engellemek isterseniz:
```
sudo ufw delete allow <port>
```

Güvenlik Duvarını Etkinleştirme
  - Güvenlik duvarı (UFW) kapalıysa, şu komutla etkinleştirebiliriz:
    ```
    sudo ufw enable
    ```
  - Güvenlik duvarını kapatma
    ```
    sudo ufw disable
    ```

UFW Durumunu Kontrol Etme
  - Güvenlik duvarının durumunu kontrol etmek için:
  ```
  sudo ufw status
  ```

### Sanal Makineye Bağlantı Kurma (VirtualBox)
Sanal makine üzerinden bağlantı kurmak için port yönlendirme yapmanız gerekir.
  - VirtualBox ayarlarını yapılandırma
    1. VirtualBox sanal makinenizi seçin.
    2. Ayarlar >> Ağa >> Bağadaştırıc 1 (Adapter 1) kısmına gidin.
    3. Gelişmiş >> Port yönlendirme seçeneğini (Port Forwarding) seçin.
  - Port yönlendirme kuralı ekleme
    1. Ad: SSH
    2. Protokol: TCP
    3. Ana Bilgisayar Portu (Host Port): 4242
    4. Konuk Portu (Guest Port): 4242
  Değişiklikleri Kaydedin.

### SSH İle Bağalantı Kurma
SSH bağlantısını, host makinenizden (Ana Bilgisayar) kurmak için aşağıdaki komutu kullanabilirsiniz:
```
ssh <kullanıcı_adı>@localhost -p <port>
```

### SSH Oturumundan Çıkış
SSH bağlantısını sonlandırmak için terminalde şu komutu yazın:
```
exit
```






