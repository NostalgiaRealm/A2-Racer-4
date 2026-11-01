
/* ==== FUN_00558837 @ 00558837 ==== 
 * signature: exception * __thiscall FUN_00558837(void * this, byte param_1)
 * body: 00558837-00558852
 */

exception * __thiscall FUN_00558837(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_0054b339(this);
  }
  return this;
}


