
/* ==== FUN_00411300 @ 00411300 ==== 
 * signature: LPVOID __thiscall FUN_00411300(void * this, byte param_1)
 * body: 00411300-0041131d
 */

LPVOID __thiscall FUN_00411300(void *this,byte param_1)

{
  FUN_004013b0((int)this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


