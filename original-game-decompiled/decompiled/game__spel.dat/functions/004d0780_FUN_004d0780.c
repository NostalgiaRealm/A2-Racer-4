
/* ==== FUN_004d0780 @ 004d0780 ==== 
 * signature: undefined __thiscall FUN_004d0780(void * this, undefined4 * param_1, uint param_2, undefined4 param_3, LONG param_4, undefined4 param_5, undefined4 param_6)
 * body: 004d0780-004d0928
 */

void __thiscall
FUN_004d0780(void *this,undefined4 *param_1,uint param_2,undefined4 param_3,LONG param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  void *this_00;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  undefined8 local_8;
  
  uVar4 = param_2;
  local_8._0_4_ = param_4;
  local_8._4_4_ = param_5;
  if ((((*(int **)((int)this + 0x50) == (int *)0x0) ||
       (iVar2 = FUN_0055a4ea(*(int **)((int)this + 0x50),(LONG *)&local_8), iVar2 != 0)) ||
      ((uVar4 != 0 && (iVar2 = FUN_0055a06b(*(int **)((int)this + 0x50),uVar4,1), iVar2 != 0)))) ||
     (iVar2 = FUN_0055a4c8(*(char **)((int)this + 0x50),&local_8), iVar2 != 0)) {
    param_6 = DAT_00750068;
    param_4 = 0;
    param_2 = 0xffffffff;
    param_5 = 0;
    puVar8 = &param_2;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = *puVar8;
      puVar8 = puVar8 + 1;
      param_1 = param_1 + 1;
    }
    return;
  }
  this_00 = *(void **)((int)this + 0x44);
  if (this_00 != (void *)0x0) {
    *(undefined4 *)((int)this + 0x40) = param_6;
    pcVar7 = *(char **)((int)this_00 + 4);
    if (((pcVar7 != (char *)0x0) && (pcVar7[-1] != '\0')) && (pcVar7[-1] != -1)) {
      FUN_004028f0(this_00,'\x01');
      uVar4 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      param_2 = uVar4;
      uVar3 = FUN_00402a00(this_00,uVar4,'\x01');
      if ((char)uVar3 != '\0') {
        pcVar9 = *(char **)((int)this_00 + 4);
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_004029e0(this_00,uVar4);
      }
    }
    iVar2 = *(int *)((int)this_00 + 8);
    iVar6 = -1;
    if (iVar2 != -1) {
      iVar6 = iVar2;
    }
    if (iVar6 != 0) {
      FUN_005580e0(*(undefined4 **)((int)this_00 + 4),
                   (undefined4 *)((int)*(undefined4 **)((int)this_00 + 4) + iVar6),iVar2 - iVar6);
      uVar4 = *(int *)((int)this_00 + 8) - iVar6;
      uVar3 = FUN_00402a00(this_00,uVar4,'\0');
      if ((char)uVar3 != '\0') {
        *(uint *)((int)this_00 + 8) = uVar4;
        *(undefined1 *)(*(int *)((int)this_00 + 4) + uVar4) = 0;
      }
    }
  }
  param_6 = *(undefined4 *)((int)this + 0x40);
  param_4 = (LONG)local_8;
  param_2 = 0;
  param_5 = local_8._4_4_;
  puVar8 = &param_2;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar8;
    puVar8 = puVar8 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


