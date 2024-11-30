# Debian'ı Yapılandırma

Sudo, SHH, UFW, Şifre Politikaları ve monitoring.sh kurulumları içerir.

## Sudo Kurma
root'a geçin
```
su root
```

Sudo'yu indirin
```
apt update && apt upgrade && apt install sudo
```

Kullanıcıyı Sudo Gruplar'ına ekleyin
```
sudo usermod -aG sudo <kullanıcı_adı>
```

root otorumdan çıktın
```
exit
```
