
/* ==== FUN_0054eb50 @ 0054eb50 ==== 
 * signature: uint __thiscall FUN_0054eb50(void * this, uint param_1, undefined4 * param_2)
 * body: 0054eb50-0054ec37
 */

uint __thiscall FUN_0054eb50(void *this,uint param_1,undefined4 *param_2)

{
  UINT UVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *local_8;
  
  uVar2 = param_1;
  if (param_2 == (undefined4 *)0x0) {
    local_8 = DAT_0074dce4;
    UVar1 = DAT_0074dcf4;
  }
  else {
    this = (void *)*param_2;
    UVar1 = param_2[1];
    local_8 = this;
  }
  if (local_8 == (void *)0x0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar2 = param_1 + 0x20;
    }
  }
  else {
    iVar4 = 1;
    if ((int)param_1 < 0x100) {
      if (DAT_005c8378 < 2) {
        uVar3 = (byte)PTR_DAT_005c8384[param_1 * 2] & 1;
      }
      else {
        uVar3 = FUN_0055c336(this,param_1,1);
      }
      if (uVar3 == 0) {
        return uVar2;
      }
    }
    if ((PTR_DAT_005c8384[((int)uVar2 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar2) & 0xffff00ff;
    }
    else {
      uVar3 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar2,(char)(uVar2 >> 8));
      param_1 = CONCAT22((short)uVar3,(undefined2)param_1) & 0xff00ffff;
      iVar4 = 2;
    }
    iVar4 = FUN_0055c112((LCID)local_8,0x100,(char *)&param_1,iVar4,(LPWSTR)&param_2,3,UVar1,1);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        uVar2 = (uint)param_2 & 0xff;
      }
      else {
        uVar2 = (uint)param_2 & 0xffff;
      }
    }
  }
  return uVar2;
}


