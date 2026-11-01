
/* ==== FUN_004fd370 @ 004fd370 ==== 
 * signature: undefined4 * __thiscall FUN_004fd370(void * this, byte param_1)
 * body: 004fd370-004fd38f
 */

undefined4 * __thiscall FUN_004fd370(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0057861c;
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


