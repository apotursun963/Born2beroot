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
SSH sunucusunun varsayılan olarak dinlediği port 22'dir. Güvenliği arttırmak için bu port'u değiştirebiliriz.
  - SSH Yapılandırma Dosyasını Düzenleme için:
    ```
    sudo nano /etc/ssh/sshd_config
    ```
  - Port Değerini Değiştirme:
    ```
    #Port 22 >>> Port 4242
    ```
  - Yapılandırmayı Kaydetmek için:
    ```
    Ctrl + O | Enter | Ctrl + X
    ```


    







