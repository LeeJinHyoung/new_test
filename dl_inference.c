#include <stdio.h>
#include <stdlib.h>
// 딥러닝 모델 설정 구조체
typedef struct {
    char model_name[20];
    int batch_size;
} DL_Model;

int main() {
    DL_Model yolo = {"YOLOv8_Lite", 16};
    int timeout = 100;
    printf("모델 초기화 완료: %s\n", yolo.model_name);
    return 0;
}
// 기존 구조체 선언 아래에 추가해 보게
void relu(float *x) {
    if (*x < 0) {
        *x = 0;
    }
}
