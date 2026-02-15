#include <stdio.h>

// 딥러닝 모델 설정 구조체
typedef struct {
    char model_name[20];
    int batch_size;
} DL_Model;

int main() {
    DL_Model yolo = {"YOLOv8_Lite", 16};
    printf("모델 초기화 완료: %s\n", yolo.model_name);
    return 0;
}
