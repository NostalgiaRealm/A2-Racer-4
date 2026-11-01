
/* ==== FUN_00549b30 @ 00549b30 ==== 
 * signature: undefined __thiscall FUN_00549b30(void * this, undefined4 param_1)
 * body: 00549b30-00549c35
 */

void __thiscall FUN_00549b30(void *this,undefined4 param_1)

{
  int *this_00;
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_84c [52];
  undefined1 *local_818;
  undefined1 local_814 [2056];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0057431b;
  local_c = ExceptionList;
  this_00 = *(int **)(*(int *)((int)this + 4) + 0xb0);
  DAT_0074d690 = DAT_0074d690 + 1;
  ExceptionList = &local_c;
  FUN_00549a20(this);
  FUN_00549940(this);
  if ((int)*(short *)((int)this + 0x3e) - (int)*(short *)((int)this + 0x40) < 0x97) {
    FUN_0053e750(local_84c,(int)this,param_1);
    local_4 = 0;
    FUN_005494b0(local_84c,(uint)this);
    piVar2 = (int *)this_00[2];
    iVar3 = *(short *)((int)this + 0x3e) * 4;
    uVar1 = (int)piVar2 + iVar3 + 0x1f & 0xffffffe0;
    if (uVar1 < (uint)this_00[3]) {
      this_00[2] = uVar1;
    }
    else {
      piVar2 = (int *)FUN_004f5be0(this_00,iVar3);
    }
    iVar3 = FUN_00549570(local_84c,(int)this,piVar2);
    FUN_005490e0(local_84c,(int)this,piVar2,iVar3,this_00);
    FUN_004f5b80(this_00);
    if ((local_818 != local_814) && (local_818 != (undefined1 *)0x0)) {
      FUN_00559d4e(local_818);
    }
  }
  else {
    FUN_00549ad0(this);
    FUN_004f5b80(this_00);
  }
  ExceptionList = local_c;
  return;
}


