# Debian'ı Yapılandırma

Sudo, SHH, UFW, Şifre Politikaları ve monitoring.sh kurulumları içerir.

## Sudo Kurulumu

### Sudo Kurma
Öncelikle `root` kullanıcısına geçmek için aşağıdaki komutu kullanın.
```
su root
```

### Sudo'yu Yükleyin
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
Güvenlik duvarının durumunu kontrol etmek için:
```
sudo ufw status
```





