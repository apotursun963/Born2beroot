# Sistem Durumu Scripti Açıklaması

Bu script, sistemin genel durum bilgilerini toplayıp bir özet şeklinde gösterir. Kullanılan her komut ve bayrağını detaylı olarak aşağıda açıklıyoruz.

---

## İçindekiler

1. [Mimari Bilgisi (`ARCH`)](#1-mimari-bilgisi-arch)
2. [Fiziksel CPU Sayısı (`PCPU`)](#2-fiziksel-cpu-sayısı-pcpu)
3. [Sanal CPU Sayısı (`VCPU`)](#3-sanal-cpu-sayısı-vcpu)
4. [RAM Kullanımı (`RAM_TOTAL`, `RAM_USED`, `RAM_PERC`)](#4-ram-kullanımı-ram_total-ram_used-ram_perc)
5. [Disk Kullanımı (`DISK_TOTAL`, `DISK_USED`, `DISK_PERC`)](#5-disk-kullanımı-disk_total-disk_used-disk_perc)
6. [CPU Kullanımı (`CPU_USAGE`)](#6-cpu-kullanımı-cpu_usage)
7. [Son Başlatılma Zamanı (`LAST_BOOT`)](#7-son-başlatılma-zamanı-last_boot)
8. [LVM Kullanımı (`LVM`)](#8-lvm-kullanımı-lvm)
9. [TCP Bağlantıları (`TCP`)](#9-tcp-bağlantıları-tcp)
10. [Kullanıcı Sayısı (`NUM_USERS`)](#10-kullanıcı-sayısı-num_users)
11. [IP ve MAC Adresleri (`IP_ADDRS`, `MAC_ADDRS`)](#11-ip-ve-mac-adresleri-ip_addrs-mac_addrs)
12. [Sudo Komut Logları (`SUDO_LOG`)](#12-sudo-komut-logları-sudo_log)
13. [Sonuç Mesajı (`wall`)](#13-sonuç-mesajı-wall)

---

### 1. Mimari Bilgisi (`ARCH`)

```bash
ARCH=$(uname -srvmo)
