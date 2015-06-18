#include <stdlib.h>
#include "proto/task.pb-c.h"

int main()
{
    Task task = TASK__INIT;
    task.id = 1;

    size_t len = task__get_packed_size(&task);
    uint8_t *buf = malloc(len);
    task__pack(&task, buf);
    free(buf);

    return 0;
}
