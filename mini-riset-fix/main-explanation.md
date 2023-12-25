# Ajuan Topik: Monitoring Suhu dan Kelembapan

Judul: Tinjauan Penghematan Energi Listrik melalui Kontrol Otomatis Perangkat Elektronik Berbasis IoT Berdasarkan Pemantauan Suhu dan Kelembapan


## Persoalan Praktis
Penggunaan alat elektronik seperti kipas angin/AC dan humidifier dalam rumah tangga telah menjadi kebutuhan umum, namun seringkali penggunaan yang tidak efisien dari perangkat-perangkat ini dapat meningkatkan konsumsi listrik secara signifikan. Melalui implementasi teknologi Internet of Things (IoT) untuk memantau suhu dan kelembapan di dalam rumah, kita dapat mengatur kipas angin, AC, dan humidifier secara otomatis, sesuai dengan kondisi lingkungan yang sedang terjadi. Potensi untuk menghemat energi listrik menjadi salah satu aspek krusial dalam hal ini. Dengan pengaturan yang cerdas berdasarkan kondisi lingkungan, selain memberikan keuntungan finansial bagi pemilik rumah, penggunaan energi listrik yang lebih efisien juga memiliki dampak positif terhadap lingkungan dengan mengurangi jejak karbon.


## Research Question
- Bagaimana penerapan teknologi IoT untuk memantau suhu dan kelembapan dapat diintegrasikan dengan sistem kontrol otomatis perangkat elektronik untuk mengoptimalkan penghematan energi listrik?
- Apakah adopsi teknologi IoT dalam pengaturan perangkat elektronik berdasarkan kondisi lingkungan mempengaruhi kenyamanan serta efisiensi energi di lingkungan rumah?


## Teori Terkait
- IoT (Internet of Things)
    
    IoT merupakan konsep di mana perangkat-perangkat fisik dihubungkan dan dapat saling berkomunikasi melalui internet. Ini memungkinkan perangkat untuk mengumpulkan dan bertukar data, memungkinkan pengontrolan jarak jauh dan interaksi antarperangkat. Dalam penelitian ini, IoT digunakan untuk memantau suhu dan kelembapan serta mengontrol perangkat rumah tangga secara otomatis berdasarkan data yang terkumpul.

- Kontrol Otomatis

    Kontrol otomatis adalah proses pengaturan perangkat secara otomatis berdasarkan input dari sensor atau sistem kontrol yang mengukur variabel tertentu dalam lingkungan. Dalam konteks ini, penggunaan sensor suhu dan kelembapan untuk mengontrol perangkat seperti kipas angin, AC, dan humidifier adalah contoh dari kontrol otomatis di mana perangkat merespons secara otomatis terhadap perubahan kondisi lingkungan.

- Efisiensi Energi

    Efisiensi energi adalah kemampuan untuk menggunakan energi secara optimal tanpa mengurangi kualitas layanan atau kenyamanan. Dalam penelitian ini, penggunaan teknologi IoT untuk mengontrol perangkat rumah tangga diharapkan dapat meningkatkan efisiensi energi dengan mengurangi konsumsi listrik tanpa mengorbankan kenyamanan penghuni rumah.

- Perilaku Konsumen
    
    Teori perilaku konsumen mempelajari pola-pola, kebiasaan, dan preferensi konsumen terhadap teknologi, termasuk bagaimana mereka merespons penggunaan teknologi dalam kehidupan sehari-hari. Dalam konteks penelitian ini, penting untuk memahami bagaimana pengguna bereaksi terhadap pengaturan otomatis perangkat berdasarkan suhu dan kelembapan untuk memastikan penerimaan dan keberhasilan teknologi tersebut dalam penggunaan sehari-hari.


## Metode
Penelitian ini menggunakan pendekatan eksperimental untuk mengevaluasi efektivitas penghematan energi listrik melalui kontrol otomatis perangkat elektronik berbasis Internet of Things (IoT) dengan memantau suhu dan kelembapan. Metode ini melibatkan pemasangan perangkat keras Arduino yang terdiri dari:
- Sensor DHT11 untuk memantau suhu dan kelembapan;
- Wemos D1 Mini sebagai pengontrol IoT;
- Serta relay untuk mengendalikan perangkat elektronik seperti kipas angin dan humidifier.

Pengontrolan dilakukan menggunakan program yang dikembangkan dengan Arduino dan disajikan melalui aplikasi Blynk pada smartphone. Aplikasi Blynk pada smartphone memungkinkan pengguna untuk memantau kondisi lingkungan dan mengontrol perangkat secara otomatis dari jarak jauh. Data suhu dan kelembapan yang dikumpulkan oleh sensor digunakan sebagai masukan untuk memutus atau mengaktifkan perangkat secara otomatis. Metode ini melibatkan instalasi sensor, penghubungan perangkat keras, pengkodean menggunakan Arduino IDE, serta konfigurasi aplikasi Blynk untuk mengatur perangkat elektronik berdasarkan kondisi suhu dan kelembapan yang terdeteksi.


