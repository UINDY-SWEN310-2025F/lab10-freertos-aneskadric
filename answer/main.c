#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void task1(void *pvParameters) {
    int count = 0;
    while (count < 3) {
        printf("hello task1: count %d\n", count);
        count++;
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

void task2(void *pvParameters) {
    int count = 0;
    while (count < 3) {
        printf("hello task2: count %d\n", count);
        count++;
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

void task3(void *pvParameters) {
    int count = 0;
    while (count < 3) {
        printf("hello task3: count %d\n", count);
        count++;
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
    vTaskDelete(NULL);
}

void app_main(void)
{

    xTaskCreate(task1, "task1", 2048, NULL, 1, NULL);

 
    xTaskCreate(task2, "task2", 2048, NULL, 2, NULL);

  
    xTaskCreate(task3, "task3", 2048, NULL, 3, NULL);
}
