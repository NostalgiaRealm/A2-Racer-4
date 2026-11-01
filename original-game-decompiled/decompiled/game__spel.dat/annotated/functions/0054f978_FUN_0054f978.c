
/* ==== FUN_0054f978 @ 0054f978 ==== 
 * signature: bool __thiscall FUN_0054f978(void * this, undefined4 param_1, undefined4 param_2)
 * body: 0054f978-0054f99e
 */

bool __thiscall FUN_0054f978(void *this,undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  ushort unaff_SI;
  
  cVar1 = (**(code **)(*(int *)this + 0x30))(param_2,0);
  return (*(ushort *)(*(int *)((int)this + 0x10) + cVar1 * 2) & unaff_SI) != 0;
}


