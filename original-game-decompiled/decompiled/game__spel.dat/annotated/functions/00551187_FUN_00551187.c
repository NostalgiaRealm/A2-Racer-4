
/* ==== FUN_00551187 @ 00551187 ==== 
 * signature: undefined4 * __thiscall FUN_00551187(void * this, byte param_1)
 * body: 00551187-005511a2
 */

undefined4 * __thiscall FUN_00551187(void *this,byte param_1)

{
  ~time_put<>(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


