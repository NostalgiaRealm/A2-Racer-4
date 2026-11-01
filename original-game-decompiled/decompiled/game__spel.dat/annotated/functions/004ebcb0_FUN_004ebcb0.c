
/* ==== FUN_004ebcb0 @ 004ebcb0 ==== 
 * signature: undefined __thiscall FUN_004ebcb0(void * this, int param_1)
 * body: 004ebcb0-004ebdda
 */

void __thiscall FUN_004ebcb0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined **appuStack_28 [3];
  undefined1 auStack_1c [16];
  undefined4 uStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_c = *unaff_FS_OFFSET;
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_005724f8;
  *unaff_FS_OFFSET = &uStack_c;
  if (-1 < param_1) {
    iVar2 = (*(code *)**(undefined4 **)this)();
    if (param_1 < iVar2) {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)((int)this + 4) + 4) + param_1 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar2 = *(int *)((int)this + 4);
      puVar1 = *(undefined4 **)(iVar2 + 8);
      iVar6 = *(int *)(iVar2 + 4) + param_1 * 4;
      puVar3 = (undefined4 *)(iVar6 + 4);
      if (puVar3 != puVar1) {
        iVar6 = iVar6 - (int)puVar3;
        do {
          *(undefined4 *)(iVar6 + (int)puVar3) = *puVar3;
          puVar3 = puVar3 + 1;
        } while (puVar3 != puVar1);
      }
      FUN_0042f530();
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -4;
      *unaff_FS_OFFSET = uStack_c;
      return;
    }
  }
  puVar4 = FUN_0049df90(local_58,(byte *)s_Illegal_object_index_to_remove___005af54c);
  uStack_4 = 0;
  puVar5 = FUN_0049df90(auStack_48,(byte *)s_FacMan_exception_in___s___d__005af2bc);
  uStack_4._0_1_ = 1;
  puVar4 = FUN_0047c9a0(auStack_38,puVar5,(int)puVar4);
  uStack_4._0_1_ = 2;
  FUN_00558826(appuStack_28);
  auStack_1c[0] = (undefined1)param_1;
  FUN_004028f0(auStack_1c,'\0');
  uStack_4._0_1_ = 4;
  appuStack_28[0] = &PTR_FUN_005772f4;
  FUN_004093c0(auStack_1c,puVar4,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(appuStack_28,&DAT_00583558);
}


