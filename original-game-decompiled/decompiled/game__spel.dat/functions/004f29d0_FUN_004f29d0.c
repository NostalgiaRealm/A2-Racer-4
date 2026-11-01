
/* ==== FUN_004f29d0 @ 004f29d0 ==== 
 * signature: undefined4 * __thiscall FUN_004f29d0(void * this, void * param_1, undefined4 * param_2)
 * body: 004f29d0-004f2a07
 */

undefined4 * __thiscall FUN_004f29d0(void *this,void *param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  *(undefined ***)this = &PTR_FUN_005782e0;
  FUN_004f2a50(this,*(undefined4 *)((int)param_1 + 0x18));
  FUN_004f2be0(param_1,(int)this);
  pcVar1 = FUN_00501030((char *)*param_2);
  *(char **)((int)this + 0x14) = pcVar1;
  return this;
}


