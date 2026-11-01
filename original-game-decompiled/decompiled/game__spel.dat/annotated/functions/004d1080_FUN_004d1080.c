
/* ==== FUN_004d1080 @ 004d1080 ==== 
 * signature: exception * __thiscall FUN_004d1080(void * this, byte param_1)
 * body: 004d1080-004d109d
 */

exception * __thiscall FUN_004d1080(void *this,byte param_1)

{
  FUN_004d1050(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


