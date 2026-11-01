
/* ==== FUN_00555e94 @ 00555e94 ==== 
 * signature: undefined4 * __thiscall FUN_00555e94(void * this, byte param_1)
 * body: 00555e94-00555eaf
 */

undefined4 * __thiscall FUN_00555e94(void *this,byte param_1)

{
  ~time_put<>(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


