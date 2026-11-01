
/* ==== FUN_0054fac5 @ 0054fac5 ==== 
 * signature: ushort * __thiscall FUN_0054fac5(void * this, ushort * param_1, ushort * param_2)
 * body: 0054fac5-0054faf1
 */

ushort * __thiscall FUN_0054fac5(void *this,ushort *param_1,ushort *param_2)

{
  LCID *pLVar1;
  LCID *pLVar2;
  uint uVar3;
  
  if (param_1 != param_2) {
    pLVar1 = (LCID *)((int)this + 8);
    do {
      pLVar2 = pLVar1;
      uVar3 = FUN_0054ec98(this,(uint)*param_1,pLVar1);
      this = pLVar2;
      *param_1 = (ushort)uVar3;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_1;
}


