# Debian'ı Yapılandırma

Sudo, SHH, UFW, Şifre Politikaları ve monitoring.sh kurulumları içerir.

## 1. Sudo Kurulumu

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
