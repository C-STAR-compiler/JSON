#include <stdio.h>

#include <jsonfile.h>

int main(void)
{
  CHECK_MEMORY

  JSONFile *json = NEW (JSONFile) ("tst/test.json", ACCESS_READ | ACCESS_WRITE);

// TODO: Check with read-to-end

  CHECK_MEMORY

  DELETE (json);

  CHECK_MEMORY

  STOP_WATCHING
}