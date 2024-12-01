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
1. `Manual` Bölümlemeyi Seçin.
2. Harddisk Seçin - `SCSI13 (0,0,0) (sda)`
3. `Yes` Seçeneğini Tıklayın.

2 bölüm oluşturacağız, ilki `unencrypted /boot` bölümü, diğeri ise `encrypted logical volumes`  için olacaktır:
- **Şifrelenmemiş /boot** bölümü
   - `pri/log xxGB FREE SPACE` >>> `Create a new partition` >>> `500MB` >>> `Primary` >>> `Beginning` >>> `Mount point` >>> `/boot` >>> `Done`
- **Şifrelenmiş mantıksal hacim** bölümü
   - `pri/log xxGB FREE SPACE` >>> `Create a new partition` >>> `max` >>> `Logical` >>> `Mount point` >>> `Don't mount it` >>> `Done`
















