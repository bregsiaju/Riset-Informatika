# Pengujian
Optimasi Efisiensi Cache dan Performa Web BerbasiS PWA

**Tools:** Google Lighthouse & WebPageTest

## Metrik Pengujian
#### 1. Performa (Performance)
- First Contentful Paint (FCP): Waktu yang dibutuhkan browser untuk merender elemen pertama pada halaman web.
- Speen Index: Kecepatan dan waktu yang dibutuhkan untuk merender konten secara visual saat halaman web dimuat
- Largest Contentful Paint (LCP): Waktu yang dibutuhkan untuk merender elemen terbesar dalam viewport.
- Total Blocking Time (TBT): Waktu yang dihabiskan oleh halaman untuk merespons input pengguna dengan baik.
- Cumulative Layout Shift (CLS): Pengukuran pergeseran tata letak yang tidak terduga selama loading halaman.

#### 2. Aksesibilitas (Accessibility)
- Keberlanjutan dan Kompatibilitas dengan Berbagai Perangkat (Compatibility across Devices): Memastikan halaman dapat diakses dan digunakan dengan baik di berbagai perangkat.
- Struktur HTML yang Benar (Proper HTML Structure): Memastikan struktur HTML sesuai standar aksesibilitas.

#### 3. Kinerja PWA (PWA Performance)
- Service Worker dan Offline Capabilities: Memeriksa apakah aplikasi memiliki service worker yang tepat dan dapat berfungsi saat offline.
- Instalasi dan Pengalaman Seperti Aplikasi (App-like Experience): Melihat apakah aplikasi dapat di-"install" dan memiliki pengalaman yang mirip dengan aplikasi native.

## Output Pengujian
Ouput pengujian berupa laporan yang terstruktur yang terdiri dari beberapa bagian utama:

- Skor atau Nilai pada Setiap Metrik:

| Score (Color)    | Status            |
| ----------------- | ---------------- |
| 0 - 49 (red) | Poor |
| 50 - 89 (orange) | Needs Improvement |
| 90 - 100 (green) | Good |

- Rekomendasi Peningkatan:
    
    Lighthouse juga memberikan rekomendasi yang spesifik tentang area mana yang dapat ditingkatkan. Rekomendasi ini dapat berupa saran teknis untuk meningkatkan performa atau saran tentang praktik terbaik yang dapat diterapkan.

- Ringkasan dan Tindak Lanjut:

    Terdapat ringkasan singkat tentang bagaimana aplikasi tampil dalam berbagai kategori. Ini membantu untuk mengetahui area mana yang perlu perhatian lebih lanjut dan perbaikan.
