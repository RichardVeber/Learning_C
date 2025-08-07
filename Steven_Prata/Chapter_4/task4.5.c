#include <stdio.h>
int main(void){
    float download_speed_mbps; 
    float file_size_MB;
    float download_speed_MBps;
    printf("Введите скорость загрузки в мегабитах:");
    scanf("%f", &download_speed_mbps);
    printf("Введите размер файла в мегабайтах:");
    scanf("%f", &file_size_MB);
    download_speed_MBps = download_speed_mbps/8;
    float download_time = file_size_MB/download_speed_MBps;
    printf("При скорости загрузки %.2f мегабит в секунду файл размером %.2f мегабайт загружается за  %.2f секунд(ы).\n", download_speed_mbps, file_size_MB, download_time);
    return 0;
}