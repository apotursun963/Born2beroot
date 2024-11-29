# VirtualBox'ta Sanal Makine Oluşturma ve Debian Kurulumu

Bu rehber, VirtualBox üzerinde bir sanal makine oluşturup Debian işletim sistemini kurmak için adım adım talimatları içermektedir.

## 1. Yeni Bir Sanal Makine Oluşturma

1. **VirtualBox**'ı açın.
2. **Yeni** butonuna tıklayın (**New**).
3. Aşağıdaki bilgileri girerek sanal makinenizi yapılandırın:

### 1.1 Name and Operating System
- **Name**: `Born2beRoot`
- **Machine Folder**: `/sgoinfre/goinfre/Perso/your_login`
- **Type**: `Linux`
- **Version**: `Debian (64-bit)`

---

### 1.2 Hardware (Donanım Ayarları)
- **Memory Size**: `1024 MB`

---

### 1.3 Hard Disk (Disk Ayarları)
- **Hard Disk Size**: `31.00 GB`

---

4. Tüm ayarları kontrol ettikten sonra **Finish** butonuna tıklayın.

---

## 2. Ek Ayarlar ve Debian Kurulumu
- Sanal makine oluşturulduktan sonra, Debian kurulumuna geçebilirsiniz.
- Debian ISO dosyasını sanal makineye bağlayarak kurulumu başlatabilirsiniz.

---

### Dizin Yapısı

Proje ve ayarların düzenli tutulması için aşağıdaki dizin yapısını kullanabilirsiniz:

