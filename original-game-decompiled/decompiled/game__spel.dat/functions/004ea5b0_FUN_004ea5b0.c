
/* ==== FUN_004ea5b0 @ 004ea5b0 ==== 
 * signature: undefined4 __thiscall FUN_004ea5b0(void * this, int param_1, undefined4 param_2, void * param_3)
 * body: 004ea5b0-004ea7c5
 */

/* WARNING: Removing unreachable block (ram,0x004ea6d0) */

uint __thiscall FUN_004ea5b0(void *this,int param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  void *this_00;
  void *unaff_ESI;
  undefined4 *puVar11;
  int unaff_retaddr;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  void *pvStack_18;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572208;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  bVar2 = FUN_004eb460(this,(int)param_3);
  if (bVar2) {
    puVar4 = FUN_0049df90(local_58,(byte *)s_Device__s_already_exists__005b78b0);
    local_4 = 0;
    puVar5 = FUN_0049df90(local_48,(byte *)s_Input_exception_in___s___d__005b77e4);
    local_4._0_1_ = 1;
    puVar6 = (undefined4 *)FUN_0047c9a0(local_38,puVar5,(int)puVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004edac0(local_28,puVar6);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_28,&DAT_005872d0);
  }
  iVar7 = FUN_004ea2c0(this,param_1);
  cVar3 = (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 8) + 4) + iVar7 * 4) + 4))
                    (*(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 100),param_2);
  iVar1 = *(int *)(*(int *)((int)this + 8) + 4);
  if (cVar3 == '\0') {
    (**(code **)(**(int **)(iVar1 + iVar7 * 4) + 8))();
    uVar8 = FUN_004ea460(this,iVar7);
    ExceptionList = pvStack_18;
    return uVar8 & 0xffffff00;
  }
  uVar8 = *(uint *)((int)param_3 + 8);
  iVar1 = *(int *)(iVar1 + iVar7 * 4);
  this_00 = (void *)(iVar1 + 0x90);
  if (this_00 == param_3) {
    FUN_0040f800(this_00,uVar8,0xffffffff);
    FUN_0040f800(this_00,0,0);
  }
  else {
    if (uVar8 != 0) {
      puVar4 = *(undefined1 **)((int)param_3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0057629c;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        iVar7 = *(int *)(iVar1 + 0x94);
        if (iVar7 != 0) {
          cVar3 = *(char *)(iVar7 + -1);
          if ((cVar3 == '\0') || (cVar3 == -1)) {
            FUN_0054b339((char *)(iVar7 + -1));
          }
          else {
            *(char *)(iVar7 + -1) = cVar3 + -1;
          }
        }
        *(undefined4 *)(iVar1 + 0x94) = 0;
        *(undefined4 *)(iVar1 + 0x98) = 0;
        *(undefined4 *)(iVar1 + 0x9c) = 0;
        puVar4 = *(undefined1 **)((int)param_3 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0057629c;
        }
        *(undefined1 **)(iVar1 + 0x94) = puVar4;
        *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)((int)param_3 + 8);
        *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)((int)param_3 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_004ea79a;
      }
    }
    uVar9 = FUN_00402a00(this_00,uVar8,'\x01');
    if ((char)uVar9 != '\0') {
      puVar6 = (undefined4 *)&DAT_0057629c;
      if (*(undefined4 **)((int)param_3 + 4) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)((int)param_3 + 4);
      }
      puVar11 = *(undefined4 **)(iVar1 + 0x94);
      for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar11 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar10 = uVar8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_004029e0(this_00,uVar8);
      this = unaff_ESI;
    }
  }
LAB_004ea79a:
  uVar9 = FUN_004ea240(this,*(int *)(*(int *)(*(int *)((int)this + 8) + 4) + unaff_retaddr * 4));
  ExceptionList = pvStack_18;
  return CONCAT31((int3)((uint)uVar9 >> 8),1);
}


