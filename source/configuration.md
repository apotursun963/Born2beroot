# Debian'ı Yapılandırma

Sudo, SHH, UFW, Şifre Politikaları ve monitoring.sh kurulumları içerir.

## 1. Sudo Kurulumu

### 1.1 Sudo Kurma
Öncelikle `root` kullanıcısına geçmek için aşağıdaki komutu kullanın.
```
su root
```

### 1.2 Sudo'yu Yükleyin
Sistem paketini güncelleyin ve sudo paketini yükleyin.
```
apt update && apt upgrade && apt install sudo
```

### 1.3 Kullanıcıyı Sudo Grubuna ekleme
Kendi kullanıcı adınızı sudo grubuna ekleyin.
```
sudo usermod -aG sudo `<kullanıcı_adı>`
```

### 1.4 root oturumdan çıkış
root oturumdan çıkmak için:
```
exit
```
