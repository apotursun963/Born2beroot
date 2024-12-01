#  VirtualBox'ta Debian Kurulumu

## VirtualBox'ta Sanal Makine Oluşturma

1. **VirtualBox**'ı açın ve **Yeni** butonuna tıklayın.
2. Aşağıdaki bilgileri girerek sanal makinenizi oluşturun:
   - **Name**: `Born2beRoot`
   - **Machine Folder**: `/sgoinfre/goinfre/Perso/your_login`
   - **Type**: `Linux`
   - **Version**: `Debian (64-bit)`
   - **Memory Size**: `1024 MB`
   - **Hard Disk Size**: `31.00 GB`
3. Ayarları kontrol ettikten sonra **Finish** butonuna tıklayın.

## Debian Kurulumu
1. ISO Bağlayın: Debian ISO dosyasını sanal makineye bağlayın ve kurulumu başlatın.
3. Kurulum Seçimi: Debian başladığında `install` seçeneğine tıklayın.
4. Dil ve Bölge Ayarları: Dil, Coğrafi konum ve Kalvye düzenini seçin.
5. Hostname: `your_login42` olarak belirleyin.
6. Domain: Domain adını boş bırakın.
7. Şifre Belirleyin: Güçlü bir root şifresi oluşturun.
8. Kullanıcı Oluşturun: Yeni bir kullanıcı oluşturun ve güçlü bir şifre belirleyin.

## Disk Bölümlendirilmesi

Disk bölümlendirilmesi, bir sabit disk veya SSD gibi bir depolama aygıtının, birden fazla bağımsız bölüme (partition) ayrılması işlemidir. Bu bölümler, depolama cihazının farklı alanlarını ayrı ayrı kullanmayı sağlar ve her biri işletim sistemi tarafından ayrı bir disk gibi algılanır.

### Adımlar:
1. **Manual Bölümleme Seçeneğini Seçin**
2. **Harddisk Seçin** - `SCSI13 (0,0,0) (sda)`
3. **Yes** Seçeneğini Tıklayın

### Oluşturulacak İki Bölüm:
- **Şifrelenmemiş /boot Bölümü**
- **Şifrelenmiş Mantıksal Hacim (Encrypted Logical Volumes) Bölümü**

#### 1. **Şifrelenmemiş /boot Bölümü**
`/boot` bölümü, işletim sisteminin başlatılması için gerekli dosyaları barındırır ve genellikle ayrı bir disk bölümü olarak yapılandırılır. Genellikle **500 MB ile 1 GB** arasındaki bir boyut yeterlidir.

**Adımlar:**
- `pri/log xxGB FREE SPACE` > `Create a new partition`
- Boyut olarak **500MB** belirleyin.
- Tip olarak **Primary** seçin.
- Başlangıç (Beginning) olarak seçin.
- **Mount point** olarak `/boot` seçin.
- `Done` butonuna tıklayın.

#### 2. **Şifrelenmiş Mantıksal Hacim (Encrypted Logical Volumes) Bölümü**
Bu bölüm, diskin geri kalan kısmında şifreli bir mantıksal hacim oluşturur.

**Adımlar:**
- `pri/log xxGB FREE SPACE` > `Create a new partition`
- Boyut olarak **max** belirleyin.
- Tip olarak **Logical** seçin.
- **Mount point** olarak `Don't mount it` seçin.
- `Done` butonuna tıklayın.

## Disk Şifreleme

Disk şifreleme, bir diskteki tüm verilerin şifrelenmesi işlemidir. Bu sayede, diskteki verilere sadece yetkili `root` kullanıcılar erişebilir. Şifreleme, diski okuma girişiminde bulunan kişilerden verilerin korunmasını sağlar.

### Adımlar:
1. **`Configure encrypted volumes`** seçeneğini tıklayın.
2. **Yes** seçeneğini tıklayın.
3. **`Create encrypted volumes`** seçeneğini seçin.
4. **`/dev/sda5`** bölümünü seçin.
5. `Done` > `Finish` > `Yes` butonlarına tıklayın.
6. Disk şifrelemesi için bir şifre belirleyin.