## Dataset
Dataset yang digunakan dalam penelitian ini adalah data suhu dan kelembapan yang dikumpulkan oleh sensor DHT11 pada interval waktu tertentu. Data tersebut mencakup kondisi lingkungan sebelum dan setelah penerapan kontrol otomatis menggunakan IoT pada perangkat listrik seperti kipas angin dan humidifier. Selain itu, dataset juga mencakup informasi tentang konsumsi energi listrik sebelum dan sesudah implementasi sistem kontrol otomatis.


## Code Program
Kode program dapat dilihat pada [tautan ini](https://github.com/bregsiaju/Riset-Informatika/blob/main/mini-riset-fix/program_monitoring.ino).


## Analisis (Metrik pengujian)
Analisis dilakukan dengan membandingkan penggunaan energi listrik sebelum dan setelah penerapan sistem kontrol otomatis. Metrik pengujian melibatkan perbandingan konsumsi energi listrik pada perangkat sebelum adanya pengontrolan otomatis berbasis suhu dan kelembapan dengan kondisi setelah implementasi sistem tersebut. Selain itu, dilakukan analisis terhadap efisiensi energi berdasarkan perubahan suhu dan kelembapan lingkungan serta waktu penggunaan perangkat. Hasil dari analisis ini akan menunjukkan seberapa efektif sistem kontrol otomatis berbasis IoT dalam mengurangi konsumsi energi listrik pada perangkat kipas angin dan humidifier.

Selain itu, akan dilakukan pengujian kinerja program arduino, seperti:
- **Deteksi dan Penanganan Kesalahan (Error Detection):** Metrik ini melibatkan identifikasi potensi kesalahan dalam program Arduino yang dikembangkan, seperti kegagalan sensor atau kesalahan dalam logika pengaturan suhu dan kelembapan. Pengujian ini akan menilai sejauh mana program dapat mendeteksi dan menangani kesalahan dengan tepat.
- **Validasi Fungsionalitas:** Pengujian ini mencakup pengujian fungsi-fungsi utama dari program Arduino, seperti pembacaan data dari sensor, kontrol perangkat elektronik berdasarkan data suhu dan kelembapan, serta respons sistem terhadap perubahan lingkungan.


## Gambar Pendukung
- Rancangan Rangkaian Sistem ![Rancangan rangkaian sistem](https://github.com/bregsiaju/Riset-Informatika/blob/main/mini-riset-fix/rangkaian-sistem.png)
- Implementasi Rangkaian ![Implementasi Rangkaian](https://github.com/bregsiaju/Riset-Informatika/blob/main/mini-riset-fix/rangkaian-arduino.jpg)
- Contoh Hasil Monitoring Melalui Aplikasi Blynk ![Hasil Monitoring](https://github.com/bregsiaju/Riset-Informatika/blob/main/mini-riset-fix/display-blynk.jpg)


## Video Penerapan
Contoh video penerapan program monitoring suhu dan kelembapan menggunakan Arduino dapat dilihat pada [tautan ini](https://youtu.be/-K0CIrU49K4?si=0aoy-r55oJ116v1F&t=720).


## Referensi
- Akbar, F., & Sugeng, S. (2021). Implementasi Sistem Monitoring Suhu dan Kelembapan Ruangan Penyimpanan Obat Berbasis Internet Of Things (IoT) di Puskesmas Kecamatan Taman Sari Jakarta Barat. Jurnal Sosial Teknologi, 1(9), 1021–1028. https://doi.org/10.59188/jurnalsostech.v1i9.198
- Saputra, J. S., & Siswanto, S. (2020). Prototype Sistem Monitoring Suhu Dan Kelembaban Pada Kandang Ayam Broiler Berbasis Internet of Things. PROSISKO: Jurnal Pengembangan Riset Dan Observasi Sistem Komputer, 7(1). https://doi.org/10.30656/prosisko.v7i1.2132
- Tri Ningsih, P., Wawan Indrawan, A., Teknik Elektro, J., & Negeri Ujung Pandang, P. (2021). Rancang Bangun Sistem Kontrol Suhu dan Kelembaban Sarang Burung Walet Berbasis Internet Of Things. Seminar Nasional Teknik Elektro Dan Informatika (SNTEI), 0(0), 251–257. http://118.98.121.208/index.php/sntei/article/view/2864
