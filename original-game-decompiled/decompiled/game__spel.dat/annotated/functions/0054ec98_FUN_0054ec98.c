
/* ==== FUN_0054ec98 @ 0054ec98 ==== 
 * signature: uint __thiscall FUN_0054ec98(void * this, uint param_1, LCID * param_2)
 * body: 0054ec98-0054ed78
 */

uint __thiscall FUN_0054ec98(void *this,uint param_1,LCID *param_2)

{
  UINT UVar1;
  uint uVar2;
  uint uVar3;
  LCID LVar4;
  int iVar5;
  
  uVar2 = param_1;
  UVar1 = DAT_0074dcf4;
  LVar4 = DAT_0074dce4;
  if (param_2 != (LCID *)0x0) {
    UVar1 = param_2[1];
    LVar4 = *param_2;
  }
  if (LVar4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar2 = param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_005c8378 < 2) {
        uVar3 = (byte)PTR_DAT_005c8384[param_1 * 2] & 2;
      }
      else {
        uVar3 = FUN_0055c336(this,param_1,2);
      }
      if (uVar3 == 0) {
        return uVar2;
      }
    }
    if ((PTR_DAT_005c8384[((int)uVar2 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar2) & 0xffff00ff;
      iVar5 = 1;
    }
    else {
      uVar3 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar2,(char)(uVar2 >> 8));
      param_1 = CONCAT22((short)uVar3,(undefined2)param_1) & 0xff00ffff;
      iVar5 = 2;
    }
    iVar5 = FUN_0055c112(LVar4,0x200,(char *)&param_1,iVar5,(LPWSTR)&param_2,3,UVar1,1);
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        uVar2 = (uint)param_2 & 0xff;
      }
      else {
        uVar2 = (uint)param_2 & 0xffff;
      }
    }
  }
  return uVar2;
}


