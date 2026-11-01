
/* ==== FUN_004e7600 @ 004e7600 ==== 
 * signature: LPVOID __thiscall FUN_004e7600(void * this, byte param_1)
 * body: 004e7600-004e761d
 */

LPVOID __thiscall FUN_004e7600(void *this,byte param_1)

{
  FUN_004e6a20((int)this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


